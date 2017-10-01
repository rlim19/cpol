#include <stdio.h>

/* copy its input to its output and make
 * tab, backspace and backslash invisible */

int main()
{
    int c, i;
    while ((c = getchar()) != EOF){
        i = 0;

        if (c == '\t'){
            putchar('\\');
            putchar('t');
            i = 1;
        }
        if (c == '\b'){
            putchar('\\');
            putchar('b');
            i = 1;
        }
        if (c == '\\'){
            putchar('\\');
            putchar('\\');
            i = 1;
        }
        if (i == 0)
            putchar(c);
    }

    return 0;
}
