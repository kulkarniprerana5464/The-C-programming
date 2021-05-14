/*
Exercise 1-20. Write a program detab that replaces tabs in the input with the proper number of blanks to space to
the next tab stop. Assume a fixed set of tab stops, say every n columns. Should n be a variable or a symbolic
parameter?
*/

#include <stdio.h>
#define MAX_LINE_LEN 1025
#define TAB_SIZE 8
int Getline(char line[], int max);
void detab(char line[],int len);

int main(void)
{
    int lineLen=0;
    char lineArray[MAX_LINE_LEN];


    while ((lineLen=Getline(lineArray,MAX_LINE_LEN))!=0)
    {
        //length= lenLen-1 to ignore the '\n' char 
        detab(lineArray, lineLen);
        //printf("Reversed===>> %s",lineArray);
    }

    return 0;
}

void detab(char line[],int len)
{
    int curPos = 0;
    for (int i =0; i<len;i++)
    {
         int sCount;
        switch (line[i])
        {
        case '\t':
            sCount = TAB_SIZE - (curPos % TAB_SIZE);
            for (int j=0;j<sCount;j++)
            {
                putchar(' ');
                curPos++;
            }

            break;
        
        default:
            putchar(line[i]);
            curPos++;
            break;
        }
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