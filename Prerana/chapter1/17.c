#include <stdio.h>

#define MAXLINE 1000
#define MAXLENGTH 81

int Getline(char[], int max);
void copy(char from[], char to[]);

int main()
{
    int len = 0;        
    char line[MAXLINE]; 

    while ((len = Getline(line, MAXLINE)) > 0)
    {
        if (len > MAXLENGTH)
            printf("Lenth is greater than 80: %s", line);
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
