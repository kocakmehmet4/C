/* Exercise 6.11 Solution
(Bubble Sort) The bubble sort presented in Fig. 6.15 is inefficient for large arrays. Make the
following simple modifications to improve the performance of the bubble sort.
a) After the first pass, the largest number is guaranteed to be in the highest-numbered element
of the array; after the second pass, the two highest numbers are “in place,” and
so on. Instead of making nine comparisons on every pass, modify the bubble sort to
make eight comparisons on the second pass, seven on the third pass and so on.
b) The data in the array may already be in the proper order or near-proper order, so why
make nine passes if fewer will suffice? Modify the sort to check at the end of each pass
whether any swaps have been made. If none has been made, then the data must already
be in the proper order, so the program should terminate. If swaps have been made, then
at least one more pass is needed.
---------------------------------------------------------------------------------------------
Şekil 6.15‘deki kabarcık sıralama algoritması büyük diziler için pek uygun değildir.
Bu programın performansını artırmak için aşağıdaki değişiklikleri yapınız.
a) ilk turdan sonra dizideki en büyük sayı, dizinin en büyük numaralı konumuna geleceği kesindir.
2. turdan sonra ikinci en büyük sayıda yerini alır. Bu yüzden, her turda dokuz karşılaştırma yapmak
yerine programı 2.turda 8 kez, 3 turda 7 kez karsılastırma yapacak Sekilde değiştiriniz.
b) Dizideki sayıların tümü ya da büyük bir kısmı zaten sıralanmış olabilir.
O zaman daha azı mümkünden neden dokuz kez dönecek bir döngü kullanılsın? Her tur sonunda doğru
sıralamanın yapılıp yapılmadığını kontrol ediniz. Eğer dizi elemanları arasında bir yer değişikliği
olmadıysa dizi doğru sırasına kavuşmuştur. Dizi elemanları arasında bir yer değisikliği olmuşsa
döngünün en az bir kez daha dönmesi gerekmektedir.
*/
#include <stdio.h>
#define MAX 10

int main( void )
{
   int a[ MAX ] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
   int i,pass,hold,swap;
   printf( "Data items in original order\n" );

   for ( i = 0; i < MAX; i++ ) {
      printf( "%4d", a[ i ] );
   }

   printf( "\n\n" );
   for ( pass = 1; pass < MAX; pass++ ) {
      swap = 0;
      for ( i = 0; i < MAX - pass; i++ ) {
         if ( a[ i ] > a[ i + 1 ] ) {
            swap = 1;
            hold = a[ i ];
            a[ i ] = a[ i + 1 ];
            a[ i + 1 ] = hold;
         }
      }
      printf( "After Pass %d: ", pass );
      for ( i = 0; i <= MAX-pass; i++ ) {
         printf( "  %d", a[ i ] );
      }
      printf( "\n" );
      if ( !swap ) {
         break;
      }
   }
   printf( "\nData items in ascending order\n" );
   for ( i = 0; i < 10; i++ ) {
      printf( "%4d", a[ i ] );
   }
   printf( "\n" );
   return 0;
}
