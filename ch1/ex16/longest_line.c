#include <stdio.h>
#define MAXLINE 10

/* getline: read a line into s, return length */
int get_line(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
    }
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy 'from' to 'to' */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

/* print longest input line */
int main()
{
    int len, max, c;
    char line[MAXLINE], longest[MAXLINE];

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0){
        if (line[len-1] != '\n'){
            while ((c=getchar()) != EOF && c != '\n'){
                ++len;
            }
        }
        if (len > max){
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0){
        printf("longest length: %d\n", max);
        if (max > MAXLINE){
            printf("longest line: %s...\n", longest);
        } else {
            printf("longest line: %s\n", longest);
        }
    }

    return 0;
}
