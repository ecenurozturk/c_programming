#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ;
    char isim[10];

     printf("isminizi giriniz = ");
     scanf("%s",isim);
   for(i=0;i<11;i++)
    {
    printf("%s\n",&isim);
    }
    return 0;
}
