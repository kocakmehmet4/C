/* Exercise 5.39 Solution */
#include <stdio.h>

int ebob( int x, int y );

int main()
{
   int x;
   int y;
   int ebobSayi;

   printf( "Iki sayi giriniz: " );
   scanf( "%d%d", &x, &y );

   ebobSayi = ebob( x, y );

   printf( "%d ve %d sayilarinin en buyuk ortak boleni %d dir\n",
          x, y, ebobSayi );

   return 0;
}

int ebob( int x, int y )
{

   if ( y == 0 ) {
      return x;
   }
   else {
      return ebob( y, x % y );
   }

}
