SHELL = /bin/sh
CC = gcc
CFLAGS = -Wall -std=c99
TARGET = color
OBJECTS = color.c
PREFIX = $(DESTDIR)/usr
BINDIR = $(PREFIX)/bin
 
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)
	
install:
	install $(TARGET) $(BINDIR)

uninstall:
	-rm $(BINDIR)/$(TARGET)