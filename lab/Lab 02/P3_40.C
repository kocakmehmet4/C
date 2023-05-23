/* Exercise 3.40 Solution */
#include <stdio.h>

int main()
{ 
   int satir = 0; /* row counter */
   int sutun; /* column counter */

   /* loop 8 times */
   while ( satir < 8 ) { 
      sutun = 0; /* reset column counter */

      /* if odd row, begin with a space */
      if ( satir % 2 != 0 ) { 
         printf( " " );
      } /* end if */

      /* loop 8 times */
      while ( sutun < 8 ) {
         printf( "* " );
         ++sutun;
      } /* end while */

      printf( "\n" );
      ++satir;
   }

   return 0;
}