#include <stdio.h>
#include <string.h>

/*** Color definitions ***/
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define NONE    "\x1b[0m"

char *newcolor = "";

int main (int argc, char **argv)
{
    /*** If there are no arguments ***/
    if (!argv[1] || strcmp(argv[1], "--help")==0 || strcmp(argv[1], "-h")==0) {
        printf("Color needed to be changed. e.g. color red\n");
        return 1;
    }

    for (int i = 0; i < argc; i++) {
        if (strcmp(argv[i], "red") == 0) newcolor = RED;
        else if (strcmp(argv[i], "white") == 0) newcolor = NONE;
        else if (strcmp(argv[i], "green") == 0) newcolor = GREEN;
        else if (strcmp(argv[i], "yellow") == 0) newcolor = YELLOW;
        else if (strcmp(argv[i], "blue") == 0) newcolor = BLUE;
        else if (strcmp(argv[i], "magenta") == 0) newcolor = MAGENTA; 
        else if (strcmp(argv[i], "cyan") == 0) newcolor = CYAN;
    }

    /*** Change color ***/
    printf("%s", newcolor);

    return 0;
}