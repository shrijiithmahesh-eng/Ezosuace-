#!/bin/sh
set -euo pipefail
# Get current directory
current_dir="$PWD"  
file_check() {
file1="install/libcheck.sh"
if test -e "$file"; then
echo "$file exists."
else
  cd install/
  wget https://github.com/shrijiithmahesh-eng/Ezosuace-/blob/main/.config/install/libcheck.sh
file2="install/DEAMON.sh"
  
f test -e "$file"; then
echo "$file exists."
else
  cd install/
  wget https://github.com/shrijiithmahesh-eng/Ezosuace-/blob/main/.config/install/DEAMON.sh
dir="install/"
if test -e "$dir"; then
echo "$dir ok"
else
   if [[ "$current_dir" == "/home/.config" ]]; then
    wget https://github.com/shrijiithmahesh-eng/Ezosuace-/tree/main/.config/install/
else
    if [["$current_dir" == "/home"]]; then
     cd .config/
       if [[ "$current_dir" == "/home/.config" ]]; then
    wget https://github.com/shrijiithmahesh-eng/Ezosuace-/tree/main/.config/install/
else
  echo "ERROR: HALF COMPILED"
  exit;
fi
