#include <stdio.h>
#include <math.h>

void yuvarla(void);

int main()
{
    yuvarla();
    return 0;
}

void yuvarla(void){

    double x;
    double y;
    int dongu;

    for ( dongu = 1; dongu <= 5; dongu++ ) {
      printf( "Ondalik bir sayi giriniz : " );
      scanf( "%lf", &x );

      y = floor( x + .5 ); // floor a�ag� yuvarlar. 0.5 eklenerek yak�n olana yuvarlan�r.
      printf( "%f rounded is %.1f\n\n", x, y );
   }


}
