{ config, lib, pkgs, ... }:
{
  imports = [ ./modules/binbash.nix ];

  boot.isContainer = true;

  services.openssh.enable = true;
  services.openssh.permitRootLogin = "yes";

  users.mutableUsers = false;
  users.users.root.openssh.authorizedKeys.keys = [
    "ssh-ed25519 AAAAC3NzaC1lZDI1NTE5AAAAIItbyQEXRTNHiO99ljeSD7RYt1ueTgKGp3YT8FkQDrPC alejandrosanchzmedina@gmail.com"
  ];

  users.users.dev = {
    isNormalUser  = true;
    home  = "/home/dev";
    description  = "dev";
    extraGroups  = [ "wheel" "networkmanager" ];
    openssh.authorizedKeys.keys = [
      "ssh-ed25519 AAAAC3NzaC1lZDI1NTE5AAAAIItbyQEXRTNHiO99ljeSD7RYt1ueTgKGp3YT8FkQDrPC alejandrosanchzmedina@gmail.com"
    ];
  };

  security.sudo.wheelNeedsPassword = false;

  networking.hostName = lib.mkDefault "test";
  networking.useDHCP = false;
  
  services.avahi.enable = true;

  # Research how to add envfs in an older NixOS
  # Needed to be able to bind wayland socket like
  # Meanwhile import module from https://discourse.nixos.org/t/add-bin-bash-to-avoid-unnecessary-pain/5673/10
  environment.binbash = pkgs.bash;
  # Problems with
  # `sudo systemd-nspawn --bind=/run/user/1000/wayland-0:/run/user/1000/wayland-0 -D /var/lib/nixos-containers/test --boot`
  # Relevant issue: https://github.com/NixOS/nixpkgs/issues/28833
  environment.etc."os-release".mode = "0644";

  environment.systemPackages =
    (with pkgs; [
      git
      nano
      libudev
    ]);

  environment.variables = {
    UDEVPATH="${pkgs.libudev}";
    UDEVPATHDEV="${pkgs.libudev.dev}";
  };

  # /usr/lib/systemd/systemd, /lib/systemd/systemd, /sbin/init

  # Ref: https://github.com/NixOS/nixpkgs/issues/9884#issue-106733381
  system.activationScripts.installInitScript = lib.mkForce ''
    mkdir -p /sbin
    mkdir -p /usr/lib
    mkdir -p /lib

    ln --force --symbolic --relative /nix/var/nix/profiles/system/init /sbin/init
    ln --force --symbolic --relative /nix/var/nix/profiles/system/systemd/lib/systemd /usr/lib/systemd
    ln --force --symbolic --relative /nix/var/nix/profiles/system/systemd/lib/systemd /lib/systemd
  '';
}