#include <stdio.h>
#include <stdlib.h>

void carpan (int sayi){
    int x=2;

    while(x<= sayi){

        if(sayi%x == 0)
            printf("%d,",x);
            x++;
    }
}
int main()
{   int sayi;

    printf("carpanlara ayõrmak icin bir sayi yaz ->");
    scanf("%d",&sayi);
    carpan(sayi);

    return 0;
}
