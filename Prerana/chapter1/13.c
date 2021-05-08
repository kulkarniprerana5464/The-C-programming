#include <stdio.h>
#define MAX_WORD 100
#define MAX_LENGTH 100

int main(void)
{
    int ch;
    int arr[MAX_WORD];
    int i;
    for (i = 0; i <= MAX_WORD; i++)
    {
        arr[i] = 0;
    }
    i = 0;
    while ((ch = getchar()) != EOF)
    {
        if (ch == ' ' || ch == '\t' || ch == '\n')
        {
            i = i + 1;
            while ((ch = getchar()) == ' ' || ch == '\t' || ch == '\n')
                ;

            if (ch == EOF)
                break;
        }
        arr[i] = arr[i] + 1;
    }

    //horizontal histogram
    printf("horizontal \n");
    for (int i = 0; i < MAX_WORD && arr[i] > 0; i++)
    {
        int count = 0;
        count = arr[i];
        while (count-- > 0)
            printf("*");
        printf("\n");
    }

    //vertical histogram
    int maxLen = 0;
    for (int i = 0 ; i < MAX_WORD; i++)
        if (arr[i]>maxLen)
                maxLen = arr[i];

    int j = maxLen;
    printf("\nvertical \n");
    for (int i = 0; i < MAX_WORD && j > 0; i++)
    {
        int flag = 0;
        for (int k = 0; k < MAX_WORD; k++)
        {
            if (arr[k] == j)
            {
                printf("%c", '*');
                arr[k] = arr[k] - 1;
                flag = 1;
            }
            else
                printf("%c", ' ');
        }

        j = j - 1;
        if (flag == 1)
            printf("\n");
    }

    return 0;
}
