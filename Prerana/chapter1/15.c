// conversion program using function...

#include <stdio.h>

void print_celsicus(int lower, int upper, int step);

int main(void)
{
    print_celsicus(4,280,8);
    return 0;
}

void print_celsicus(int lower, int upper, int step)
{
     int fahr, celsius;
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}

