#include <stdio.h>

/* count blanks, tabs, and new lines */

int main()
{
    long c, nb, nt, nl, last_char;
    nb = 0;
    nt = 0;
    nl = 0;

    while((c = getchar()) != EOF){
        if (c == ' '){
            ++nb;
        }
        if (c == '\t'){
            ++nt;
        }
        if (c == '\n'){
            ++nl;
        }
        last_char = c;
    }
    // in case if it's ended not with a newline
    if (last_char != '\n') {
        ++nl;
    }
    printf("# of blanks: %ld\n", nb);
    printf("# of tabs: %ld\n", nt);
    printf("# of new lines: %ld\n", nl);
    return 0;
}

