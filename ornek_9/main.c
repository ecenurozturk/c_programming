#include <stdio.h>

int main(int argc, char *argv[])
{
    int yil;

    printf("bir yil giriniz = \n");
    scanf("%d",&yil);
    printf("hemen hesapliyorum :) \n");

        if( yil % 4 == 0 && yil % 100 !=0 || yil %400 == 0)
            printf(" %d yili artik yil\n",yil);
        else
            printf("%d  yili artik yil degil\n",yil);

  return 0;
}
