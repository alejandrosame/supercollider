#!/usr/bin/env bash
PREFIX="$(dirname "$0")"
NIXOS_CONFIG="$PREFIX/configuration.nix"
# Use the npins pinned nixpkgs
NIXPKGS=$(jq -r '.pins."nixos-20-09".url' $PREFIX/../npins/sources.json)

echo "Using pinned NIXPKGS=$NIXPKGS"

EVALED_NIXPKGS=$(nix eval --raw -f $PREFIX/../npins/default.nix nixos-20-09)
NIXOS="$EVALED_NIXPKGS/nixos/default.nix"

nixos-container --nixos-path=$NIXOS --config-file=$PREFIX/configuration.nix $@
