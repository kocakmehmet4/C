
#include<stdio.h>

int main( void )
{
   int satir;
   int bosluk;
   int yildiz;
   int boyut;


   printf( "boyutu giriniz ( 1-19 ):\n" );
   scanf( "%d", &boyut );


   for ( satir= 1; satir <= boyut -  2; satir += 2 ) {

      for ( bosluk = ( boyut - satir) / 2; bosluk > 0; bosluk-- ) {
         printf( " " );
      }

      for ( yildiz = 1; yildiz <= satir; yildiz++ ) {
         printf( "*" );
      }

      printf( "\n" );
   }

   for ( satir = boyut; satir >= 0; satir -= 2 ) {

      for ( bosluk = ( boyut - satir) / 2; bosluk > 0; bosluk-- ) {
         printf( " " );
      }

      for ( yildiz = 1; yildiz <= satir; yildiz++ ) {
         printf( "*" );
      }

      printf( "\n" );
   }



   return 0; /* indicate successful termination */
}


