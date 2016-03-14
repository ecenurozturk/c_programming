#include <stdio.h>
#include <stdlib.h>

void fonk(int x){

    int i, j;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

}
int main(int argc, char** argv)
{
    int sayi = 0;

    printf("Ÿcgen icin bir sayi giriniz : ");
    scanf("%d", &sayi);
    fonk(sayi);

    return 0;
}

