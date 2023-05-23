#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include<string.h>

/*void diziOlustur(int *dizi,int elemanSayisi)
{
	int *ptr;
	srand(time(NULL));

	for(ptr=dizi;ptr<=dizi+elemanSayisi;ptr++)
	{
		*ptr=rand()%100;
		printf("%d ",*ptr);
	}
	printf("\n");

}
void tersineSirala(int *dizi,int elemanSayisi){
	int *ptr=dizi+elemanSayisi;
	for(;ptr>=dizi;ptr--)
	{	
		printf("%d ",*ptr);
	}
	printf("\n");
}
int main(int argc, char const *argv[])
{
	int elemanSayisi=10;
	int dizi[elemanSayisi];
	diziOlustur(dizi,elemanSayisi);
	tersineSirala(dizi,elemanSayisi);
	return 0;
}*/
/*void MystrCat(char *str,char *str2)
{
	char *p1=str;
	while(*p1){  //*p1!='\0'
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
void myStrCpy(char *str,char *str2)
{
	char *p1=str;
	char *p2=str2;
	while(*p2)
	{
		*p1=*p2;
		p1++;
		p2++;

	}
	//*p1='\0';
}
int main(int argc, char const *argv[])
{
	char kullaniciGiris[]="Mehmet";
	char kullaniciGiris2[]="Kocak";
	MystrCat(kullaniciGiris,kullaniciGiris2);
	puts(kullaniciGiris);
	myStrCpy(kullaniciGiris,kullaniciGiris2);
	puts(kullaniciGiris);

	return 0;
}*/

/*int kacKereGeciyor(char *str,char arananDeger,char degistirilecekDeger){
	int sayac=0;
	char *ptr=str;
	while(*ptr!='\0'){
		if(*ptr==arananDeger){
			*ptr=degistirilecekDeger;
			sayac+=1;
		}
		ptr++;
	}
	return sayac;
}
int main(int argc, char const *argv[])
{
	char karakterDizisi[]="how I met your mother";
	int sonuc=kacKereGeciyor(karakterDizisi,'h','*');
	printf("Aradiginiz karakter dizide %d adet gecmektedir.\n",sonuc);
	puts(karakterDizisi);
	
	return 0;
}*/


/*int toplama(int sayi1,int sayi2){
	return sayi1+sayi2;
}
int carpma(int sayi1,int sayi2){
	return sayi1*sayi2;
}
int bolme(int sayi1,int sayi2){
	return sayi1/sayi2;
}
int cikarma(int sayi1,int sayi2){
	return sayi1-sayi2;
}
int hesapla(int (*ptr[4])(int,int),int sayi1,int sayi2,int islem){
	if(islem==1){
		(*ptr[0])(sayi1,sayi2);
	}
	else if(islem==2){
		(*ptr[1])(sayi1,sayi2);
	}
	else if(islem==3){
		(*ptr[2])(sayi1,sayi2);
	}
	else if(islem==4){
		(*ptr[3])(sayi1,sayi2);
	}

}
int main(int argc, char const *argv[])
{
	int sayi1,sayi2,islem;
	int (*ptr[4])(int ,int);
	ptr[0]=toplama;
	ptr[1]=cikarma;
	ptr[2]=carpma;
	ptr[3]=bolme;
	printf("Lutfen iki adet sayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);
	printf("Lutfen yapmak istediginiz islemi seciniz(Toplama icin 1, Cıkarma icin 2, Carpma icin 3, Bolme icin 4):");
	scanf("%d",&islem);
	int sonuc=hesapla(ptr,sayi1,sayi2,islem);
	printf("Sonuc:%d",sonuc);
	
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	 

	char dizi[]="C pointers";
	char yeniDizi[20];
	char *ptr;
	char *yeniPtr;

	ptr=dizi;
	yeniPtr=yeniDizi;
	printf("String dizinin kendisi:");
	while(*ptr!=0){
		printf("%c",*ptr);
		*yeniPtr++ =*ptr++;
	}
	*yeniPtr='\0';
	printf("Kopya dizi:");
	puts(yeniDizi);
	return 0;
}*/

void Mystrlen(char *str,int *karakterSayisi){
	char *ptr=str;
	while(*ptr!='\0'){
		*karakterSayisi+=1;
		ptr++;
	}
}
void MystrCmp(char *str,char *str2){
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
		return 1;
	}
	else if(strlen(p1)>strlen(p2)){
		return 1;
	}
	else{
		return 0;
	}
}
void mystrCat(char *str, char *str2){
	char *p1=str;
	char *p2=str2;
	while(*p1!='\0'){
		p1++;
	}
	while(*p2!='\0'){
		*p1=*p2;
		p1++;
		p2++;
	}
	*p1='\0';
}
void myStrCpy(char *str,char *str2){
	char *p1=str;
	char *p2=str2;
	while(*p2){
		*p1=*p2;
		p1++;
		p2++;
	}
	*p1='\0';
}
