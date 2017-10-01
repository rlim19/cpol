#include <stdio.h>

/* print Fahrenheit-Celcius table
   for fahr = 0, 20, 300; */

int main()
{
    float fahr, celc;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahr\tCelcius\n");
    while (fahr <= upper) {
        celc = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f\t%5.1f\n", fahr, celc);
        fahr += step;
    }

    return 1;

}

