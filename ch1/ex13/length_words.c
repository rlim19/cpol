#include <stdio.h>

/* print a histogram of the lengths of words in its input */

#define IN 1 /* in a word */
#define OUT 0 /* outside a word */

int main()
{
    int i, c, nc, state, freq[11];
    nc = 0;
    state = OUT;

    /* freq[1] is for a word with length 1
     * freq[2] is for a word with length 2
     * freq[0] is for a word with length > 10 */
    for (i = 0; i <= 10; ++i)
        freq[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' | c == '\t' | c == '\n'){
            if (state == IN){
                state = OUT;
            }

        } else {
            if (state == OUT){
                state = IN;
                nc = 0;
            }
        }

        if (state == IN) {
            // putchar(c);
            ++nc;
        }

        if (state == OUT) {
            if (nc <= 10)
                ++freq[nc];
            else
                ++freq[0];
        }

    }

    for (i = 0; i <= 10; ++i){
        if (i == 0){
            printf("Length > 10\t");
        }
        else {
            printf("Length %d\t", i);
        }
        while (freq[i] > 0){
            printf("*");
            --freq[i];
        }
        printf("\n");
    }

    return 0;
}
