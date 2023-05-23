#include <stdio.h>
#include <math.h>

double ucretiHesapla( double saat);

int main()
{
    double parkSuresi;
    double parkUcreti;
    double toplamSure=0.0;
    double toplamUcret=0.0;


    printf("3 araba icin park surelerini giriniz: ");
    for(int i=1; i<=3; i++){

        scanf("%lf",&parkSuresi);
        toplamSure+=parkSuresi;

        if ( i == 1 )
            printf( "%5s%15s%15s\n", "Arac", "Sure", "Ucret" );

        toplamUcret += (parkUcreti = ucretiHesapla( parkSuresi ));

        printf( "%5d%15.1f%15.2f\n", i, parkSuresi, parkUcreti);
    }
    printf( "%5s%15.1f%15.2f\n", "TOPLAM", toplamSure, toplamUcret );

    return 0;
}

double ucretiHesapla(double saat){
    double ucret;
    if(saat<=3.0){
        ucret=2.0;
    }else if(saat < 19){
        ucret = 2.0 + 0.5 * ceil(saat-3.0);
    }else ucret = 10.0;
    return ucret;
}
