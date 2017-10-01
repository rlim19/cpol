#include <stdio.h>

/* copy its input to its output one character at a time */

int main(){
    int c;
    while ((c = getchar()) != EOF)
        putchar(c);
    return 0;
}
