#include <stdio.h>

int main(void)
{
    int ch;

    while ((ch = getchar()) != EOF)
    {
        if (ch == ' ')
        {
            printf("%c", ch);

            while ((ch = getchar()) == ' ');

            if (ch == EOF)
                break;
        }
        printf("%c", ch);
    }

    printf("\n");

    return 0;
}
