#include <stdio.h>

#define MAXLINE 1000

int Getline(char[], int max);
void copy(char from[], char to[]);

int main()
{
    int len = 0;        /* current line length */
    char line[MAXLINE]; /* current input line */

    while ((len = Getline(line, MAXLINE)) > 0)
    {
        int k = len - 1;
        int counter = len - 1;

        if (line[counter] == '\n')
        {
            counter--;
            while (counter >= 0)
            {
                if (line[counter] != '\t' && line[counter] != ' ')
                    break;
                counter--;
            }
            if (counter >= 0)
            {
                line[counter + 1] = '\n';
                line[counter + 2] = '\0';
            }
            else
            {
                line[0] = '\0';
            }
        }
        else
        {
            while (counter >= 0)
            {
                if (line[counter] != '\t' && line[counter] != ' ')
                    break;
                counter--;
            }
            if (counter >= 0)
            {
                line[counter + 1] = '\0';
            }
            else
            {
                line[0] = '\0';
            }
        }

        printf("%s",line);
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
