/* Exercise 2.23 Solution */
#include <stdio.h>

int main()
{ 
   int largest; /* largest integer */
   int smallest; /* smallest integer */
   int int1; /* define int1 for user input */
   int int2; /* define int2 for user input */
   int int3; /* define int3 for user input */
   int temp; /* temporary integer for swapping */

   printf( "Input 5 integers: " ); /* prompt user and read 5 ints */
   scanf( "%d%d%d%d%d", &largest, &smallest, &int1, &int2, &int3 );

   if ( smallest > largest ) { /* make comparisons */
      temp = largest;
      largest = smallest;
      smallest = temp;
   } /* end if */

   if ( int1 > largest ) {
      largest = int1;
   } /* end if */

   if ( int1 < smallest ) {
      smallest = int1;
   } /* end if */

   if ( int2 > largest ) {
      largest = int2;
   } /* end if */

   if ( int2 < smallest ) {
      smallest = int2;
   } /* end if */

   if ( int3 > largest ) {
      largest = int3;
   } /* end if */

   if ( int3 < smallest ) {
      smallest = int3;
   } /* end if */

   printf( "The largest value is %d\n", largest );
   printf( "The smallest value is %d\n", smallest );

   return 0; /* indicate successful termination */
} /* end main */


 /**************************************************************************
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
