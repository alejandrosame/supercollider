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
  in pkgs.mkShell {
    packages = with pkgs;
      [
        jq
        npins
      ]
      ++ [reset-xdg];

    inherit SC_JACK_DEFAULT_INPUTS SC_JACK_DEFAULT_OUTPUTS;
    inherit XDG_CONFIG_HOME XDG_CACHE_HOME XDG_DATA_HOME XDG_STATE_HOME;

    shellHook = ''
      echo -e "XDG_CONFIG_HOME = $XDG_CONFIG_HOME"
      echo -e "XDG_CACHE_HOME = $XDG_CACHE_HOME"
      echo -e "XDG_DATA_HOME = $XDG_DATA_HOME"
      echo -e "XDG_STATE_HOME = $XDG_STATE_HOME"
    '';
  };
}
