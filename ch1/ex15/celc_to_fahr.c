#include <stdio.h>

/* print table converting celcius to fahrenheit
 * from 0, 20, ..., 300 */

#define LOWER 0.0
#define STEP 20.0
#define UP 300.0

float celc_to_fahr(float celc)
{
    return (celc * 1.8) + 32.0;
}

int main()
{

    float i;
    printf("Celc\tFahr\n");
    for (i=LOWER; i<=UP; i=i+STEP){
        printf("%3.1f\t%3.1f\n", i, celc_to_fahr(i));
    }

    return 0;
}
