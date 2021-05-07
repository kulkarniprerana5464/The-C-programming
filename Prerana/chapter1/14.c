#include<stdio.h>
#define MAX_CHARS 128

int main(void)
{
    int count[MAX_CHARS];

    int ch;

    for (int i=0; i<MAX_CHARS;i++)
        count[i]=0;

    while((ch=getchar())!= EOF)
    {
        if (ch != ' ' && ch!='\n' && ch != '\t')
        count[ch]++;
    }

    int maxLen = 0;
    for (int i = 0 ; i < MAX_CHARS; i++)
    {
        if (count[i]>maxLen)
                maxLen = count[i];

        if (count[i]==0)
            count[i]=-1;
    }

    int j = maxLen;
    printf("\n histogram \n");
    for (int i = 0; i < MAX_CHARS && j > 0; i++)
    {
        int flag = 0;
        for (int k = 0; k < MAX_CHARS; k++)
        {
            if (count[k] != -1)
            if (count[k] == j)
            {
                printf("%c", '*');
                count[k] = count[k] - 1;
                flag = 1;
            }
            else
                printf("%c", ' ');
        }

        j = j - 1;
        if (flag == 1)
            printf("\n");
    }

    for (int i =0; i< MAX_CHARS;i++)
    {
        if (count[i]!=-1)
            printf("%c",i);
    }
    printf("\n");

}
