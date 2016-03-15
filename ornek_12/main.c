#include <stdio.h>
#include <math.h>
main()
{
    int sec,sayi1,sayi2;

    printf("Yapmak istediginiz islemi seciniz.\n -1- Toplama\n -2- Cikarma\n -3- Carpma\n -4- Bolme\n");
    secim:
    scanf("%d",&sec);
    switch(sec)
    {
        case 1:
            printf("Iki sayi giriniz: \n");
            scanf("%d %d",&sayi1,&sayi2);
            printf("Sonuc:%d",sayi1+sayi2);
            break;
         case 2:
            printf("Iki sayi giriniz: \n");
            scanf("%d %d",&sayi1,&sayi2);
            printf("Sonuc:%d",sayi1-sayi2);
            break;
        case 3:
            printf("Iki sayi giriniz: \n");
            scanf("%d %d",&sayi1,&sayi2);
            printf("Sonuc:%d",sayi1*sayi2);
            break;
        case 4:
            {
            float sayi1,sayi2;
            printf("Iki sayi giriniz: \n");
            scanf("%f %f",&sayi1,&sayi2);
            printf("Sonuc:%2.2f",sayi1/sayi2);
            break;
            }
    }
    return 0;
}
