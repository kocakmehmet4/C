/* Exercise 4.16 Solution */
#include <stdio.h>

int main( void )
{ 
   int row; /* row counter */
   int col; /* column counter */
   int space; /* spaces counter */

   /* Pattern A, loop 10 times for rows */
   for ( row = 1; row <= 10; row++ ) { 

      /* print row asterisks */
      for ( col = 1; col <= row; col++ ) {
         printf( "*" );
      } /* end for */

      printf( "\n" );
   } /* end for */

   printf( "\n" );

   /* Pattern B, loop 10 times for rows 
      row counts down to correspond to number of asterisks */
   for ( row = 10; row >= 1; row-- ) { 

      /* print row asterisks */
      for ( col = 1; col <= row; col++ ) {
         printf( "*" );
      } /* end for */

      printf( "\n" );
   } /* end for */

   printf( "\n" );

   /* Pattern C, loop 10 times for rows 
      row counts down to correspond to number of asterisks */
   for ( row = 10; row >= 1; row-- ) { 

      /* print (10 - row) number of preceding spaces */
      for ( space = 1; space <= 10 - row; space++ ) {
         printf( " " );
      } /* end for */

      /* print row asterisks */
      for ( col = 1; col <= row; col++ ) {
        printf( "*" );
      } /* end for */

      printf( "\n" );
   } /* end for */

   printf( "\n" );

   /* Pattern D, loop 10 times for rows */
   for ( row = 1; row <= 10; row++ ) { 

      /* print (10 - row) number of preceding spaces */
      for ( space = 1; space <= 10 - row; space++ ) {
         printf( " " );
      } /* end for */

      /* print row asterisks */
      for ( col = 1; col <= row; col++ ) {
         printf( "*" );
      } /* end for */

      printf( "\n" );
   } /* end for */

   printf( "\n" );

   return 0; /* indicate successful termination */
} /* end main */



 /*************************************************************************
 * (C) Copyright 1992-2007 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
