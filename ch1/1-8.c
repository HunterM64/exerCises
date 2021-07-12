// Write a program to count blanks, tabs, and newlines.

#include <stdio.h>
#include <string.h>

int main() {

    // prolly not intended but i cant get the c = getchar() to work properly.
    char string[] = {' ', '\n', '\t'};
    int c;
    // blank, tab, newlines 
    int nb = 0;
    int nt = 0;
    int nl = 0;

    for(int i = 0; i < strlen(string); i++) {

        if (string[i] == ' ') {
            ++nb;
        }
        else if (string[i] == '\t') {
            ++nt;
        }
        else if (string[i] == '\n') {
            ++nl;
        }
        
    }

    printf("%d %d %d\n", nb,nl,nt);

    return 0;
}