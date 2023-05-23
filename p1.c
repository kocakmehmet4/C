#include<stdio.h>
#include<string.h>
/*void recursiveMaxMinBul(int *dizi,int elemanSayisi,int *max,int *min){
	if(elemanSayisi!=0){
		if(*dizi>*max){
			*max=*dizi;
		}
		else if(*dizi<*min){
			*min=*dizi;
		}
		elemanSayisi--;
		dizi++;
		recursiveMaxMinBul(dizi,elemanSayisi,max,min);
	}	
}

void recursiveTop(int *dizi,int elemanSayisi,float *toplam,float *ortalama){
	int *temp=&elemanSayisi;
	if(elemanSayisi>0){
		*toplam+=*dizi;
		dizi++;
		elemanSayisi--;
		recursiveTop(dizi,elemanSayisi,toplam,ortalama);
	}
	*ortalama=*toplam/(*temp);
}
int main(){
	int BOYUT,i,max,min;
	float toplam=0,ortalama=0;
	printf("Lutfen dizinin kac elemanli olmak istediginizi giriniz:");
	scanf("%d",&BOYUT);
	int dizi[BOYUT];
	for(i=0;i<BOYUT;i++){
		printf("dizinin %d. elemani:",i+1);
		scanf("%d",&dizi[i]);
	}
	max=dizi[0];
	min=dizi[0];
	recursiveMaxMinBul(dizi,BOYUT,&max,&min);
	printf("Max:%d\nMin:%d\n",max,min);
	recursiveTop(dizi,BOYUT,&toplam,&ortalama);
	printf("toplam:%.2f\nortalama:%.2f\n",toplam,ortalama);

	return 0;
}*/
/*void boslukKarakterSay(char *str,int *boslukSayisi){
	char *str2=str;
	while(*str2!='\0'){
		if(*str2==' '){
			*boslukSayisi+=1;
			
		}
		str2++;
	}
}
void myStrLen(char *str,int *karakterSayisi){
	char *p1=str;
	while(*p1!='\0'){
		*karakterSayisi+=1;
		p1++;
		
	}
}
void tersiniYazdirma(char *str){
	int karakterSayisi=strlen(str);
	char *p1=str+karakterSayisi-1;
	while(p1>=str){
		printf("%c",*p1);
		p1--;
	}
}*/
/*int myStrCmp(char *str,char *str2){
	char *p1=str;
	char *p2=str2;
	while(*p1!='\0' && *p2!='\0'){
		if(*p1==*p2){
			p1++;
			p2++;
		}
		else if(*p1>*p2){
			return 1;
		}
		else{
			return 2;
		}
	}
	if(strlen(p1)==strlen(p2)){
		return 0;
	}
	else if(strlen(p1)>strlen(p2)){
		return 1;
	}
	else{
		return 2;
	}h
}
int main(){
	char kullaniciGirisi[20],kullaniciGirisi2[20];
	int boslukSayisi=0,karakterSayisi=0;
	puts("Lutfen bir string giriniz:");
	gets(kullaniciGirisi);
	puts("Lutfen ikinci string giriniz:");
	gets(kullaniciGirisi2);
	//boslukKarakterSay(kullaniciGirisi,&boslukSayisi);
	//printf("%d\n",boslukSayisi);
	//myStrLen(kullaniciGirisi,&karakterSayisi);
	//printf("%d\n",karakterSayisi);
	//tersiniYazdirma(kullaniciGirisi);
	int sonuc=myStrCmp(kullaniciGirisi,kullaniciGirisi2);
	if(sonuc==0)
		printf("iki string birbirlerinin aynisidir.");
	else if(sonuc==1)
		printf("Girilen ilk string ikinciden sonra geliyor.");
	else
		printf("Girilen ilk string ikinciden once geliyor");
	
	
	return 0;
}*/
/*#define N 10

void diziyiDoldur(int *dizi ){
	int i;
	int *p1=dizi;
	srand(time(NULL));
	for(;p1<dizi+N;p1++){
		*p1=rand()%100;
	}
}
void diziyiYazdir(int *dizi ){
	int i;
	int *p1=dizi;
	for(;p1<dizi+N;p1++){
		printf("%d ",*p1);
	}
}
void diziyiTerstenYazdir(int *dizi){
	int *p1=dizi+N-1;
	for(;p1>=dizi;p1--){
		printf("%d ",*p1);
	}
}
int main(){
	int dizi[N];
	diziyiDoldur(dizi);
	diziyiYazdir(dizi);
	printf("\n");
	diziyiTerstenYazdir(dizi);
	return 0;
}*/
/*void myStrCat(char *str, char *str2){
	char *p1=str;
	//int karakterSayisi=strlen(str);
	//char *p1=str+karakterSayisi;
	while(*p1!='\0'){
		p1++;
	}
	char *p2=str2;
	while(*p2){
		*p1=*p2;
		p1++;
		p2++;
	}
	*p1='\0';
}

void myStrCpy(char *str, char *str2){
	char *p1=str;
	char *p2=str2;
	while(*p2){
		*p1=*p2;
		p1++;
		p2++;
	}
	*p1='\0';
}
int main(){
	 
	char kullaniciGirisi[]="Mehmet";
	char kullaniciGirisi2[]="Kocak";
	//myStrCat(kullaniciGirisi,kullaniciGirisi2);
	myStrCpy(kullaniciGirisi,kullaniciGirisi2);
	puts(kullaniciGirisi);
	
	
	return 0;
}*/

/*int kacKezGeciyor(char *str,char arananDeger){
	char *p1=str;
	int sayac=0;
	while(*p1){
		if(arananDeger==*p1){
			sayac++;
		}
		p1++;
	}
	return sayac;
}

int main(){
	char kullaniciGirisi[20],arananDeger;
	puts("Lutfen string giriniz:");
	gets(kullaniciGirisi);
	printf("aramak istediginiz stringi giriniz:");
	scanf("%c",&arananDeger);
	printf("aradiginiz kelime %d kez gecmektedir.",kacKezGeciyor(kullaniciGirisi,arananDeger));
	
	return 0;
}*/

/*void recursiveMaxMin(int dizi[],int max,int min,int elemanSayisi,int size){
	if(size<elemanSayisi){
		if(dizi[size]>max){
			max=dizi[size];
		}
		if(dizi[size]<min){
			min=dizi[size];
		}
		size++;
		recursiveMaxMin(dizi,max,min,elemanSayisi,size);
	}
	else{
		printf("Max:%d\nMin:%d",max,min);
	}
	
	
}
int main(){
	int BOYUT,i,max,min;
	printf("Lutfen dizinin boyutunu giriniz:");
	scanf("%d",&BOYUT);
	int dizi[BOYUT];
	for(i=0;i<BOYUT;i++){
		printf("Dizinin %d. elemani:",i+1);
		scanf("%d",&dizi[i]);
	}
	max=dizi[0];
	min=dizi[0];
	i=1;
	recursiveMaxMin(dizi,max,min,BOYUT,i);
}*/

/*int recursiveReverse(int num,int len){
	if(num!=0){
		return num%10*pow(10,len-1)+recursiveReverse(num/10,len-1);
	}	
	return num;
}
int main(){
	int sayi,basamak=0,temp;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	temp=sayi;
	while(temp!=0){
		temp/=10;
		basamak++;
	}
	//recursiveReverse(sayi,basamak);
	printf("%d",recursiveReverse(sayi,basamak));
}*/

/*int recursiveBase(int num, int *len){
	//static int len=0;
	if(num!=0){
		(*len)++;
		recursiveBase(num/10,len);
	}
	return *len;
}

int recursiveBase1(int num){
	static int len=0;
	if(num!=0){
		len++;
		recursiveBase1(num/10);
	}
	return len;
}
int main(){
	int sayi,basamak=0;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	printf("%d",recursiveBase(sayi,&basamak));
	printf("%d",recursiveBase1(sayi));
}*/

/*int recursiveFact(int num){
	if(num==1){
		return 1;
	}
	return num*recursiveFact(num-1);
}
int main(){
	int sayi,basamak=0;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	printf("%d",recursiveFact(sayi));
	return 0;
}*/
/*int recursivePow(int num,int power){
	if(power==0){
		return 1;
	}
	return num*recursivePow(num,power-1);
}
int main(){
	int sayi,us;
	printf("Lutfen bir sayi ve ussunu giriniz:");
	scanf("%d%d",&sayi,&us);
	printf("%d",recursivePow(sayi,us));
	return 0;
}*/

/*int recursiveIsPrime(int n1,int n2){
	if(n2==1){
		return 1;
	}

	else if(n1%n2==0){
		return 0;
	}
	else{
		return recursiveIsPrime(n1,n2-1);
	}
	
	
}
int main(){
	int sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	printf("%d",recursiveIsPrime(sayi,sayi/2));
	return 0;
}*/


/*int recursiveFibo(int num){
	if(num==0 || num==1){
		return 1;
	}
	else{
		return recursiveFibo(num-1)+recursiveFibo(num-2);
	}
}
int main(){
	int sayi,i;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	for(i=0;i<sayi;i++){
	printf("%d ",recursiveFibo(i));
	}
	//printf("%d",recursiveFibo(sayi));
	return 0;
}*/

/*int recursiveBaseSum(int sayi,int *toplam){
	if(sayi!=0){
		*toplam+=sayi%10;
		return recursiveBaseSum(sayi/10,toplam);
	}
	return *toplam;
}
int main(){
	int sayi,toplam=0;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	printf("%d",recursiveBaseSum(sayi,&toplam));
	return 0;
}*/

/*int recursiveEBOB(int n1,int n2){
	if(n2!=0){
		return recursiveEBOB(n2,n1%n2);
	}
	return n1;
}
int recursiveEKOK(int n1,int n2){
	static int comn=1;
	if(comn%n1==0 && comn%n2==0){
		return comn;
	}
	comn++;
	return recursiveEKOK(n1,n2);
}

int main(){
	int sayi,sayi2;
	printf("Lutfen iki sayi giriniz:");
	scanf("%d%d",&sayi,&sayi2);
	printf("%d\n",recursiveEBOB(sayi,sayi2));
	printf("%d\n",recursiveEKOK(sayi,sayi2));
	return 0;
}*/

/*typedef struct{
	
	int pay,payda;
}kesirler;

void kesirToplam(kesirler *p3,kesirler *p4,kesirler *p5){
	p5->pay=p3->pay*p4->payda+p3->payda*p4->pay;
	p5->payda=p3->payda*p4->payda;
}	
void kesirSade(kesirler *p5){
	int i;
	for(i=2;i<=p5->pay;i++){
		while(p5->pay%i==0 && p5->payda%i==0){
			p5->pay/=i;
			p5->payda/=i;
		}
	}
}

int main(){
	
	int n1,d1,n2,d2;
	printf("Lutfen ilk kesri pay-payda olarak giriniz:");
	scanf("%d%d",&n1,&d1);
	printf("Lutfen ikinci kesri pay-payda olarak giriniz:");
	scanf("%d%d",&n2,&d2);
	kesirler k1={n1,d1};
	kesirler k2={n2,d2};
	kesirler *k3=&k1;
	kesirler *k4=&k2;
	kesirler *k5=&k1;
	kesirToplam(k3,k4,k5);
	kesirSade(k5);
	printf("%d/%d",k5->pay,k5->payda);
		
	return 0;
}*/

/*typedef struct{
	int saat;
	int dakika;
	float saniye;
}saatBilgileri;

saatBilgileri saatiBul(float kullaniciGirisi){
	saatBilgileri donusturulenSaat;
	int tamKisim=(int)kullaniciGirisi;
	int ondalikliKisim=kullaniciGirisi-tamKisim;
	donusturulenSaat.saat=tamKisim/3600;
	donusturulenSaat.dakika=(tamKisim%3600)/60;
	donusturulenSaat.saniye=(tamKisim%3600)%60+ondalikliKisim;
	return donusturulenSaat;
}

int main(){
	float sayi;
	printf("Lutfen saat bilgilerini saniye cinsinden giriniz:");
	scanf("%f",&sayi);
	saatBilgileri sonuc=saatiBul(sayi);
	printf("%d:%d:%.2f",sonuc.saat,sonuc.dakika,sonuc.saniye);
	return 0;
}*/

/*typedef struct{
	int saat;
	int dakika;
	float saniye;
}saatBilgileri;

saatBilgileri saatFarkiBul(saatBilgileri n1,saatBilgileri n2){
	double doubleSaat=n1.saat*3600+n1.dakika*60+n1.saniye;
	double doubleSaat2=n2.saat*3600+n2.dakika*60+n2.saniye;
	saatBilgileri sonuc;
	if(doubleSaat>=doubleSaat2){
		if(n1.dakika<n2.dakika){
			n1.saat-=1;
			n1.dakika+=60;
		}
		if(n1.saniye<n2.saniye){
			n1.dakika-=1;
			n1.saniye+=60;
		}
		sonuc.saat=n1.saat-n2.saat;
		sonuc.dakika=n1.dakika-n2.dakika;
		sonuc.saniye=n1.saniye-n2.saniye;
	}
	else{
		if(n2.dakika<n1.dakika){
			n2.saat-=1;
			n2.dakika+=60;
		}
		if(n2.saniye<n1.saniye){
			n2.dakika-=1;
			n2.saniye+=60;
		}
		sonuc.saat=n2.saat-n1.saat;
		sonuc.dakika=n2.dakika-n1.dakika;
		sonuc.saniye=n2.saniye-n1.saniye;
	}
	return sonuc;

}

int main(){
	saatBilgileri kullaniciGirisi1,kullaniciGirisi2;
	printf("Lutfen birinci saat bilgilerini saat-dakika-saniye biciminde giriniz:");
	scanf("%d:%d:%f",&kullaniciGirisi1.saat,&kullaniciGirisi1.dakika,&kullaniciGirisi1.saniye);
	printf("Lutfen ikinci saat bilgilerini saat-dakika-saniye biciminde giriniz:");
	scanf("%d:%d:%f",&kullaniciGirisi2.saat,&kullaniciGirisi2.dakika,&kullaniciGirisi2.saniye);
	saatBilgileri sonuc=saatFarkiBul(kullaniciGirisi1,kullaniciGirisi2);
	printf("%d:%d:%.2f",sonuc.saat,sonuc.dakika,sonuc.saniye);
	
	return 0;
}*/

/*typedef struct{
	float reel;
	float imaginal;
}karmasikSayi;

karmasikSayi karmasik(karmasikSayi n1,karmasikSayi n2){
	karmasikSayi sonuc;
	sonuc.reel=n1.reel+n2.reel;
	sonuc.imaginal=n1.imaginal+n2.imaginal;
	return sonuc;
	
}

int main(){
	karmasikSayi sayi1,sayi2,sonuc;
	printf("Lutfen birinci karmasik sayiyi sirasiyla reel-imaginal kisim biciminde giriniz");
	scanf("%f%f",&sayi1.reel,&sayi1.imaginal);
	printf("Lutfen ikinci karmasik sayiyi sirasiyla reel-imaginal kisim biciminde giriniz");
	scanf("%f%f",&sayi2.reel,&sayi2.imaginal);
	sonuc=karmasik(sayi1,sayi2);
	printf("%.1f+%.1fi",sonuc.reel,sonuc.imaginal);
	
	return 0;
}*/

/*typedef struct{
	int x;
	int y;
}Nokta;
typedef struct{
	Nokta koordinat[4];
}dikdortgen;

alanHesapla(dikdortgen alan){
	float x_kenar,y_kenar;
	x_kenar=alan.koordinat[1].x-alan.koordinat[0].x;
	y_kenar=alan.koordinat[3].y-alan.koordinat[0].y;
	return x_kenar*y_kenar;
}
int main(){
	dikdortgen hesaplanacakDortgen;
	int i;
	for(i=0;i<4;i++){
		printf("Lutfen sirasiyla N%d degerlerini giriniz:",i);
		scanf("%d%d",&hesaplanacakDortgen.koordinat[i].x,&hesaplanacakDortgen.koordinat[i].y);
	}
	float sonuc=alanHesapla(hesaplanacakDortgen);
	printf("Girdiginiz x-y degerine karsilik gelen alan:%.2f",sonuc);
	return 0;
}*/

/*typedef struct{
	float reel;
	float imaginal;
}karmasikSayi;

void karmasik(karmasikSayi n1,karmasikSayi n2,karmasikSayi *sonuc){
	sonuc->reel=n1.reel+n2.reel;
	sonuc->imaginal=n1.imaginal+n2.imaginal;
	
}

int main(){
	karmasikSayi sayi1,sayi2,sonuc;
	printf("Lutfen birinci karmasik sayiyi sirasiyla reel-imaginal kisim biciminde giriniz");
	scanf("%f%f",&sayi1.reel,&sayi1.imaginal);
	printf("Lutfen ikinci karmasik sayiyi sirasiyla reel-imaginal kisim biciminde giriniz");
	scanf("%f%f",&sayi2.reel,&sayi2.imaginal);
	karmasik(sayi1,sayi2,&sonuc);
	printf("%.1f+%.1fi",sonuc.reel,sonuc.imaginal);
	
	return 0;
}*/
/*typedef struct{
	int pay;
	int payda;
}kesirler;

kesirToplam(kesirler *p3,kesirler *p4,kesirler *p5){
	p5->pay=p3->pay*p4->payda+p3->payda*p4->pay;
	p5->payda=p3->payda*p4->payda;
}

kesirSade(kesirler *p3){
	int i;
	for(i=2;i<=p3->pay;i++){
		while(p3->pay%i==0 && p3->payda%i==0){
			p3->pay/=i;
			p3->payda/=i;
		}
	}
}
int main(){
	int n1,n2,d1,d2;
	printf("Lutfen birinci kesri pay-payda seklinde giriniz:");
	scanf("%d%d",&n1,&d1);
	printf("Lutfen ikinci kesri pay-payda seklinde giriniz:");
	scanf("%d%d",&n2,&d2);
	kesirler k1={n1,d1};
	kesirler k2={n2,d2};
	kesirler *k3=&k1;
	kesirler *k4=&k2;
	kesirler *k5=&k2;
	kesirToplam(k3,k4,k5);
	kesirSade(k5);
	printf("%d/%d",k5->pay,k5->payda);
	
	return 0;
}*/













