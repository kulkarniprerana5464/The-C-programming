#include <stdio.h>
#define MAX 1000

void find_first_occu(char s1[], char s2[]);

int main(void)
{
    char str1[MAX];
    char str2[MAX];

    int ch = 0;
    int len=0;
    
    printf("Enter string one:\n");
    while((ch=getchar()) != EOF && len < MAX-1)
        str1[len++] = ch;
    str1[len] = '\0';
    
    len = 0;
    printf("Enter string two:\n");
    while((ch=getchar()) != EOF && len < MAX-1)
    str2[len++] = ch;
    str2[len] = '\0';

    printf("String one: %s\n",str1);
    printf("String two: %s\n",str2);
    find_first_occu(str1, str2);
    return 0;
}

void find_first_occu(char s1[], char s2[])
{
    int temp = MAX;
    for (int i =0; s2[i]!='\0';i++)
    {
        int index = 0;
        for (int j=0; s1[j]!='\0';j++)
        {
            if (s2[i] == s1[j])
            {     
                index = j;
                break;
            }
        }  
           if(temp>index)
             {
                 temp=index;

             }
        
    } 
    printf("Minimum Index =%d\n",temp);   
}

