#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>

/*int main(int argc, char const *argv[])
{
	

	int dizi[10];
	int *ptr=&dizi[0];
	int *ptr2=dizi;
	int i;
	srand(time(NULL));
	printf("Dizinin baslangic adresi:%#X\n",ptr);
	printf("Dizinin baslangic adresi:%#X\n",ptr);
	
/*	for(i=0;i<10;i++)
	{
		printf("Dizinin %d. indeksinin adresi:%#X\n",i,ptr+i);
	}	
	for(i=0;i<10;i++)
	 {//PTR YERINDEN OYNAMADI
	 	printf("Dizinin %d. indeksinin adresi:%#X ",i,ptr+i);
	 	*(ptr+i)=rand()%100;
	 	printf("ve degeri:%d\n",*(ptr+i));
	 }
	 for(ptr=dizi;ptr!=dizi+10;ptr++)
	 {//PTR ADRES ARTTIRMASIYLA SUREKLI ILERI GITTI
	 	// 0 1 2 3 4 5 6 7 8 ptr->9
	 	printf("Adres:%#X ve Deger:%d\n",ptr,*(ptr));
	 }
	 int *p=dizi;
	 printf("%d\n",(*p)++);	//dizinin 1. elemanýný yazdýr,sonra o deðeri arttýr.(1.elemanýn deðeri arttýrýldý)
	
	 printf("%d\n",*(p++));//önce yazdýr,sonra pointer bir sonraki indekse geçsin
	 
	 printf("%d\n",*(++p));// önce adresi arttýr(yani pointer bir sonraki indekse geçsin),sonra yazdýr
	 
	 printf("%d\n",++(*p));//pointer nereyi gösteriyorsa, deðerini arttýr sonra da yazdýr*/
	 
	 
	 
	// ------------------------------------------------------------------------------------------------------------------------------
	 
	 /*char *kullaniciGirisi[]={"Mehmet Kocak","Feridun Acikbas","Sinan Kiliclar","Eda Deniz"};
	 //char kullaniciGirisi[]="Ogun Birinci";
	 char *ptr;<
	 ptr=kullaniciGirisi;
	 int i;
	 /*while(*kullaniciGirisi!='\0')
	 {
	 	printf("%#X adresinde tutulan deger:%c\n",kullaniciGirisi,*kullaniciGirisi);
	 	kullaniciGirisi++;
	 }
	 printf("%#X adresinde tutulan deger:%c\n",kullaniciGirisi,*kullaniciGirisi);
	 printf("Baslangic adres:%#X",ptr);
	 
	for(i=0;i<4;i++)
	{
		printf("%s\n",kullaniciGirisi[i]);	
	}
	
	return 0;
}*/






//-------------------------------------------------------------------------------------------------------------------------------------


/*void sayiDegistir(int fonkA,int fonkB);
void sayiDegistirPointer(int *fonkA,int *fonkB);
int main(){
	int a=5,b=12;
		printf("A sayisinin degeri:%d, B sayisinin degeri:%d\n",a,b);
		sayiDegistir(a,b);//isimleri yani degerleriyle gönderiyorum yani CALL BY VALUE.
		printf("A sayisinin degeri:%d, B sayisinin degeri:%d\n",a,b);
		sayiDegistirPointer(&a,&b);// adresleriyle yani CALL BY REFERENCE.
		printf("A sayisinin degeri:%d, B sayisinin degeri:%d\n",a,b);

	return 0;
}
void sayiDegistir(int fonkA,int fonkB)//fonkA=a degeri atanýyor
{
	int geciciSayi;
	geciciSayi=fonkB;//b degeri kaybolmasýn
	fonkB=fonkA;
	fonkA=geciciSayi;
	printf("Fonksiyon icinde A'nin degeri:%d Fonksiyon icinde B'nin degeri:%d\n",fonkA,fonkB);
}
//sayiDegistir fonksiyonu bittigi an fonkA ve fonkB kayboluyor.
void sayiDegistirPointer(int *fonkA,int *fonkB) //fonkA=&b fonkB=&a
{
	int geciciSayi;
	geciciSayi=*fonkB;
	*fonkB=*fonkA;
	*fonkA=geciciSayi;
	
}	*/


//-------------------------------------------------------------------------------------------------------------------------------------
/*void sonucHesapla(int a,int b){
	printf("Sonuc:%d\n",a*2+b*3);
	//2*2+8*3=28
}
void sonucHesapla2(int a,int b){
	printf("Sonuc:%d\n",(a+2)*(b-5));
	//4*7=28
}
void sonucHesapla3(int a,int b){
	printf("Sonuc:%d\n",a*3+b*2);
	//3*3+5*2=19
}
void hesapla(void(*ptr)(int,int),int a,int b){
	ptr(a,b);
}
int main(){ 0

	void(*fonkPtr[3])(int,int);
	fonkPtr[0]=sonucHesapla3;
	fonkPtr[1]=sonucHesapla2;
	fonkPtr[2]=sonucHesapla;
	(*fonkPtr[0])(3,5);
	(*fonkPtr[1])(2,12);
	(*fonkPtr[2])(2,8);
	hesapla(sonucHesapla,3,5);
}*/

/*void diziyiDoldur(int *dizi,int elemanSayisi)
{
	srand(time(NULL));
	int *ptr;
	for(ptr=dizi;ptr<dizi+elemanSayisi;ptr++)
	{
		*ptr=rand()%100;
	}
}
void diziyiYazdir(int *dizi,int elemanSayisi)
{
	int *ptr;

	for(ptr=dizi;ptr<dizi+elemanSayisi;ptr++)
	{
		printf("%d ",*ptr);
	}
	printf("\n");
}
void maxMinBul(int *dizi,int elemanSayisi,int *max,int *min)
{
	int *ptr=dizi;
	*max=*ptr;
	*min=*ptr;
	ptr++;
	for(;ptr<dizi+elemanSayisi;ptr++)
	{
		if(*ptr>*max)
		{
			*max=*ptr;
		}
		else if(*ptr<*min)
		{
			*min=*ptr;
		}
	}

}
void ortHesapla(int *dizi,int elemanSayisi,int *ortalama,int *toplam)
{
	int *ptr;
	for (ptr=dizi;ptr<dizi+10;ptr++)
	{
		*toplam+=*ptr;
	}
	*ortalama=*toplam/elemanSayisi;
}

int main(int argc, char const *argv[])
{
	int dizi[10];
	int max,min,toplam=0;
	int ortalama;
	diziyiDoldur(dizi,10);
	diziyiYazdir(dizi,10);
	maxMinBul(dizi,10,&max,&min);
	printf("dizinin en buyuk elemani:%d dizinin en kucuk elemani:%d\n",max,min);
	ortHesapla(dizi,10,&ortalama,&toplam);
	printf("ortalama:%d",ortalama);
	return 0;
}*/

/*void MerhabaDunya(){
	printf("Merhaba Dunya.\n");
}
void HalloWelt(){
	printf("Hallo Welt.\n");
}
void HelloWorld(){
	printf("Hello World.\n");
}
void belirlemeFonk(void(*fonkPtr[3])(),int sayi)
{
	switch(sayi){
		case 1:
			(*fonkPtr[0])();
			break;
		case 2:
			(*fonkPtr[1])();
			break;
		case 3:
			(*fonkPtr[2])();
			break;
		default:
			printf("Girdiginiz degere ait fonksiyon bulunmamaktadir.");
	}
}
int main(int argc, char const *argv[])
{
	void(*fonkPtr[3])(void);
	fonkPtr[0]=MerhabaDunya;
	fonkPtr[1]=HalloWelt;
	fonkPtr[2]=HelloWorld;

	
	for (int i = 1; i <=3; ++i)
	{
		belirlemeFonk(fonkPtr,i);
	}
	
	
	return 0;
}*/

/*void boslukKarakterSay(char *str,int *boslukSayisi)
{
	char *ptr=str;
	while(*ptr!='\0')
	{
		if(*ptr==' '){
			*boslukSayisi+=1;
		}
		ptr++;

	}
}

void tersiniYazdir(char *str)
{
	int karakterSayisi=0;
	MyStrlen(str,&karakterSayisi);
	printf("String %d adet karakter icermektedir.\n",karakterSayisi);
	char *ptr=str+karakterSayisi-1;
	while(ptr>=str)
		{
			printf("%c",*ptr);
			ptr--;
		}
}

void MyStrlen(char *str,int *karakterSayisi)
{
	char *ptr=str;
	while(*ptr!='\0'){
		*karakterSayisi+=1;
		ptr++;
	}
}
int MyStrCmp(char *str,char *str2)
{	
	char *p1=str;
	char *p2=str2;
	while(*p1!='\0' && *p2!='\0')
	{
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
	}

}
int main(int argc, char const *argv[])
{
	char *kullaniciGirisi="abeyy";
	char *kullaniciGirisi2="abeyy";
	int boslukSayisi=0;
	boslukKarakterSay(kullaniciGirisi,&boslukSayisi);
	printf("Girdiginiz stringte %d adet bosluk vardir.\n",boslukSayisi);
	//tersiniYazdir(kullaniciGirisi);

	int sonuc=MyStrCmp(kullaniciGirisi,kullaniciGirisi2);
	if(sonuc==0){
		printf("Girilen string birbirinin aynisidir.\n");
	}
	else if(sonuc==1){
		printf("girilen string ikinciden sonra gelmektedir.\n");
	}
	else{
		printf("girilen string ikinciden once gelmektedir.\n");
	}
	
	return 0;
}*/






