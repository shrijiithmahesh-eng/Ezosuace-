CC = gcc
CFLAGS = -ffreestanding -Wno-implicit-function-declaration $(shell pkg-config --cflags gtk4)
LIBS = $(shell pkg-config --libs gtk4)
TARGET = ./config/systemlogin

all:
$(CC) $(CFLAGS) bootprocess.c -o $(TARGET) $(LIBS)

CC = bash
Target = ./config/Teoth.sh
Command = chmod +x Teoth.sh
