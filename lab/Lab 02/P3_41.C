/*


Sonsuz bir döngüde 2nin üssel kuvvetlerini ekrana yazdırınız.

2
4
8
16
32

*/
#include <stdio.h>

int main()
{ 
   int sayi = 1;
   //unsigned  int sayi = 1;

   while ( sayi > 0 ) { 

      sayi *= 2;
      printf( "%d\n", sayi );
	  //printf( "%u\n", sayi );
   }

   return 0;
}