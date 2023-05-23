#include<stdio.h>
#include<math.h> //bazý matematik fonksiyonlarýný içeren kütüphanedir
#define pi 3.14

int main (void){
	
	

	//Mantýksal operatörler- iliþkisel operatörler
/*	
	int sayi=15, sayi1=25;
	printf("Ilk sayi:%d, ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi,sayi1,sayi>sayi1); //büyük müdür
	printf("Ilk sayi:%d, ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi,sayi1,sayi<sayi1); //küçük müdür
	printf("Ilk sayi:%d, ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi,sayi1,sayi==sayi1); //eþit midir
	printf("Ilk sayi:%d, ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi,sayi1,sayi!=sayi1); //eþit deðil midir
	printf("Ilk sayi:%d, ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi,sayi1,sayi<=sayi1); //küçük eþit midir
	printf("Ilk sayi:%d, ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi,sayi1,sayi>=sayi1); //büyük eþit midir
	printf("Ilk sayi:%d, ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi,sayi1,!(sayi==sayi1)); // ünlem tersi demektir
	printf("Ilk sayi:%d, ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi,sayi1,(sayi!=sayi1)&&(sayi<sayi1)); // iki taraf da 1 olmalý
	printf("Ilk sayi:%d, ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi,sayi1,(sayi==sayi1)||(sayi<sayi1)); //  en az bir taraf  1 olursa yeterlidir				

	int bitDuzeyi=64, bitDuzeyi1=32;
	
	printf("Ve operatoru Sonuc:%d\n",bitDuzeyi & bitDuzeyi1);
	printf("Veya operatoru Sonuc:%d\n",bitDuzeyi | bitDuzeyi1);     */
	
	/*
	VEYA
	64= 0100 0000
	32= 0010 0000
	s=  0110 0000
	VE
	64= 0100 0000
	32= 0010 0000
	s=  0000 0000   */
	
/*    Örnek1
	int paraMiktari;
	printf("Lutfen Para Miktarini Giriniz:");
	scanf("%d",&paraMiktari);
	
	printf(" %d adet 200 TL bulunmaktadir\n",paraMiktari/200);
	paraMiktari%=200;
	printf(" %d adet 100 TL bulunmaktadir\n",paraMiktari/100);
	paraMiktari%=100;
	printf(" %d adet 50 TL bulunmaktadir\n",paraMiktari/50);
	paraMiktari%=50;
	printf(" %d adet 20 TL bulunmaktadir\n",paraMiktari/20);
	paraMiktari%=20;
	printf(" %d adet 10 TL bulunmaktadir\n",paraMiktari/10);
	paraMiktari%=10;
	printf(" %d adet 1 TL bulunmaktadir\n",paraMiktari/1);
	paraMiktari%=1;    											*/
	
/* ÖRNEk2
	int sayi,geciciSayi;
	printf("Lutfen tersi alinacak 3 basamakli sayiyi giriniz:");
	scanf("%d",&sayi);
	printf("Duz hali: %d	",sayi);
	printf("Ters hali:");
	geciciSayi=sayi;
	printf("%d",geciciSayi%10);
	geciciSayi/=10;
	printf("%d",geciciSayi%10);
	geciciSayi/=10;
	printf("%d",geciciSayi%10);									*/
/* ÖDEV1
	int a,b,c;
	float delta;

	printf("Lutfen a sayisini giriniz:");
	scanf("%d",&a);
	printf("Lutfen b sayisini giriniz:");
	scanf("%d",&b);
	printf("Lutfen c sayisini giriniz:");
	scanf("%d",&c);
	//delta = b*b-(4*a*c);		
	delta = pow(b,2)-4*a*c; // pow fonksiyonu math.h kütüphanesinde kullanýlan üs iþlemi	
	printf("delta sonucunuz: %.2f	",delta);
	printf("delta: %d",delta>0);								*/
/* ÖDEV2	
	int vizeNotu,vizeYuzdesi,finalNotu,canDegeri=60;
	float ogrenciOrtalamasi;
	printf("Lutfen Vize notunuzu ve Vize yuzdenizi Giriniz:");
	scanf("%d%d",&vizeNotu,&vizeYuzdesi);
	printf("Lutfen final notunuzu giriniz:");
	scanf("%d",&finalNotu);
	printf("Vize notunuz:%d(Vize Yuzdeniz:%d) Final Notunuz:%d(Final Yuzdeniz:%d)\n",vizeNotu,vizeYuzdesi,finalNotu,100-vizeYuzdesi);
	ogrenciOrtalamasi=(vizeNotu*vizeYuzdesi+finalNotu*(100-vizeYuzdesi))/100;
	printf("Ogrenci Ortalamasi:%.2f\n",ogrenciOrtalamasi);
	printf("Ders Gecme durumunuz(1-->Gectiniz,0-->Kaldiniz):%d",ogrenciOrtalamasi>=canDegeri);			*/
	
	int yaricap;
	float alan,cevre;
	printf("Lutfen yaricap degerini giriniz:");
	scanf("%d",&yaricap);
	printf("Girdiginiz yaricap degeri:%d\n",yaricap);
	alan= pi*yaricap*yaricap;  //pow(yaricap,2)*pi
	cevre=2*pi*yaricap;
	printf("Alan:%.2f\n",alan);
	printf("Cevre:%.2f",cevre);
	
	
	
	
	
		
	

		
	


	
return 0 ;
}
	


