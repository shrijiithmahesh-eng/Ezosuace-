#!/bin/bash
DESKTOP="Ezousauce"
pid1_name=$(ps -p 1 -o comm= 2>/dev/null)

# Method 2: Check for systemd runtime directory
if [[ "$pid1_name" == "systemd" ]] || [[ -d /run/systemd/system ]]; then
  INIT=$pid1_name
  ./SYSTEMD.sh
else
   INIT=$pid1_name
   ./What.sh
fi
export INIT
export DESKTOP

