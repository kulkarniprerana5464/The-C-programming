/*
Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to write a program that
reverses its input a line at a time.
*/

#include <stdio.h>
#define MAX_LINE_LEN 1025

int Getline(char line[], int max);
void reverseLine(char line[],int len);

int main(void)
{
    int lineLen=0;
    char lineArray[MAX_LINE_LEN];


    while ((lineLen=Getline(lineArray,MAX_LINE_LEN))!=0)
    {
        //length= lenLen-1 to ignore the '\n' char 
        reverseLine(lineArray, lineLen-1);
        printf("Reversed===>> %s",lineArray);
    }

    return 0;
}

void reverseLine(char line[],int len)
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