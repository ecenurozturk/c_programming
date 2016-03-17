#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int n)  {
    int faktor;
        if (n <= 1)
            faktor = 1;
        else
            faktor = n * faktoriyel(n - 1);

    return faktor;
}

int main() {
    int sayi;

    printf("Faktoriyeli bulunacak sayiyi giriniz : ");
    scanf("%d", &sayi);

    int fakt = faktoriyel(sayi);
    printf("%d! = %d", sayi, fakt);

    return 0;
}

