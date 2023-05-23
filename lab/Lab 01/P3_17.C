/* Exercise 3.17 Solution */
#include <stdio.h>

int main( void )
{ 
   float gallons; /* gallons used for current tank*/
   float miles; /* miles driven for current tank*/
   float totalGallons = 0.0; /* total gallons used */
   float totalMiles = 0.0; /* total miles driven */
   float totalAverage; /* average miles/gallon */

   /* get gallons used for first tank */
   printf( "Enter the gallons used ( -1 to end): " ); 
   scanf( "%f", &gallons ); 

   /* loop until sentinel value read from user */
   while ( gallons != -1.0 ) { 
      totalGallons += gallons; /* add current tank gallons to total */

      printf( "Enter the miles driven: " ); /* get miles driven */
      scanf( "%f", &miles );
      totalMiles += miles; /* add current tank miles to total */

      /* display miles per gallon for current tank */
      printf( "The miles / gallon for this tank was %f\n\n", 
         miles / gallons );

      /* get next tank's gallons */
      printf( "Enter the gallons used ( -1 to end ): " );
      scanf( "%f", &gallons );
   } /* end while */

   /* calculate average miles per gallon over all tanks */
   totalAverage = totalMiles / totalGallons; 
   printf("\nThe overall average miles / gallon was %f\n", totalAverage );

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
