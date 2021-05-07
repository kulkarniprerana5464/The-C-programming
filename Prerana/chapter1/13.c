#include <stdio.h>
#define MAX_WORD 10
#define MAX_LENGTH 10

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
            printf("\n");
            i = i + 1;

            while ((ch = getchar()) == ' ' || ch == '\t' || ch == '\n');

            if (ch == EOF)
                break;
        }
        
        printf("%c", '*');

        arr[i] = arr[i] + 1;
    }
    int j=MAX_LENGTH;
    for(i=0;i<MAX_WORD && j>0;i++)
    {
        //printf("%d\n",arr[i]);
        for(int k=0;k<MAX_WORD;k++)
        {
            if(arr[k]==j)  
            { 
            printf("%c", '*');
            arr[k]=arr[k]-1;

            }
            else
            printf("%c",' ');

        }
        
        j=j-1;
        printf("\n");
    }
    printf("\n");

    return 0;
}
