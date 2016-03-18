#include<stdio.h>

main(){

    int dizi[5];
    int i;
    printf("Ortalamasini istedigin 5 sayi yaz bakalim");

        for(i=0;i<5;i++)
        {
            printf("\n%d -sayi : ",i+1);
            scanf("%d",&dizi[i]);
        }

    ort_hesap(dizi, i);

    return 0;;
}

int ort_hesap(int dizi[], int i)
{
    double toplam = 0;
    double ortalama;

        for(int i=0; i<5; i++)
        {
            toplam+=dizi[i];
        }

    ortalama = toplam/5;
    printf("Girilen sayilarin ort: %.2lf", ortalama);
}
