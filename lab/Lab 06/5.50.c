/* Exercise 5.50 solution: CAI.c */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void carpma( void );

int main()
{
    srand( time( NULL ) );
    multiplication();
    return 0;
}

void multiplication( void )
{
   int x; /* first factor */
   int y; /* second factor */
   int cevap = 0; /* user response for product */

   /* use sentinel-controlled repetition */
   printf( "Sonlandýrmak icin -1 giriniz.\n" );

   /* loop while sentinel value not read from user */
   while ( cevap != -1 ) {
      x = rand() % 10; /* generate 1-digit random number */
      y = rand() % 10; /* generate another 1-digit random number */

      printf( "%d kere %d kactir? ", x, y );
      scanf( "%d", &cevap );

      /* loop while not sentinel value or correct response */
      while ( cevap != -1 && cevap != x * y ) {
         printf( "Cevap yanlis. Lutfen tekrar giriniz.\n?" );
         scanf( "%d", &cevap );
      } /* end while */

      /* correct response */
      if ( cevap != -1 ) {
         printf( "Very good!\n\n" );
      } /* end if */

   } /* end while */

   printf( "That's all for now. Bye.\n" );

}
