/* Exercise 5.29 Solution */
#include <stdio.h>

int ebob( int x, int y );

int main()
{
   int a;
   int b;

   printf( "Iki sayi giriniz: " );
   scanf( "%d%d", &a, &b );

   printf( "%d ve %d nin en buyuk ortak boleni "
    "%d dir\n\n", a, b, ebob( a, b ) );

   return 0;
}

int ebob( int x, int y )
{
   int enBuyuk = 1;

   for ( int i = 2; i <= x; i++ ) {

      if ( x % i == 0 && y % i == 0 ) {
         enBuyuk = i;
      }

   }

   return enBuyuk;

}
