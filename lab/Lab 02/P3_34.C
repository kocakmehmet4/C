/*

Girilen kenar uzunluğuna göre ekrana yıldızlarla içi boş kare çizdiren program

****
*  *
*  *
****

*/
#include <stdio.h>

int main()
{
   int kenar;
   int strPozisyon;
   int stnPozisyon;
   printf( "Kenar uzunlugunu giriniz: " ); 
   scanf( "%d", &kenar );
   strPozisyon = 1;
   while ( strPozisyon <= kenar ) {
      stnPozisyon = 1; 
      while ( stnPozisyon <= kenar ) {
         if ( strPozisyon == 1 ) {
            printf( "*" );
         }
         else if ( strPozisyon == kenar ) {
            printf( "*" );
         }
         else if ( stnPozisyon == 1 ) {
            printf( "*" );
         }
         else if ( stnPozisyon == kenar ) {
            printf( "*" );
         }
         else {
            printf( " " );
         }
         stnPozisyon++; 
      }
      printf( "\n" ); 
      strPozisyon++; 
   } 

   return 0; 
}