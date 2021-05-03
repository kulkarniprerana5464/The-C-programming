#include <stdio.h>
int main(void)
{
    char c;
    int tab = 0;
    int space = 0;
    int newline = 0;

    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case ' ':
            space++;
            break;
        case '\t':
            tab++;
            break;
        case '\n':
            newline++;
            break;
        default:
            break;
        }
    }
    printf("%d,%d,%d\n", space, tab, newline);
    return 0;
}