#include <stdio.h>

#define TOTAL_CHAR 128 // ASCII chars 0 - 127

/* print histogram of the frequencies of
 * different characters in its input */

int main()
{
    int i, j, charset[TOTAL_CHAR], c;


    for (i=0; i<TOTAL_CHAR; ++i) {
        charset[i] = 0;
    }

    while ((c = getchar()) != EOF)
        ++charset[c];

    for (i=0; i<TOTAL_CHAR; ++i) {
        putchar(i);
        putchar('\t');
        j = charset[i];
        while (j > 0){
            putchar('*');
            --j;
        }
        putchar('\n');
    }

    return 0;
}

