#include <stdio.h>

#define LOWER 300 
#define UPPER 0
#define STEP 20

/* Print Fahrenheit - Celcius table in the reverse order
 * From 300, 280, ..., 20 */


int main() {
    float fahr;
    printf("Fahr\tCelc\n");
    for (fahr = LOWER; fahr >= UPPER; fahr -= STEP){
        printf("%3.0f\t%6.1f\n", fahr, ((5.0 / 9.0) * fahr - 32.0));
    }
    return 0;
}
