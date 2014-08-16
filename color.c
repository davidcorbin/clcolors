#include <stdio.h>
#include <string.h>

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
    if (!argv[1]) {
        printf("Color needed to be changed. e.g. color red\n");
        return 1;
    }

    if (strcmp(argv[1], "red") == 0) newcolor = RED;
    else if (strcmp(argv[1], "white") == 0) newcolor = NONE;
    else if (strcmp(argv[1], "green") == 0) newcolor = GREEN;
    else if (strcmp(argv[1], "yellow") == 0) newcolor = YELLOW;
    else if (strcmp(argv[1], "blue") == 0) newcolor = BLUE;
    else if (strcmp(argv[1], "magenta") == 0) newcolor = MAGENTA; 

    printf("%s", newcolor);
    return 0;
}