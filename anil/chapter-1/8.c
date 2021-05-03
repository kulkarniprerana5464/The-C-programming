/*
Exercise 1-8. Write a program to count blanks, tabs, and newlines.
*/

#include <stdio.h>

int main(void)
{
    int ch;

    int blanks;
    int tabs;
    int newlines;

    blanks = tabs = newlines = 0;

    while((ch = getchar())!= EOF)
    {
        switch (ch)
        {
        case '\t':
            tabs++;
            break;
        case ' ':
            blanks++;
            break;
        case '\n':
            newlines++;
            break;
        
        default:
            break;
        }
    }

    printf("\n***Output***\n");
    printf("Blanks      : %d\n", blanks);
    printf("Tabs        : %d\n", tabs);
    printf("New Lines   : %d\n", newlines);

    return 0;
}