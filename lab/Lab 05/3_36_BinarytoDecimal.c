/*
Exercise 3.36 Solution

Sadece 0 ve 1‘lerden oluşan bir tamsayı (ikilik sistem) girişi yaptırın ve bu sayıyı
10‘luk sistemde yazdırın.(ipucu: mod ve bölme operatörlerini kullanarak sayının
basamaklarını teker teker sağdan sola doğru alabilirsiniz. 10‘luk sistemde en sağdaki
sayının pozisyon değeri 1 ve sonrakilerin 10, 100, 1000 olacak şekilde 10‘un
kuvvetlerinde arttığı gibi, ikilik sistemde de 1 ile başlayıp 2 nin kuvvetleri şeklinde,2, 4,
8 gibi artmaktadır. Örneğin 10‘luk sistemdeki 234 sayısı 4 * 1 + 3 * 10 + 2 * 100
şeklinde gösterilir ve 1101 ikilik sistem sayısının 10‘luk sistemdeki karşılığı 1 *1 + 0 *
2 + 1 * 4 + 1 * 8 ya da 1 + 0 + 4 + 8 yada 13‘ tür.)

iki tabaninda sayi girin: 10111
ondalik esitligi 10111 = 23

iki tabaninda sayi girin: 1101
ondalik esitligi 1101 = 13
*/

#include <stdio.h>
int main( void ){

	int ikilik;
	int sayi;
	int ondalik = 0;
	int taban=1;
	int kalan;

	printf( "iki tabaninda sayi girin: " );
	scanf( "%d", &sayi );
	ikilik = sayi;

	while ( sayi > 0 ) {
        kalan = sayi%10;
        ondalik = ondalik + kalan*taban;
        sayi = sayi/10;
        taban = taban*2;
	}

	printf( "ondalik esitligi  %d = %d\n", ikilik, ondalik );
	return 0;
}
