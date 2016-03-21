#include <stdio.h>
#include <string.h>

void uzun_cumle(char cumle_a[],char cumle_b[])
{
    int i,d=0;
    int m,k;

    m=strlen (cumle_a);
    k=strlen (cumle_b);

        if(m>k)
            {
            printf("1. cumle daha uzun --> ");

                for (m = 0; m < strlen (cumle_a); m ++)

                    printf( "%c", cumle_a[m] );
            }
        else
        {
            printf("2.cumle daha uzun --> ");

                for (d = 0; d < strlen (cumle_b); d ++)
                {
                    printf( "%c", cumle_b[d] );

                }
        }
}
int main(int argc, char* argv[])
{
    char cumle_a[200];
    char cumle_b[200];

int i,d;
    printf("1. cumlenizi yaziniz -> ");
    scanf("%s", &cumle_a[i]);
    printf("2. cumlenizi yaziniz -> ");
    scanf("%s", &cumle_b[d]);

    uzun_cumle(cumle_a,cumle_b);
    return 0;
}

