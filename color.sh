#!/bin/bash

red="\x1b[91m"
green="\x1b[32m"
yellow="\x1b[93m"
blue="\x1b[94m"
magenta="\x1b[95m"
cyan="\x1b[96m"
white="\x1b[0m"

### RED ###
if [ "$1" = "red" ]
    then new=$red
fi

### GREEN ###
if [ "$1" = "green" ]
    then new=$green
fi

### YELLOW ###
if [ "$1" = "yellow" ]
    then new=$yellow
fi

### BLUE ###
if [ "$1" = "blue" ]
    then new=$blue
fi

### MAGENTA ###
if [ "$1" = "magenta" ]
    then new=$magenta
fi

### CYAN ###
if [ "$1" = "cyan" ]
    then new=$cyan
fi

if [ $new ]
    then echo -e -n "${new}"
else 
    echo "Give a color to change to. e.g. red"
fi