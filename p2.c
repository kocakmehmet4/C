#include <stdio.h>

/*void sayitopla(int *p1,int *p2){
	int toplam=0;
	toplam+=*p1+*p2;
	printf("%d",toplam);
}
int  main(int argc, char const *argv[])
{
	int sayi1,sayi2;
	printf("Lutfen birinci sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("Lutfen ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	sayitopla(&sayi1,&sayi2);
	return 0;
}*/

/*int main(int argc, char const *argv[])
{
	int sayi1,sayi2,*p1,*p2;
	printf("Lutfen birinci sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("Lutfen ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	p1=&sayi1;
	p2=&sayi2;
	if(*p1>*p2){
		printf("%d sayisi %d sayisindan buyuktur",*p1,*p2);
	}
	else if(*p1<*p2){
		printf("%d sayisi %d sayisindan buyuktur",*p2,*p1);
	}

	return 0;
}*/

/*void yerDegistir(char *ch1,char *ch2);
void charPermu(char *cht,int sayi,int sayi2);
int main(int argc, char const *argv[])
{
	char str[]="abcd";
	int n=strlen(str);
	charPermu(str,0,n-1);
	return 0;
}
void yerDegistir(char *ch1,char *ch2){
	char temp;
	temp=*ch1;
	*ch1=*ch2;
	*ch2=temp;
}
void charPermu(char *cht,int sayi,int sayi2){
	int i;
	if(sayi==sayi2){
		printf("%s ",cht);
	}
	else{
		for (i=sayi; i<=sayi2; ++i)
		{
			yerDegistir((cht+sayi),(cht+i));
			charPermu(cht,sayi+1,sayi2);
			yerDegistir((cht+sayi),(cht+i));
		}
	}
}*/
/*void myStrLen(char *p1){
	int karakterSayisi=0;
	while(*p1!='\0'){
		karakterSayisi++;
		p1++;
	}
	printf("dizi %d karakter icermektedir.\n",karakterSayisi);
}
int main(int argc, char const *argv[])
{
	char dizi[50];
	puts("Lutfen bir string giriniz:");
	gets(dizi);
	myStrLen(dizi);
	
	return 0;
}*/
/*void degerdegis(int *p1,int *p2,int *p3){
	int temp,temp2;
	temp=*p1;
	*p1=*p3;
	temp2=*p2;
	*p2=temp;
	*p3=temp2;
}
int  main(int argc, char const *argv[])
{
	int sayi1,sayi2,sayi3;
	printf("Lutfen birinci sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("Lutfen ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	printf("Lutfen ucuncu sayiyi giriniz:");
	scanf("%d",&sayi3);
	fflush(stdin);
	degerdegis(&sayi1,&sayi2,&sayi3);
	printf("birinci sayi:%d\nikinci sayi:%d\nucuncu sayi:%d",sayi1,sayi2,sayi3);
	return 0;
}*/


