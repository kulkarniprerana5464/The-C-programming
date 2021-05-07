// One word per line
#include <stdio.h>

int main(void)
{
    int ch;

    while ((ch = getchar()) != EOF)
    {
        if (ch == ' ' || ch == '\t' || ch == '\n')
        {
            printf("\n");

            while ((ch = getchar()) == ' ' || ch == '\t' || ch == '\n');

            if (ch == EOF)
                break;
        }
        printf("%c", ch);
    }

    printf("\n");

    return 0;
}
