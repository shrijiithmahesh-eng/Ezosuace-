#!/bin/sh
#the libraries needed for Ezosauce
# 1. DETECT THE DISTRO
if [ -f /etc/os-release ]; then
    . /etc/os-release
    DISTRO=$ID
else
    DISTRO="unknown"
fi


case $DISTRO in
    ubuntu|debian|raspbian)
        sudo apt update && sudo apt install -y build-essential
        ;;
    arch|manjaro)
        sudo pacman -Sy --noconfirm base-devel
        ;;
    fedora|centos|rhel)
      udo dnf groupinstall "Development Tools"
        ;;
    *)
        echo "⚠️  Unknown Distro: $DISTRO."
        ;;
esac
