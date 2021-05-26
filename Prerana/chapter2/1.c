#include<stdio.h>
#include <limits.h>


int main(void)
{
    printf("Minimum Signed Char %d\n",-(char)((unsigned char) ~0 >> 1) - 1);
    printf("Maximum Signed Char %d\n",(char) ((unsigned char) ~0 >> 1));

    printf("Minimum Signed Short %d\n",-(short)((unsigned short)~0 >>1) -1);
    printf("Maximum Signed Short %d\n",(short)((unsigned short)~0 >> 1));

    printf("Minimum Signed Int %d\n",-(int)((unsigned int)~0 >> 1) -1);
    printf("Maximum Signed Int %d\n",(int)((unsigned int)~0 >> 1));

    printf("Minimum Signed Long %ld\n",-(long)((unsigned long)~0 >>1) -1);
    printf("Maximum signed Long %ld\n",(long)((unsigned long)~0 >> 1));

    /* Unsigned Maximum Values */

    printf("Maximum Unsigned Char %d\n",(unsigned char)~0);
    printf("Maximum Unsigned Short %d\n",(unsigned short)~0);
    printf("Maximum Unsigned Int %u\n",(unsigned int)~0);
    printf("Maximum Unsigned Long %lu\n",(unsigned long)~0);


printf("#################### CHAR #####################\n");
  printf("bits: %d\n", CHAR_BIT);
  printf("unsigned char max: %d\n", UCHAR_MAX);
  printf("signed char min: %d\n", SCHAR_MIN);
  printf("signed char max: %d\n", SCHAR_MAX);
  printf("\n");

  printf("##################### INT #####################\n");
  printf("unsigned int max: %u\n", UINT_MAX);
  printf("signed int min: %d\n", INT_MIN);
  printf("signed int max: %d\n", INT_MAX);
  printf("\n");

  printf("################## SHORT INT ##################\n");
  printf("unsigned short int max: %u\n", USHRT_MAX);
  printf("signed short int min: %d\n", SHRT_MIN);
  printf("signed short int max: %d\n", SHRT_MAX);
  printf("\n");

  printf("################## LONG INT ###################\n");
  printf("unsigned long int max: %lu\n", ULONG_MAX);
  printf("signed long int min: %ld\n", LONG_MIN);
  printf("signed long int max: %ld\n", LONG_MAX);
  printf("\n");

  printf("################ LONG LONG INT #################\n");
  printf("unsigned long long int max: %llu\n", ULLONG_MAX);
  printf("signed long long int min: %lld\n", LLONG_MIN);
  printf("signed long long int max: %lld\n", LLONG_MAX);
  printf("\n");


    return 0;
} 

