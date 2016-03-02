#include <stdio.h>
#include <stdlib.h>
int main(){

    int sayi;

    printf("Bir Sayi Giriniz : \n");
    scanf("%d", &sayi);

    if(sayi<0)
    {
        sayi=sayi*-1;
        printf("girdiginiz sayinin toplamaya gore tersi : %d\n",sayi);
    }
    else
    {
    	sayi=sayi*2;
        printf("\n girdiginiz sayinin iki kati: %d\n", sayi);
    }

    return 0;
 }
