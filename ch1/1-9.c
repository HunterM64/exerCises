/**
 * write a program to copy its input to its output
 * replacing each string of one or more blanks by a single blank
 */

#include <stdio.h>
#include <string.h>

int main() {
    char string[6] = {'a', ' ', ' ', ' ', 'b', '\0'};
    char lastc = 'a'; // just in case first char in string is a space
    
    for (int i = 0; i < strlen(string); i++) {
        if(string[i] != ' ') {
            putchar(string[i]);
        }
        if (string[i] == ' ') {
            if (lastc != ' ') {
                putchar(string[i]);
            }
        }
        lastc = string[i];
    }
    printf("\n");
}