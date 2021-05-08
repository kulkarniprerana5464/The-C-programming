/*
Exercise 1-17. Write a program to print all input lines that are longer than 80 characters.
*/

#include <stdio.h>

#define MAXLINE 1000
#define MAXLENGTH 81

int Getline(char[], int max);
void copy(char from[], char to[]);

int main()
{
    int len = 0;        /* current line length */
    char line[MAXLINE]; /* current input line */

    while ((len = Getline(line, MAXLINE)) > 0)
    {
        if (len > MAXLENGTH)
            printf("LINE (len>80): %s", line);
    }

    return 0;
}

int Getline(char line[], int max)
{
    int i = 0;
    int c = 0;

    for (i = 0; ((c = getchar()) != EOF) && c != '\n' && i < max - 1; ++i)
        line[i] = c;

    if (c == '\n')
        line[i++] = c;

    line[i] = '\0';

    return i;
}
