/**
 * Write a program to copy its input to its output, replacing each
 * tab by \t, each backspace by \b, and each backslash by \\. This makes tabs 
 * and backspaces visible in an unambiguous way.
 */
 
#include <stdio.h>
#include <string.h>

int main() {

    char input[9] = {'a', '\b', '\t', '\\', 'b', 'c', '\t', 'd', '\0'}; // yeah it doesnt make sense but oh well.
    
    for (int i = 0; i < strlen(input); i++) {
        switch(input[i]) {
            case '\b':
                printf("\\b");
                break;
            case '\t':
                printf("\\t");
                break;
            case '\\':
                printf("\\\\");
                break;
            default:
                putchar(input[i]);
                break;
        } 
    }

    printf("\n");



}