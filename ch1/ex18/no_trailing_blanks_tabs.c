#include <stdio.h>
#define MAX_LINE 1000

/* copy the line while removing trailing blanks, tabs and
 * delete entirely blank lines */

/* read a line into s */
int get_line(char s[], int lim)
{
    int i, c;
    for (i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
    }
    if (c == '\n'){
        s[i]='\n';
        i++;
    }
    s[i] = '\0';
    return i;
}

int main()
{
    int len, i;
    char line[MAX_LINE];
    char no_blank_line[MAX_LINE];
    while ((len = get_line(line, MAX_LINE)) > 0){
        if (len > 1) {
            printf("before removing: %d\n", len);
            for (i=len-1; line[i]==' ' || line[i]=='\t' || line[i]=='\n'; --i)
                ;
            line[++i] = '\n';
            line[++i] = '\0';
            printf("%s", line);
            printf("ater removing: %d\n", i);
        }
    }

    return 0;
}

