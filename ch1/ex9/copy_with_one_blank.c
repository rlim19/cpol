#include <stdio.h>

/* copy its input to its output
 * and replacing one or more blanks with
 * a single blank */

int main()
{
    int c;
    while ((c = getchar()) != EOF){
        if (c == ' '){
            while ((c = getchar()) == ' ')
                ;
            putchar(' ');
        }
        putchar(c);
    }
    return 0;
}
