#include <stdio.h>
#include <stdlib.h>

void bubblesort_fonk(char dizi[])
{
     int deger;
     int i, j;

     for (i=1; i<strlen (dizi); i++)
     {
         for (j=0; j<strlen (dizi)-i; j++)
         {
             if(dizi[j] > dizi[j+1])
             {
                        deger = dizi [j];
                        dizi [j] = dizi [j+1];
                        dizi [j+1] = deger;

             }
         }
     }
     for (i=0; i<strlen (dizi); i++)
            printf( "%c", dizi[i]);
}

int main(int argc, char* argv[])
{
    char dizi[20];
    int i;

    printf("siralanacak diziyi yaziniz -> ");
    scanf("%s", &dizi[i]);

    bubblesort_fonk(dizi);

    return 0;
}
