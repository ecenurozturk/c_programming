#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    char sayi[10];
    int ks,i;

    printf("sayi yaziniz = ");
    gets (sayi);
    ks=strlen(sayi)-1;

    printf("sayinin tersi = ");
        for(i=ks;i>=0;i--)
        {
            if(sayi[i]==' ')
                break;
                printf("%c",sayi[i]);
        }
    return 0;
}
