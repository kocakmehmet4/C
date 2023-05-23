#include<stdio.h>
#include<limits.h>  // �limits.h� header�� �char�, �short�, �int�, �long� gibi de�i�ken tiplerinin maximum ve minumum de�er aral�klar�n� belirleyen standart C k�t�phanesidir.
#include<ctype.h> // char type karekterin tipini de�i�tirmeye yar�yan k�t�phane
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
	printf("Long Maximum aral�k %d\n",LONG_MAX);
	printf("Short Maximum aral�k %d\n",LONG_MIN);    */
	
	int SayiInt =1234;
	printf("SayiInt 10'luk taban:%d\n",SayiInt);
	printf("SayiInt 16'lik taban:%X\n",SayiInt);
	printf("SayiInt 8'lik taban:%o\n",SayiInt);
	
	float Sayifloat= 1.141314;
	printf("Sayifloat Normal hali %f\n",Sayifloat);   
	printf("Sayifloat Bilimsel gosterimi %e\n",Sayifloat); //bilimsel
	printf("Sayifloat Bilimsel gosterimi %E\n",Sayifloat); //bilimsel
	printf("Sayifloat Bilimsel gosterimi %g\n",Sayifloat); //normal hali veya bilimsel hali hangisi k���kse onu bast�r�r
	printf("Sayifloat Bilimsel gosterimi %G\n",Sayifloat); //normal hali veya bilimsel hali hangisi k���kse onu bast�r�r
	
	printf("Merhaba dunya\n"); //alt sat�ra iner
	printf("Merhaba \t dunya\n"); // tab kadar bo�luk b�rak�r
	printf("Merhaba\bdunya\n"); // bir bo�luk siler
	printf("'Merhaba dunya'\n"); //tek t�rna�a izin var
	printf("Merhaba \\ dunya\n"); // �ift yazd�g�m�zda 1 tane ��z�k�r
	printf("Merhaba 5%%7 dunya\n"); //e�er mod gibi i�lemler kullan�lacaksa da �ift yaz�l�r
	printf("\"Merhaba dunya\"\n"); //�ift t�rnak i�in �u �ekil kullan�l�r							


/*	
	char karekter ='a';
	char karekterdizisi[]= "1234.1234"; //string ifade
	printf("%c karekterinin hafizada kapladigi alan :%d byte\n",karekter,sizeof(karekter));
	printf("%c karekterinin 10'luk tabanda kapladigi alan %d; 16'lik tabanda kapladigi alan %X'dir\n",karekter,karekter,karekter);

	// 0 ise yanl��, doru ise 0 d���nda bir �ey d�nd�r�r   	
	printf("%c karekteri icin isalpha %d\n",karekter,isalpha(karekter)); // isalpha alfabetik mi de�il mi onu kontrol eder...
	printf("sayi icin isalpha sonucu: %d\n",isalpha('5'));
    printf("karekter icin isdigit sonucu:%d\n",isdigit(karekter)); // isdigit fonksiyonu g�nderdi�imiz rakam m� de�il mi onu kontrol ediyor
	printf("sayi icin isdigit sonucu: %d\n",isdigit('5')); //e�er tek t�rnak kullanmadan g�ndersek 0 d�ner ��nk� decimal kar��l���ndaki 5 e bak�l�r
	printf("karekter icin isalnum sonucu:%d\n", isalnum(karekter));  // isalnum fonksiyonu g�nderdi�imizde rakam veya alfabateik karekter ise doru d�ner
	printf("sayi icin isalnum sonucu:%d\n", isalnum('5'));
	printf("$ icin isalnum sonucu:%d\n",isalnum('$'));
	printf("H icin islower sonucu:%d\n",islower('H')); // k�c�k harf olup olmad���n� kontrol ediyor
	printf("h icin islower sonucu:%d\n",islower('h'));	
	printf("g icin isupper sonucu:%d\n",isupper('g')); // b�y�k harf olup olmad���n� kontrol ediyor
	printf("G icin isupper sonucu:%d\n",isupper('G'));
	printf("c icin toupper sonucu:%c\n",toupper('C')); //toupper k���k harfi b�y�ltmek, tolower b�y�k harfi k���ltmek i�in kullan�l�r 
	printf("C icin tolower sonucu:%c\n",tolower('c'));		
	
  int tamSayi;
	float ondalikliSayi;
	
	tamSayi = atoi(karekterdizisi); // string ifadeyi tam say�ya �evirir
	ondalikliSayi=atof(karekterdizisi); // string ifadeyi floata �evirir
	
	printf("Sayi:%d\n",tamSayi);
	printf("Sayi:%.4f\n",ondalikliSayi);		*/
	
	
	//AR�TMET�K OPERAT�RLER
	
	int sayi= 55, sayi1=2;
	printf("%d+%d=%d\n",sayi,sayi1,sayi+sayi1);		//toplama operat�r�	
	printf("%d-%d=%d\n",sayi,sayi1,sayi-sayi1);		//��karma operat�r�
	printf("%d*%d=%d\n",sayi,sayi1,sayi*sayi1);		//�arpma operat�r�
	printf("%d/%d=%d\n",sayi,sayi1,sayi/sayi1);		//b�lme	operat�r�
	printf("%d%%%d=%d\n",sayi,sayi1,sayi%sayi1);	//mod alma operat�r�
	
	
	//ATAMA OPERAT�RLER�
	
	int sonuc =1;
	sonuc*=4;	// bunun anlam� 	sonuc = sonuc*4;
	sonuc*=3;	// bunun anlam� 	sonuc = sonuc*3;
	sonuc*=2;	// bunun anlam� 	sonuc = sonuc*2;
	
	printf("Sonuc:%d\n",sonuc);
	
	int i =5;
	
	printf("i degeri: %d\n",++i);   // �nce artt�rma sonra yazd�rma
	printf("i degeri: %d\n",i++);	// �nce yazd�rma sonra artt�rma
	
	//B�T D�ZEY�NDE ��LEMLER
		
	int bitDuzeyi=64;
	printf("Sola kaydirilmis Sonuc:%d\n",bitDuzeyi<<1);
	printf("Saga Kaydirilmis Sonuc:%d\n",bitDuzeyi>>1);
		
	
	








	
	return 0 ;
}
