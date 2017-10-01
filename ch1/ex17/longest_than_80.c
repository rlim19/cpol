#include <stdio.h>
#define MAX_LINE 10
#define ALLOWED_LINE 8

/* print input lines that are less than ALLOWED_LINE */

/* read a line into s, return the length */
int get_line(char s[], int lim)
{
    int c, i;
    i = 0;
    while (i < (lim - 1) && (c=getchar()) != EOF && c != '\n') {
        s[i] = c;
        ++i;
    }
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy `from` to `to`; assuming that `to` is big enough */
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0'){
        ++i;
    }
}

int main()
{
    int len; /* current line length */
    int max; /* max length seen so far */
    char line[MAX_LINE];

    max = ALLOWED_LINE;
    while ((len = get_line(line, MAX_LINE)) > 0){
        if (len > max){
            printf("line > 80: %s\n", line);
        }
    }

    return 0;
}
