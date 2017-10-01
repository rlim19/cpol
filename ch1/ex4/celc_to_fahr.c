#include <stdio.h>

/* Print Celcius - Fahrenheit table
   for celcius = 0, 20, 300 */

int main() {
    float celc, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step  = 20;

    celc = lower;
    printf("Celc\tFahr\n");
    while (celc <= upper) {
        fahr = 1.8 * celc + 32.0;
        printf("%4.0f\t%6.1f\n", celc, fahr);
        celc += step;
    }
    return 0;
}

