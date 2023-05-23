#include<stdio.h>
#include<limits.h>  // “limits.h” header’ý “char”, “short”, “int”, “long” gibi deðiþken tiplerinin maximum ve minumum deðer aralýklarýný belirleyen standart C kütüphanesidir.
#include<ctype.h> // char type karekterin tipini deðiþtirmeye yarýyan kütüphane
#include<stdlib.h>

int main (void) {
/*	
	int sayi=5;
	short int shortSayi;
	long int longSayi;
	long long int longLongSayi;
	float floatsayi;
	double doubleSayi;
	
	printf("int kapladigi alan:%lu bit\n",8*sizeof(sayi));	
	printf("shortint kapladigi alan:%lu bit\n",8*sizeof(shortSayi));
	printf("longint kapladigi alan:%lu bit\n",8*sizeof(longSayi));
	printf("longlongint kapladigi alan:%lu bit\n",8*sizeof(longLongSayi));	
	printf("float kapladigi alan:%lu bit\n",8*sizeof(floatsayi));	
	printf("double kapladigi alan:%lu bit\n",8*sizeof(doubleSayi));	
	
	printf("Short Maximum aralik %d\n",SHRT_MAX);
	printf("Short Minumum aralik %d\n",SHRT_MIN);
	printf("Long Maximum aralýk %d\n",LONG_MAX);
	printf("Short Maximum aralýk %d\n",LONG_MIN);    */
	
	int SayiInt =1234;
	printf("SayiInt 10'luk taban:%d\n",SayiInt);
	printf("SayiInt 16'lik taban:%X\n",SayiInt);
	printf("SayiInt 8'lik taban:%o\n",SayiInt);
	
	float Sayifloat= 1.141314;
	printf("Sayifloat Normal hali %f\n",Sayifloat);   
	printf("Sayifloat Bilimsel gosterimi %e\n",Sayifloat); //bilimsel
	printf("Sayifloat Bilimsel gosterimi %E\n",Sayifloat); //bilimsel
	printf("Sayifloat Bilimsel gosterimi %g\n",Sayifloat); //normal hali veya bilimsel hali hangisi küçükse onu bastýrýr
	printf("Sayifloat Bilimsel gosterimi %G\n",Sayifloat); //normal hali veya bilimsel hali hangisi küçükse onu bastýrýr
	
	printf("Merhaba dunya\n"); //alt satýra iner
	printf("Merhaba \t dunya\n"); // tab kadar boþluk býrakýr
	printf("Merhaba\bdunya\n"); // bir boþluk siler
	printf("'Merhaba dunya'\n"); //tek týrnaða izin var
	printf("Merhaba \\ dunya\n"); // çift yazdýgýmýzda 1 tane çözükür
	printf("Merhaba 5%%7 dunya\n"); //eðer mod gibi iþlemler kullanýlacaksa da çift yazýlýr
	printf("\"Merhaba dunya\"\n"); //çift týrnak için þu þekil kullanýlýr							


/*	
	char karekter ='a';
	char karekterdizisi[]= "1234.1234"; //string ifade
	printf("%c karekterinin hafizada kapladigi alan :%d byte\n",karekter,sizeof(karekter));
	printf("%c karekterinin 10'luk tabanda kapladigi alan %d; 16'lik tabanda kapladigi alan %X'dir\n",karekter,karekter,karekter);

	// 0 ise yanlýþ, doru ise 0 dýþýnda bir þey döndürür   	
	printf("%c karekteri icin isalpha %d\n",karekter,isalpha(karekter)); // isalpha alfabetik mi deðil mi onu kontrol eder...
	printf("sayi icin isalpha sonucu: %d\n",isalpha('5'));
    printf("karekter icin isdigit sonucu:%d\n",isdigit(karekter)); // isdigit fonksiyonu gönderdiðimiz rakam mý deðil mi onu kontrol ediyor
	printf("sayi icin isdigit sonucu: %d\n",isdigit('5')); //eðer tek týrnak kullanmadan göndersek 0 döner çünkü decimal karþýlýðýndaki 5 e bakýlýr
	printf("karekter icin isalnum sonucu:%d\n", isalnum(karekter));  // isalnum fonksiyonu gönderdiðimizde rakam veya alfabateik karekter ise doru döner
	printf("sayi icin isalnum sonucu:%d\n", isalnum('5'));
	printf("$ icin isalnum sonucu:%d\n",isalnum('$'));
	printf("H icin islower sonucu:%d\n",islower('H')); // kücük harf olup olmadýðýný kontrol ediyor
	printf("h icin islower sonucu:%d\n",islower('h'));	
	printf("g icin isupper sonucu:%d\n",isupper('g')); // büyük harf olup olmadýðýný kontrol ediyor
	printf("G icin isupper sonucu:%d\n",isupper('G'));
	printf("c icin toupper sonucu:%c\n",toupper('C')); //toupper küçük harfi büyültmek, tolower büyük harfi küçültmek için kullanýlýr 
	printf("C icin tolower sonucu:%c\n",tolower('c'));		
	
  int tamSayi;
	float ondalikliSayi;
	
	tamSayi = atoi(karekterdizisi); // string ifadeyi tam sayýya çevirir
	ondalikliSayi=atof(karekterdizisi); // string ifadeyi floata çevirir
	
	printf("Sayi:%d\n",tamSayi);
	printf("Sayi:%.4f\n",ondalikliSayi);		*/
	
	
	//ARÝTMETÝK OPERATÖRLER
	
	int sayi= 55, sayi1=2;
	printf("%d+%d=%d\n",sayi,sayi1,sayi+sayi1);		//toplama operatörü	
	printf("%d-%d=%d\n",sayi,sayi1,sayi-sayi1);		//çýkarma operatörü
	printf("%d*%d=%d\n",sayi,sayi1,sayi*sayi1);		//çarpma operatörü
	printf("%d/%d=%d\n",sayi,sayi1,sayi/sayi1);		//bölme	operatörü
	printf("%d%%%d=%d\n",sayi,sayi1,sayi%sayi1);	//mod alma operatörü
	
	
	//ATAMA OPERATÖRLERÝ
	
	int sonuc =1;
	sonuc*=4;	// bunun anlamý 	sonuc = sonuc*4;
	sonuc*=3;	// bunun anlamý 	sonuc = sonuc*3;
	sonuc*=2;	// bunun anlamý 	sonuc = sonuc*2;
	
	printf("Sonuc:%d\n",sonuc);
	
	int i =5;
	
	printf("i degeri: %d\n",++i);   // önce arttýrma sonra yazdýrma
	printf("i degeri: %d\n",i++);	// önce yazdýrma sonra arttýrma
	
	//BÝT DÜZEYÝNDE ÝÞLEMLER
		
	int bitDuzeyi=64;
	printf("Sola kaydirilmis Sonuc:%d\n",bitDuzeyi<<1);
	printf("Saga Kaydirilmis Sonuc:%d\n",bitDuzeyi>>1);
		
	
	








	
	return 0 ;
}
