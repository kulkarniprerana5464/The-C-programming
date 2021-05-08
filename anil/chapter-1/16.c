/*
Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print the length of arbitrary
long input lines, and as much as possible of the text.
*/

#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int Getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main(void)
{
    int len;               /* current line length */
    int max;               /* maximum length seen so far */
    char line[MAXLINE];    /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    max = 0;

    while ((len = Getline(line, MAXLINE)) > 0)
    {
        printf("%d: %s", len, line);

        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)
    {
        printf("Longest is %d characters:\n%s", max, longest);
    }
    printf("\n");
    return 0;
}

/* Getline: read a line into s, return length */
int Getline(char s[], int lim)
{
    int c, i, j;

    for (i = 0, j = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    {
        if (i < lim - 1)
        {
            s[j++] = c;
        }
    }
    if (c == '\n')
    {
        if (i <= lim - 1)
        {
            s[j++] = c;
        }
        ++i;
    }
    s[j] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume 'to' is big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}