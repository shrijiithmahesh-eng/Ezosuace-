#!/bin/sh
part=$(fdisk -l |grep sda vda nvme0p)
export part
./GUI.part.py
