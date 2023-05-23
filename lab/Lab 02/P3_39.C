/* Exercise 3.34 Solution 

Girilen 5 basamaklı bir sayıda kaç adet 7 rakamı oldugunu bulan program

*/
#include <stdio.h>

int main()
{
   int sayi;
   int sayiKopya;
   int faktor = 10000;
   int rakam;
   int yediSayisi = 0;

   printf("Maksimum 5 basamakli bir sayi giriniz: ");
   scanf("%d",&sayi);

   sayiKopya = sayi;

   while( faktor >=1){
        rakam = sayiKopya / faktor;

        if(rakam == 7)
            ++yediSayisi;

        sayiKopya %= faktor;
        faktor /= 10;
   }

   printf("%d sayisinda %d adet yedi vardir",sayi,yediSayisi);

   return 0;
}
