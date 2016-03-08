#include<stdio.h>

  int main()
{
   int a;

     printf("Bir sayi giriniz: ");
     scanf("%d",&a);

  if ( a%2 == 0 )

     printf("%d cift sayi",a);
  else

     printf("%d tek sayi",a);

return 0;
}
