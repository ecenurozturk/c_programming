#include <stdio.h>

void main()
{
    int fib1 = 0, fib2 = 1, fib3=1,sayi = 1;


    while (sayi < 10)
    {
        printf("%d\n", fib3);
        fib3 = fib1 + fib2;
        sayi++;
        fib1 = fib2;
        fib2 = fib3;

   }
}
