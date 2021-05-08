#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */
void print_table(int lower, int upper, int step);

int main(void)
{
    print_table(0,300,20);
    return 0;
}

void print_table(int lower, int upper, int step)
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