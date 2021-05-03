/*
Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more blanks by a
single blank.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int ch;

    while((ch=getchar())!= EOF)
    {
        if (ch==' ')
        {
            printf("%c",ch);

            while((ch=getchar())== ' ');

            if (ch == EOF)
                break;
        }
        printf("%c",ch);
    }

    printf("\n");
    
    return 0;
}