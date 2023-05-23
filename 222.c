#include<stdio.h>

/*void func(char * input){
	printf("%c",*input);
	if(*(input+1)!='\0'){
		func(input+1);
	}
	else{
		printf("-");
	}
	printf("%c",*input);
}

int main(){
	
	char *in="Hello world";
	func(in);	
	return 0;
}*/


/*typedef struct{
	int pay;
	int payda;
}kesirler;


void kesirToplam(kesirler *p1,kesirler *p2,kesirler *p3){
	p3->pay=(p1->pay*p2->payda)+(p1->payda*p2->payda);
	p3->payda=p1->payda*p2->payda;
}
void kesirSade(kesirler *p1){
	int i;
	for(i=p1-1;i>0;i++){
		if(p1->pay%i==0 && p1->payda%i==0){
			p1->pay/=i;
			p1->payda/=i;
		}
	}
}

int main(){
	
	int n1,n2,d1,d2;
	kesirler *kesir3,*kesir4,*kesir5;
	printf("Lutfen ilk kesiri pay-payda seklinde giriniz:");
	scanf("%d%d",&n1,&d1);
	printf("Lutfen ikinci kesiri pay-payda seklinde giriniz:");
	scanf("%d%d",&n2,&d2);
	
	/*kesir3.pay=n1,kesir3.payda=d1;
	kesir4.pay=n2,kesir4.payda=d2;
	kesir5.pay=n1*d2+n2*d1,kesir5.payda=d1*d2;
	kesirToplam(kesir3,kesir4,kesir5);
	kesirSade(kesir5);
	
	kesir3->pay=n1,kesir3->payda=d1;
	kesir4->pay=n2,kesir4->payda=d2;
	kesir5->pay=n1*d2+n2*d1,kesir5->payda=d1*d2;
	kesirToplam(kesir3,kesir4,kesir5);
	kesirSade(kesir5);
	
	
	return 0;
}*/





/*typedef struct{
	int pay;
	int payda;
}kesirler;

void kesirToplam(kesirler *p1,kesirler *p2,kesirler *p3){
	p3->pay=(p1->pay*p2->payda)+(p1->payda*p2->pay);
	p3->payda=(p1->payda*p2->payda);
}
void kesirSade(kesirler *p1){
	int i;
	for(i=p1-1;i>0;i--){
		if(p1->payda%i==0 && p1->pay%i==0){
			p1->pay/=i;
			p1->payda/=i;
		}
	}
	
}

int main (){
	
	int n1,n2,d1,d2;
	kesirler *kesir3,*kesir4,*kesir5;
	printf("Lutfen sirasiyla pay-payda olacak sekilde ilk kesiri giriniz:");
	scanf("%d %d",&n1,&d1);
	printf("Lutfen sirasiyla pay-payda olacak sekilde ikinci kesiri giriniz:");
	scanf("%d %d",&n2,&d2);
	
	kesir3.pay=n1,kesir3.payda=d1;							---
	kesir4.pay=n2,kesir4.payda=d2;							---> BURASI YOK
	kesir5.pay=n1*d2+n2*d1,kesir5.payda=d1*d2;				---
	
	kesir3->pay=n1,kesir3->payda=d1;
	kesir4->pay=n2,kesir4->payda=d2;
	kesir5->pay=n1*d2+n2*d1,kesir5->payda=d1*d2;
	kesirToplam(kesir3,kesir4,kesir5);
	kesirSade(kesir5);
	printf("%d %d",kesir5->pay,kesir5->payda);
	return 0;
}*/

/*int main(){
	
	int dizi[10]={2,21,3};
	int *p1=dizi[2];
	int *q1=p1+2;
	int i;
	
	*(++q1)=*(++p1), *(++p1)=*(++q1);
	*(p1)++=*(q1)++, *(q1)++=*(p1)++;
	
	printf("%d %d %d",*dizi,*p1,*q1);*/
	
	
	
/*	char kullaniciGirisi[50];
	puts("stringi giriniz:");
	gets(kullaniciGirisi);
	int i=0,a=0,b;
	
	while(1){
		if(kullaniciGirisi[i]!=' ' && kullaniciGirisi[i]!='\0')
		a++;
		else{
			if(a%2!=0){
				b=i;
				b-=(a/2)+1;
				printf("%c ",kullaniciGirisi[b]);
			}
			a=0;
		}
		if(kullaniciGirisi[i]=='\0'){
			break;
		}
		i++;
	}		
	return 0;
}*/

/*typedef struct{
	int pay;
	int payda;
}kesirler;


int main(){
	
	int n1,n2,d1,d2;
	printf("Lutfen ilk kesri pay-payda seklinde giriniz:");
	scanf("%d%d",&n1,&d1);
	printf("Lutfen ikinci kesri pay-payda seklinde giriniz:");
	scanf("%d%d",&n2,&d2);
	kesirler kesir;
	
	kesir.pay=n1*d2+n2*d1;
	kesir.payda=d1*d2;
	
	
	int i;
	for(i=kesir.payda-1;i>0;i--){
		if(kesir.pay%i==0 && kesir.payda%i==0){
			kesir.pay/=i;
			kesir.payda/=i;
		}
	}
	printf("%d/%d",kesir.pay,kesir.payda);
	
	
	
	
	return 0;
}*/


/*struct Ogrenci{
	char isim[30];
	char soyisim[20];
	float ortalama;
};

int main(){
	struct Ogrenci ogrenciler[]= {{"Mehmet","Kocak",2.89},{"Oguzhan","Ozcan",2.70},{"Sinan","Kiliclar",2.99},{"Muhammed","Zulal",3.20}};
	
	printf("Ogrencinin ismi:%s\n",ogrenciler[0].isim);
	printf("Ogrencinin Soyismi:%s\n",ogrenciler[0].soyisim);
	printf("Ogrencinin Ortalamasi:%.2f\n",ogrenciler[0].ortalama);
	
	printf("\nOgrencinin ismi:%s\n",ogrenciler[1].isim);
	printf("Ogrencinin Soyismi:%s\n",ogrenciler[1].soyisim);
	printf("Ogrencinin Ortalamasi:%.2f\n",ogrenciler[1].ortalama);
	
	printf("\nOgrencinin ismi:%s\n",ogrenciler[2].isim);
	printf("Ogrencinin Soyismi:%s\n",ogrenciler[2].soyisim);
	printf("Ogrencinin Ortalamasi:%.2f\n",ogrenciler[2].ortalama);
	
	printf("\nOgrencinin ismi:%s\n",ogrenciler[3].isim);
	printf("Ogrencinin Soyismi:%s\n",ogrenciler[3].soyisim);
	printf("Ogrencinin Ortalamasi:%.2f\n",ogrenciler[3].ortalama);
	
	struct Ogrenci ogrenciler[3];
	int i;
	
	for(i=0;i<3;i++){
		puts("Lutfen ogrencinin ismini giriniz:");
		scanf("%s",&ogrenciler[i].isim);
		puts("Lutfen ogrencinin Soyismini giriniz:");
		scanf("%s",&ogrenciler[i].soyisim);
		puts("Lutfen ogrencinin Ortalamasini giriniz:");
		scanf("%f",&ogrenciler[i].ortalama);
	}
	for(i=0;i<3;i++){
		printf("%d.Ogrencinin Adi-Soyadi:%s %s ve ortalamasi:%.2f\n",i+1,ogrenciler[i].isim,ogrenciler[i].soyisim,ogrenciler[i].ortalama);
	}
	 
	 return 0;	
}	
*/


/*typedef struct{
	int saat;
	int dakika;
	double saniye;
	
}saatBilgileri;

saatBilgileri saat(double kullaniciSaati){
	saatBilgileri donusturulenSaat;
	int tamSayiKismi=(int)kullaniciSaati;
	double ondalikliKisim=kullaniciSaati-tamSayiKismi;
	donusturulenSaat.saat=tamSayiKismi/3600;
	donusturulenSaat.dakika=tamSayiKismi%3600/60;
	donusturulenSaat.saniye=((tamSayiKismi)%3600)%60+ondalikliKisim;
	
	return donusturulenSaat;
}
int main(){
	double kullaniciGirisi;
	
	printf("Lutfen saniye cinsinden saatini istediginiz sayiyi giriniz:");
	scanf("%lf",&kullaniciGirisi);
	
	saatBilgileri sonuc=saat(kullaniciGirisi);
	printf("%d:%d:%.2f",sonuc.saat,sonuc.dakika,sonuc.saniye);
	return 0;
	
}*/



/*typedef struct{
	char sembol[3];
	char elementAdi[20];
	int atomNumarasi;
}element;

void bilgileriGoster(element elementListesi[],char *ArananSembol,int elementSayisi){
	int i,bulunduMu=0;
	for(i=0;i<elementSayisi;i++){
		if(strcmp(elementListesi[i].sembol,ArananSembol)==0){
			printf("Sembol:%s\n",elementListesi[i].sembol);
			printf("Tam adi:%s\n",elementListesi[i].elementAdi);
			printf("Atom Numarasi:%d\n",elementListesi[i].atomNumarasi);
			bulunduMu=1;
			break;
		}
	}
	if(!bulunduMu){
		printf("Aradiginiz element Listede bulunmadi!\n");
	}
}

int main(){
	
	element elementBilgileri[]={{"H","Hidrojen",1},{"He","Helyum",2},{"F","Flor",9},{"N","Azot",7},{"Na","Sodyum",11}};
	char kullaniciArama[5];
	while(1){
		printf("Lutfen aradaginiz elementin sembolunu giriniz:(Cikis icin Q'yu Tuslayiniz.)");
		scanf("%s",&kullaniciArama);
		
		if(strcmp(kullaniciArama,"Q")==0){
			break;
		}
		bilgileriGoster(elementBilgileri,kullaniciArama,5);
		
	}
}*/

/*typedef struct{
	char sembol[3];
	char elementAdi[20];
	int atomNumarasi;
}element;

void bilgileriGoster(element elementListesi[],char *arananSembol,int elementSayisi){
	
	int i,bulunduMu=0;
	for(i=0;i<elementSayisi;i++){
		if(strcmp(elementListesi[i].sembol,arananSembol)==0){
			printf("Sembol:%s\n",elementListesi[i].sembol);
			printf("Tam Adi:%s\n",elementListesi[i].elementAdi);
			printf("Atom Numarasi:%d\n",elementListesi[i].atomNumarasi);
			bulunduMu=1;
			break;
		}
	
	}
	if(!bulunduMu){
		printf("Aradiginiz element listede bulunmadi!\n");
	}
	
	
}
int main(){
	element elementBilgileri[]={{"H","Hidrojen",1},{"He","Helyum",2},{"F","Flor",9},{"N","Azot",7},{"Na","Sodyum",11}};
	char kullaniciArama[5];
	while(1){
		printf("Lutfen aramak istediginiz elementin sembolunu giriniz (cikmak icin Q'yu Tuslayiniz:)");
		scanf("%s",&kullaniciArama);
		if(strcmp(kullaniciArama,"Q")==0){
			printf("Iyi gunler dilerim efendim!");
			break;
		}
		bilgileriGoster(elementBilgileri,kullaniciArama,5);
	}
}*/

/*typedef struct{
	int reel;
	int imaginal;
}karmasikSayi;

karmasikSayi karmasikTopla(karmasikSayi sayi1,karmasikSayi sayi2){
	
	karmasikSayi toplam;
	toplam.imaginal=sayi1.imaginal+sayi2.imaginal;
	toplam.reel=sayi1.reel+sayi2.reel;
	return toplam;

}

int main(){
	karmasikSayi n1,n2;
	printf("Lutfen ilk karmasik Sayinin reel ve imaginal kismini sirasiyla giriniz");
	scanf("%d%d",&n1.reel,&n1.imaginal);
	printf("Lutfen ikinci karmasik Sayinin reel ve imaginal kismini sirasiyla giriniz");
	scanf("%d%d",&n2.reel,&n2.imaginal);
	karmasikSayi sonuc=karmasikTopla(n1,n2);
	printf("%d+%di",sonuc.reel,sonuc.imaginal);
}*/

/*typedef struct{
	int saat;
	int dakika;
	float saniye;
}saatBilgileri;

saatBilgileri saatfarkiBul(saatBilgileri ilk, saatBilgileri ikinci){
	
	saatBilgileri farkibul;
	double doubleSaat=ilk.saat*3600+ilk.dakika*60+ilk.saniye;
	double doubleSaat2=ikinci.saat*3600+ikinci.dakika*60+ikinci.saniye;
	if(doubleSaat>=doubleSaat2){
		if(ilk.dakika<ikinci.dakika){
			ilk.dakika+=60;
			ilk.saat-=1;
		}
		if(ilk.saniye<ikinci.saniye){
			ilk.saniye+=60;
			ilk.dakika-=1;
		}
		farkibul.saat=ilk.saat-ikinci.saat;
		farkibul.dakika=ilk.dakika-ikinci.dakika;
		farkibul.saniye=ilk.saniye-ikinci.saniye;
		
	}
	else{
		if(ilk.dakika>ikinci.dakika){
			ikinci.dakika+=60;
			ikinci.saat-=1;
		}
		if(ilk.saniye>ikinci.saniye){
			ikinci.saniye+=60;
			ikinci.dakika-=1;
		}
		farkibul.saat=ikinci.saat-ilk.saat;
		farkibul.dakika=ikinci.dakika-ilk.dakika;
		farkibul.saniye=ikinci.saniye-ilk.saniye;
		
	}
	return farkibul;
	
}

int main(){
	
	saatBilgileri kullaniciGirisi1,kullaniciGirisi2;
	printf("Lutfen ilk saat bilgilerini saat-dakika-saniye olarak giriniz:");
	scanf("%d:%d:%f",&kullaniciGirisi1.saat,&kullaniciGirisi1.dakika,&kullaniciGirisi1.saniye);
	printf("Lutfen ikinci saat bilgilerini saat-dakika-saniye olarak giriniz:");
	scanf("%d:%d:%f",&kullaniciGirisi2.saat,&kullaniciGirisi2.dakika,&kullaniciGirisi2.saniye);
	
	saatBilgileri sonuc=saatfarkiBul(kullaniciGirisi1,kullaniciGirisi2);
	printf("%d:%d:%.2f",sonuc.saat,sonuc.dakika,sonuc.saniye);
	
	return 0;
}*/

/*typedef struct
{
	int pay;
	int payda;
}kesirler;

void kesirToplam(kesirler *p1,kesirler *p2,kesirler *p3){

	p3->pay=p1->pay*p2->payda+p1->payda*p2->pay;
	p3->payda=p1->payda*p2->payda;
}

void kesirSade(kesirler *p3){
	int i;
	for (i=p3-1;i>0; i--)
	{
		if(p3->payda%i==0 && p3->pay%i==0){
			p3->pay/=i;
			p3->payda/=i;
		}
	}
}


int main(int argc, char const *argv[])
{
	int n1,n2,d1,d2;
	printf("Lutfen ilk kesri pay-payda biciminde giriniz:");
	scanf("%d%d",&n1,&d1);
	printf("Lutfen ikinci kesri pay-payda biciminde giriniz:");
	scanf("%d%d",&n2,&d2);

	kesirler *k3,*k4,*k5;
	k3->pay=n1,k3->payda=d1;
	k4->pay=n2,k4->payda=d2;
	k5->pay=n1*d2+n2*d1,k5->payda=d1*d2;
	kesirToplam(k3,k4,k5);
	printf("%d/%d",k5->pay,k5->payda);
	return 0;
}*/


/*typedef struct
{
	int pay;
	int payda;
}kesirler;

void kesirToplam(kesirler *p1,kesirler *p2,kesirler *p3){

	p3->pay=p1->pay*p2->payda+p1->payda*p2->pay;
	p3->payda=p1->payda*p2->payda;
}

void kesirSade(kesirler *p3){
	int i;
	for (i=p3-1;i>0; i--)
	{
		if(p3->payda%i==0 && p3->pay%i==0){
			p3->pay/=i;
			p3->payda/=i;
		}
	}
}


int main(int argc, char const *argv[])
{
	int n1,n2,d1,d2;
	printf("Lutfen ilk kesri pay-payda biciminde giriniz:");
	scanf("%d%d",&n1,&d1);
	printf("Lutfen ikinci kesri pay-payda biciminde giriniz:");
	scanf("%d%d",&n2,&d2);

	kesirler k3,k4,k5;
	k3.pay=n1,k3.payda=d1;
	k4.pay=n2,k4.payda=d2;
	k5.pay=n1*d2+n2*d1,k5.payda=d1*d2;
	kesirToplam(&k3,&k4,&k5);
	printf("%d/%d",k5.pay,k5.payda);
	return 0;
}*/

/*typedef struct{
	int pay;
	int payda;
}kesirler;

void kesirToplam(kesirler *p3,kesirler *p4,kesirler *p5){
	p5->pay=p3->pay*p4->payda+p3->payda*p4->pay;
	p5->payda=p3->payda*p4->payda;
}
void kesirSade(kesirler *p5){
	int i;
	for (i=2;i<=p5->pay; i++)
	{
		while(p5->pay%i==0 && p5->payda%i==0){
			p5->pay/=i;
			p5->payda/=i;
		}
	}
}

int main(int argc, char const *argv[])
{
	int n1,n2,d1,d2;
	kesirler k3,k4,k5;
	printf("Lutfen birinci kesiri pay-payda seklinde giriniz:");
	scanf("%d%d",&n1,&d1);
	printf("Lutfen ikinci kesiri pay-payda seklinde giriniz");
	scanf("%d%d",&n2,&d2);
	k3.pay=n1,k3.payda=d1;
	k4.pay=n2,k4.payda=d2;
	k5.pay=n1*d2+n2*d1,k5.payda=d1*d2;
	kesirToplam(&k3,&k4,&k5);
	kesirSade(&k5);
	printf("%d/%d",k5.pay,k5.payda);

	return 0;
}*/

/*typedef struct{
	int pay;
	int payda;
}kesirler;

void kesirTopla(kesirler *p3,kesirler *p4,kesirler *p5){
	p5->pay=p3->pay*p4->payda+p3->payda*p4->pay;
	p5->payda=p3->payda*p4->payda;
}
void kesirSade(kesirler *p5){
	int i;
	for(i=2;i<=p5->pay;i++){
		while(p5->pay%i==0 && p5->payda%i==0){
			p5->payda/=i;
			p5->pay/=i;
		}
	} 
}

int main(int argc, char const *argv[])
{
	int n1,n2,d1,d2;
	printf("Lutfen birinci kesiri pay-payda olarak giriniz:");
	scanf("%d%d",&n1,&d1);
	printf("Lutfen ikinci kesiri pay-payda olarak giriniz:");
	scanf("%d%d",&n2,&d2);
	/*k3.pay=n1,k3.payda=d1;
	k4.pay=n2,k4.payda=d2;
	k5.pay=n1*d2+n2*d1,k5.payda=d1*d2;
	kesirler k1,k2;
	k1.pay=n1,k1.payda=d1;
	k2.pay=n2,k2.payda=d2;
	kesirler *k3=&k1;
	kesirler *k4=&k2;
	kesirler *k5=&k1;
	kesirTopla(k3,k4,k5);
	kesirSade(k5);
	printf("%d/%d",k5->pay,k5->payda);
	return 0;
}*/

/*int recursiveOndalikCevir(int sayi,int *a,int *toplam){
	//static int a=1;
	//static int toplam=0;
	if(sayi!=0){
		(*toplam)+=(sayi%2)*(*a);
		(*a)*=10;
		return recursiveOndalikCevir(sayi/2,a,toplam);
	}
	return (*toplam);
}

int main(int argc, char const *argv[])
{
	int sayi,toplam=0,i=1;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	//int i=1;
	/*int temp=sayi;
	while(temp!=0){
		geciciSayi+=(temp%2)*i;
		temp/=2;
		i*=10;
	}
	printf("%d",geciciSayi);
	int sonuc=recursiveOndalikCevir(sayi,&i,&toplam);
	printf("Sonuc:%d",sonuc);


	return 0;
}*/

void recursiveTers(char *p1){
	printf("%c",*p1);
	if(*(p1)!='\0')
		recursiveTers(p1+1);
	else
		printf("-");
	printf("%c",*p1);
	
}
int main(int argc, char const *argv[])
{
	char kullaniciGirisi[50];
	puts("Lutfen string ifade giriniz:");
	gets(kullaniciGirisi);
	recursiveTers(kullaniciGirisi);
	
	return 0;
}





	
	
	

	
	
	
	
	
	
	
	
	

































