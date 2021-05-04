// celsius -> fahr table

#include <stdio.h>

main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("%6s %3s\n", "celsius", "fahr");

    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%7.0f %3.1f\n", celsius, fahr);
        celsius += step;
    }
}