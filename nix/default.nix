{
  sources ? import ./npins,
  pkgs ? (import sources.nixpkgs { config = { }; overlays = []; })
}: let
in {
  shell = let
      XDG_CACHE_HOME = toString ./.. + "/.cache";
      XDG_CONFIG_HOME = toString ./.. + "/.config";
      XDG_DATA_HOME = toString ./.. + "/.local/share";
      XDG_STATE_HOME = toString ./.. + "/.config";
      # Disable SC autoconnections
      SC_JACK_DEFAULT_INPUTS = "";
      SC_JACK_DEFAULT_OUTPUTS = "";

      # Only relevant to test interactively
      reset-xdg = pkgs.writeScriptBin "reset-xdg" ''
        rm --recursive --force -- ${XDG_CACHE_HOME}
        rm --recursive --force -- ${XDG_CONFIG_HOME}
        rm --recursive --force -- ${XDG_DATA_HOME}
        rm --recursive --force -- ${XDG_STATE_HOME}
      '';

  # NOTE: Apply this:
  #   - https://discourse.nixos.org/t/qt-development-environment-on-a-flake-system/23707/5
  #   - https://nixos.wiki/wiki/Qt
  #   - https://discourse.nixos.org/t/running-locally-built-qt-apps/29984
  in pkgs.mkShell {
     nativeBuildInputs = with pkgs; [
      alsa-lib avahi cmake fftwSinglePrec gcc libsndfile libjack2 pkg-config
      xorg.libXt
      emacs
      # NOTE(alejandrosame) qt5 deps: we can also make the environment lighter
      #       by adding the specific packages on by one:
      #   - libsForQt5.qt5.qmake
      #   - libsForQt5.qt5.qtsvg
      pkgs.qt5.full
    ];
    buildInputs = with pkgs; [
      # libsForQt5.qt5.qtserialport
    ];

    packages = (with pkgs; [ jq npins ])
      # Utilities
      ++ [reset-xdg];

    # NOTE(alejandrosame): it's still unclear to me why mkShell
    # doesn't extend LD_LIBRARY_PATH as it normally happens
    # with mkDerivation.
    EXTRA_LD_LIBRARY_PATH = pkgs.lib.makeLibraryPath (with pkgs; [
      alsa-lib
      avahi
      systemd # for libudev
      xorg.libX11
    ]);

    inherit SC_JACK_DEFAULT_INPUTS SC_JACK_DEFAULT_OUTPUTS;
    inherit XDG_CONFIG_HOME XDG_CACHE_HOME XDG_DATA_HOME XDG_STATE_HOME;

    # I turned the following flags:
    # cmake -DNATIVE=ON ..
    # cmake -DCMAKE_INSTALL_PREFIX=./install ..
    shellHook = ''
      echo -e "XDG_CONFIG_HOME = $XDG_CONFIG_HOME"
      echo -e "XDG_CACHE_HOME = $XDG_CACHE_HOME"
      echo -e "XDG_DATA_HOME = $XDG_DATA_HOME"
      echo -e "XDG_STATE_HOME = $XDG_STATE_HOME"

      export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$EXTRA_LD_LIBRARY_PATH
    '';
  };
}
