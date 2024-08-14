{ config, lib, pkgs, ... }:
{ 
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

  networking.hostName = lib.mkDefault "test";
  networking.useDHCP = false;
  
  services.avahi.enable = true;

  environment.systemPackages =
    (with pkgs; [
      nano
      libudev
    ]);

  environment.variables = {
    UDEVPATH="${pkgs.libudev}";
    UDEVPATHDEV="${pkgs.libudev.dev}";
  };
}