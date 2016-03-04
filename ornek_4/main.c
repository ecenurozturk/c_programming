#include<stdio.h>

main()
{
    int i,toplam=0;
    for(i=0;i<=30;i++)
    {
       if(i%2==1)
       {
           toplam = toplam + i;
       }
    }

    printf("Toplam : %d", toplam);

    return 0;
}
