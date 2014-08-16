SHELL = /bin/sh
CC = gcc
CFLAGS = -Wall
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