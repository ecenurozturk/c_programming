#include <stdio.h>

int main()
{
    char isim[10];

    printf("isminizi giriniz = ");
    scanf("%s",isim);

    if (strcmp(isim, "ecenur") == 0)
{
    printf("hoşgeldiniz.nasılsınız?");
}
    else
    {
        printf("git burdan %s",isim);
    }

    return 0;
}
