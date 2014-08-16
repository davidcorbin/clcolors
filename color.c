#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define NONE    "\x1b[0m"

bool verbose = false;
char *newcolor;

int main (int argc, char **argv)
{
    if (strcmp(argv[1], "red") == 0) {
        newcolor = RED;
    }
    if (strcmp(argv[1], "white") == 0) {
        newcolor = NONE;
    }

    printf("%s", newcolor);
    return 0;
}