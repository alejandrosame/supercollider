{ config, lib, pkgs, ... }:
{ 
  boot.isContainer = true;
  
  networking.hostName = lib.mkDefault "test";
  networking.useDHCP = false;
  
  services.avahi.enable = true;

  environment.systemPackages =
    (with pkgs; [
      nano
    ]);

}