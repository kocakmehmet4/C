#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<math.h>

int main (void) {
	/*
	int sayi;
	srand(time(NULL));
	sayi=rand()%1000;
	printf("Olusturulan sayi:%d\n",sayi);
	
	if(sayi%2==0){
		printf("%d sayisi cift sayidir",sayi);
	}
	else{
		printf("%d sayisi tek sayidir",sayi);
	}										*/
	

/*	int sayi1,sayi2;
	float sonuc;
	char ch;
	
	printf("lutfen iki adet sayi giriniz:\n");
	scanf("%d%d",&sayi1,&sayi2);
	
	printf("lutfen yapmak istediginiz islemi giriniz:(+,-,*,/)\n");
	fflush(stdin); // bufferi temizlemek için kullanýlýr
	scanf("%c",&ch);
	
	if (ch== '+'){
		sonuc= sayi1+sayi2;
		printf("Toplamin sonucu:%.2f",sonuc);
	}
	
	else if (ch== '-'){
		sonuc= sayi1-sayi2;
		printf("Cikarmanin sonucu:%.2f",sonuc);
		
	}
	else if (ch== '*'){
		sonuc= sayi1*sayi2;
		printf("Carpmanin sonucu:%.2f",sonuc);	
		
	}	
	else if (ch== '/'){
		sonuc= sayi1+sayi2;
		printf("Bolmenin sonucu:%.2f",sonuc);
		
	}
		
	else{
		printf("hatali islem yaptiniz.");		
	}
	
												*/

/*	int bakiye=3000;
	int gunlukLimit=2000;
	int islem,kullaniciMiktar;
	
	printf("Hosgeldiniz...\n Yapmak istediginiz islemi asagida seciniz.\n");
	printf(" 1- Para cekme\n 2- Para yatirma\n 3- bakiye sorgulama\n 4- Para gonderme\n 5- Kart iade\n");
	scanf("%d",&islem);
	
	if(islem==1){
		printf("Cekmek istediginiz miktari giriniz:\n");
		scanf("%d",&kullaniciMiktar);
		if(bakiye<kullaniciMiktar){
			printf("Yeterli miktarda para bulunamamaktadir.\n");
			}
		else if (gunlukLimit<kullaniciMiktar){
			printf("Gunluk para cekme limitini astiniz lutfen daha sonra tekrar deneyiniz.");
		}	
		else{
		bakiye-=kullaniciMiktar;
			printf("Yeni bakiyeniz:%d\n",bakiye);	
		}
}
		
		
	
	
	else if(islem==2){
		printf("Yatirmak istediginiz miktari giriniz:\n");
		scanf("%d",&kullaniciMiktar);
		if(kullaniciMiktar==0){
			printf("Lutfen belirtilen surede para girisi yapýnýz.\n");
			sleep(10);//3 saniye dondurma
			scanf("%d",&kullaniciMiktar);
			
			
		}
		
		bakiye+=kullaniciMiktar;
		printf("Bakiyeniz:%d\n",bakiye);
			
		}
		
		
		
	else if(islem==3){
		printf("Bakiyeniz:%d\n",bakiye);
		
		
	}

	else if(islem==4){
		printf("Göndermek istediginiz miktari giriniz:\n");
		scanf("%d",&kullaniciMiktar);
		if(gunlukLimit<=500){
		bakiye-=kullaniciMiktar;
		printf("Yeni bakiyeniz:%d\n",bakiye);	
		}
		
		
		
	}
	else if(islem==5){
		printf("Isleminiz tamamlanmistir...\nKartiniz iade ediliyor lutfen bekleyiniz.\n");
		
		
	}
	else {
		printf("Hatali tuslama yaptiniz.\n");   
												} */
	//ÖDEV 1. SORU
	
	//islower
/*	char ch;
	printf("Lutfen bir karekter giriniz:");
	ch=getchar();// tek bir karekter degeri alýr
	if(ch>='a' && ch <='z'){
		printf("kucuk bir harftir.\n");	
	}
	else{
		printf("kucuk bir harf degildir.\n");
	}                                          */
	
	//isuppper
/*	char ch;
	printf("Lutfen bir karekter giriniz:");
	ch=getchar();// tek bir karekter degeri alýr
	if(ch>='A' && ch <='Z'){
		printf("buyuk bir harftir.\n");	
	}
	else{
		printf("buyuk bir harf degildir.\n");
	}											*/
	
	//isalnum
/*	char ch;
	printf("Lutfen bir karekter giriniz:");
	ch=getchar();// tek bir karekter degeri alýr
	if((ch>='A' && ch <='Z') ||(ch>=97 && ch <=122)||(ch>=48 && ch <=57) ){
		printf("alfanumeriktir.\n");	
	}
	else{
		printf("alfanumeriktir degildir.\n");
	}											*/
	
	//isdigit
/*	char ch;
	printf("Lutfen bir karekter giriniz:\n");
	ch=getchar();
	if(ch>=48 && ch<=57){
		printf("%c bir sayidir\n",ch);
	}
	else{
		printf("%c bir sayi degildir\n",ch);
	}												*/
	
	//tolower
/*	char ch;
	printf("Lutfen bir karekter giriniz:\n");
	ch=getchar();
	if(ch>='A' && ch<='Z'){
		ch+=32;
		printf("%c\n",ch);
		
	}
	else{
		printf("Girdiginiz deger buyuk harf degildir");
	}	
	//toupper											*/
/*	char ch;
	printf("Lutfen bir karekter giriniz:\n");
	ch=getchar();
	if(ch>='a' && ch<='z'){
		ch-=32;
		printf("%c\n",ch);
		
	}
	else{
		printf("Girdiginiz deger kucuk harf degildir");
	}													*/
	
	
/*	int sayi; // rastgele sayý için
	srand(time(NULL));
	sayi= rand()%100000;
	printf("Uretilen sayi:%d\n",sayi);
	
	if(sayi<10){
		printf("Sayi tek basamaklidir.\n");
	}
	else if (sayi<100){
		printf("sayi 2 basamaklidir.\n");
	}
	else if (sayi<1000){
		printf("Sayi 3 basamaklidir.\n");
	}	
	else if (sayi<10000){
		printf("Sayi 4 basamaklidir.\n");
	}
	else if(sayi<100000){
		printf("Sayi 5 basamaklidir.\n");
	}
	else{
		printf("Lutfen tanimli aralikta sayi giriniz");"
	}															*/
	
/*	int fiyatTutari,taksitMiktari;
	char kullaniciCevabi;
	
	srand(time(NULL));
	fiyatTutari=rand()%2000;
	
	printf("Yaptiginiz alisveris tutari:%d TL\n",fiyatTutari);
	printf("Taksit istiyor musunuz? (E/H)");
	kullaniciCevabi=getchar();
	
	if(kullaniciCevabi=='E'){
		printf("Kac taksit uygulanmasini istersiniz?(3-6-9)");
		scanf("%d",&taksitMiktari);
		
		switch (taksitMiktari){
			case 3:
			fiyatTutari= fiyatTutari*1.03;
			printf("%d taksit uygulandi\n",taksitMiktari);
			printf("Urunun yeni fiyati:%d\n",fiyatTutari);
				break;
				
			case 6:
			fiyatTutari= fiyatTutari*1.06;
			printf("%d taksit uygulandi\n",taksitMiktari);
			printf("Urunun yeni fiyati:%d\n",fiyatTutari);
				break;
				
			case 9:
			fiyatTutari= fiyatTutari*1.09;
			printf("%d taksit uygulandi\n",taksitMiktari);
			printf("Urunun yeni fiyati:%d\n",fiyatTutari);
				break;
				
			default:
				printf("Giridiginiz taksit miktari uygun olmadi. Taksit uygulanmiyor\n");
		}
		
		
	}
	else{
		printf("Herhangi bir taksit uygulanmadi\n");
	}
	
	printf("Musteri kartiniz var mi (E/H)");
	fflush(stdin);
	kullaniciCevabi=getchar();
	
	if(kullaniciCevabi=='E'){
		fiyatTutari-=fiyatTutari*0.05;		
	}
	else{
		printf("Herhangi bir indirim uygulanmadi.\n");
	}
	printf("Total miktar:%d",fiyatTutari);				*/
	
	
	int x,y,z;
	printf("Lutfen sirasiyla x,y,z kenarlarini giriniz.");
	scanf("%d%d%d",&x,&y,&z);
	if(abs(y-z)<x && x<y+z){
		if(abs(x-z)<y && y<z+x){
			if(abs(x-y)<z && z<x+y);
				printf("girdiginiz kenar bilgilerine gore bir ucgen olusturulabilir.\n");
			
			else  {
				printf("z kenari yuzunden ucgen olusturulamiyor");
			}
		}
		else{
			printf("y kenari yuzunden ucgen olusturulamiyor");
		}
	}
	else {
		printf("x kenari yuzunden ucgen olusturulamiyor");
	}
	
	
	
	
	
		
	
	
		
	
	
	
	
	
	return 0 ;
}
