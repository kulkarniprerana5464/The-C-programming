#include <stdio.h>
#define MAX_LINE_LEN 1000

int Getline(char line[], int max);
void reverse_line(char line[],int len);

int main(void)
{
    int lineLen=0;
    char lineArray[MAX_LINE_LEN];


    while ((lineLen=Getline(lineArray,MAX_LINE_LEN))!=0)
    {
         
        reverse_line(lineArray, lineLen-1);
        printf("Reversed string is %s",lineArray);
    }

    return 0;
}

void reverse_line(char line[],int len)
{
    int end = len-1;
    int start = 0;

    while (end>=start)
    {
        char temp = line[start];
        line[start]=line[end];
        line[end] = temp;
        start++;
        end--;
    }

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
