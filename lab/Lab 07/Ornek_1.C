/* Exercise 5.26 Solution */
#include <stdio.h>

int mukemmel( int sayi );

int main()
{
   printf( "1 den 1000 e dogal sayilar icin:\n" );

   for ( int j = 2; j <= 1000; j++ ) {

      if ( mukemmel( j ) ) {
         printf( "%d mukemmel sayidir\n", j );
      }

   }

   return 0;
}


int mukemmel( int sayi )
{
   int bolenTop = 1;

   for ( int i = 2; i <= sayi / 2; i++ ) {

      if ( sayi % i == 0 ) {
         bolenTop += i;
      }

   }

   if ( bolenTop == sayi ) {
      return 1;
   }
   else {
      return 0;
   }

}