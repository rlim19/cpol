#include <stdio.h>

int main()
{
    int c, nw, in_space;
    nw = 0;
    in_space = 1;

    while ( (c = getchar()) != EOF ){
        if (c == ' ' || c == '\n' || c == '\t'){
            in_space = 1;
        } else {
            nw += in_space;
            in_space = 0;
        }
    }
    printf("\nnumber of words: %d\n", nw);

    return 0;
}
