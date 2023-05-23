#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h> 


/*void selamla(char isim[15]){
	printf("Merhaba %s!\n",isim);
}

int toplama(int sayi1, int sayi2){
	return sayi1+sayi2;
}
char myupper(char ch){
	return ch-32;
}			*/
///int sayiYazdir(int);

/*int faktoriyelYazdir(int);

int main(int argc, char const *argv[])
{
 //selamla("Mehmet");
 //printf("%c\n",myupper('a'));
//int sonuc=toplama(5,3);
//printf("%d\n",sonuc);
//printf("%d",toplama);

	///sayiYazdir(10);


	printf("%d",faktoriyelYazdir(6));
	return 0;
}
	/*int sayiYazdir(int sayi){
		if (sayi==0){
			return 0 ;
		}
		printf("%d ",sayi);
		sayiYazdir(sayi-1);
	}		

int faktoriyelYazdir(int sayi){
	if (sayi==0 || sayi==1){
		return 1;
	}
	int sonuc=sayi*faktoriyelYazdir(sayi-1);
	return sonuc;
}  */

/*void diziyiYazdir(int[],int);
void diziyiSirala(int[],int);
void diziyiDoldur(int[],int);


int main(int argc, char const *argv[]){
	int elemanSayisi=10,dizi[10];
	diziyiDoldur(dizi,elemanSayisi);
	printf("Sirasiz dizi:");
	diziyiYazdir(dizi,elemanSayisi);
	printf("\n");
	diziyiSirala(dizi,elemanSayisi);
	printf("Sirali dizi:");
	diziyiYazdir(dizi,elemanSayisi);

	return 0;
}

void diziyiYazdir(int dizi[],int elemanSayisi ){
	int i;
	for (i = 0; i <elemanSayisi; ++i){
		printf("%d ",dizi[i]);
	}
}
void diziyiSirala(int dizi[],int elemanSayisi ){
	int i,j,indexKucukSayi,enKucukSayi;
	
	for ( i = 0; i <elemanSayisi-1 ; ++i){
		enKucukSayi=dizi[elemanSayisi-1];
		indexKucukSayi=elemanSayisi-1;
		for(j=i;j<elemanSayisi-1;j++){
			if(dizi[j]<enKucukSayi){
				enKucukSayi=dizi[j];
				indexKucukSayi=j;
			}

		}
		printf("%d ile %d yer degistirdi.\n",enKucukSayi,dizi[i]);
		dizi[indexKucukSayi]=dizi[i];
		dizi[i]=enKucukSayi;
	}
}


void diziyiDoldur(int dizi[],int elemanSayisi ){
	srand(time(NULL));
	for (int i = 0; i <elemanSayisi; ++i){
		dizi[i]=rand()%100;
	}
}*/


/*void stringSiralama(char[],int);
void anagramKontrol(char[],char[]);

int main(int argc, char const *argv[]){

	char kullaniciGirisi[20],kullaniciGirisi2[20];
	int karakterSayisi,karakterSayisi2;
	puts("Lutfen ilk stringi giriniz:");
	gets(kullaniciGirisi);
	puts("Lutfen ikinci stringi giriniz:");
	gets(kullaniciGirisi2);
	anagramKontrol(kullaniciGirisi,kullaniciGirisi2);


	return 0;
}

	void stringSiralama(char kullaniciGirisi[],int karakterSayisi){
		int eleman,i,j;
		for (i = 1; i <karakterSayisi; ++i){
			eleman=kullaniciGirisi[i];
			for(j=i-1;j>=0 && eleman<=kullaniciGirisi[j];j--){
				kullaniciGirisi[j+1]=kullaniciGirisi[j];
			}
		kullaniciGirisi[j+1]=eleman;
		}

	}
		
		
	void anagramKontrol(char kullaniciGirisi[],char kullaniciGirisi2 []){
	int karakterSayisi,karakterSayisi2,sorgu=1,eleman;
	
	karakterSayisi=strlen(kullaniciGirisi);
	karakterSayisi2=strlen(kullaniciGirisi2);

	if(karakterSayisi!=karakterSayisi2){
		puts("Anagram degil!");
	}
	else{
		stringSiralama(kullaniciGirisi,karakterSayisi);
		stringSiralama(kullaniciGirisi2,karakterSayisi2);
		for (int i = 0; i < karakterSayisi; ++i){
			if(kullaniciGirisi[i]!=kullaniciGirisi2[i]){
				sorgu=0;
				break;
			}
		}
			if(sorgu){
				puts("Anagram.");
			}
			else{
				puts("Anagram degil");
			}
		
 	}
}				*/

/*int main(int argc, char const *argv[]){
	int elemanSayisi=15,kullaniciGirisi;
	int dizi [elemanSayisi];
	int buyukN,kucukN;
	diziyiDoldur(dizi,elemanSayisi);
	diziyiYazdir(dizi,elemanSayisi);
	puts("Lutfen en buyuk ve en kucuk kacinci sayiyi istedinizi giriniz:");
	scanf("%d",&kullaniciGirisi);
	buyukN=enBuyukNDeger(dizi,elemanSayisi,kullaniciGirisi);
	kucukN=enkucukNDeger(dizi,elemanSayisi,kullaniciGirisi);
	printf("\ndizinin en buyuk %d. degeri:%d",kullaniciGirisi,buyukN);
	printf("\ndizinin en kucuk %d. degeri:%d",kullaniciGirisi,kucukN);


	return 0;
}
void diziyiSirala(int dizi[],int elemanSayisi){
	int i,j,enKucukSayi,indexKucukSayi;
	for (i = 0; i < elemanSayisi-1; ++i){
		enKucukSayi=dizi[elemanSayisi-1];
		indexKucukSayi=elemanSayisi-1;
		for (j = i; j <elemanSayisi-1; ++j){
			if(dizi[j]<enKucukSayi){
				enKucukSayi=dizi[j];
				indexKucukSayi=j;
			}
		}
		dizi[indexKucukSayi]=dizi[i];
		dizi[i]=enKucukSayi;
	
	}
}
	
void diziyiDoldur (int dizi[],int elemanSayisi){
	int i;
	srand(time(NULL));
	for ( i = 0; i < elemanSayisi; ++i){
		dizi[i]=rand()%100;
	}
}
void diziyiYazdir (int dizi[],int elemanSayisi){
	int i;

	for (i=0;i<elemanSayisi;++i){
		printf("%d ",dizi[i]);
	}
}
int enBuyukNDeger(int dizi[],int elemanSayisi,int NDeger){
	diziyiSirala(dizi,elemanSayisi);
	diziyiYazdir(dizi,elemanSayisi);
	return dizi[elemanSayisi-NDeger];

}
int enkucukNDeger(int dizi[],int elemanSayisi,int NDeger){
	diziyiSirala(dizi,elemanSayisi);
	return dizi[NDeger-1];
}			*/


/*void unluSayiBelirleme(char []);

int main(int argc, char const *argv[]){


	char kullaniciGirisi [20];
	puts("Lutfen unlu sayisi giriniz:");
	gets(kullaniciGirisi);
	unluSayiBelirleme(kullaniciGirisi);

	return 0;
}
void unluSayiBelirleme(char kullaniciGirisi[]){
	int i=0,j;
	char unluHarfler[]={'a','e','i','o','u','\0'};
	int unluHarfSayilari[] ={0,0,0,0,0};
	while(kullaniciGirisi[i]!='\0'){
		for (j = 0; j <5; ++j){
			if (kullaniciGirisi[i]==unluHarfler[j]){
				break;
			}
		}
		unluHarfSayilari[j]+=1;
		i++;
	}
	for(i=0;i<5;i++){
		printf("%c karakteri %d adet gecmektedir\n",unluHarfler[i],unluHarfSayilari[i] );
	}

}		*/
/*int fibonacciRecursive(int);
int main(int argc, char const *argv[]){
	int i,ustLimit;
	puts("Lutfen bir ust limit giriniz:");
	scanf("%d",&ustLimit);
	for (i = 0; i < ustLimit; ++i){
		printf("%d ",fibonacciRecursive(i));
	}	

	return 0;
}
int fibonacciRecursive(int sayi){
	if(sayi==0 || sayi==1){
		return sayi;
	}
	else{
		return fibonacciRecursive(sayi-1)+fibonacciRecursive(sayi-2);
	}
}		*/

/*int ikiliArama(int[],int,int,int);

int main(int argc, char const *argv[]){
	int dizi[]={1,5,12,18,23,43,52,82,102,121};
	int sonuc=ikiliArama(dizi,0,9,43);

	if (sonuc!=-1){
		printf("Aranan deger bulundu.");
	}
	else{
		printf("Aranan deger bulunamadi.");
		
	}

	return 0;
}
int ikiliArama(int dizi[],int sol_index, int sag_index,int arananDeger){

	if(sag_index>=sol_index){
		int ortanca_index=(sag_index+sol_index)/2;
		if (dizi[ortanca_index]==arananDeger){
			return 1;

		}
	
		if (dizi[ortanca_index]>arananDeger){
		return ikiliArama(dizi,sol_index,ortanca_index-1,arananDeger);
		}
	return ikiliArama(dizi,ortanca_index+1,sag_index,arananDeger);

	}
	return -1;
}		*/

/*int diziKarakterSay(char kullaniciGirisi[]){
	char karakterler[26];
	int i,j;
	for (i = 0; i <26; ++i){
		karakterler[i]='$';
	}
	i=0;
	while(kullaniciGirisi[i]!='\0'){
		j=0;
		while(1){
			if(karakterler[j]=='$'){
				karakterler[j]=kullaniciGirisi[i];
				break;
			}
			else if(karakterler[j]==kullaniciGirisi[i]){
				break;
			}
			j++;
		}
		i++;
	}
	for ( i = 0; i <26; ++i){
		if (karakterler[i]=='$'){
			break;
		}
	}
	return i;
}
int main(int argc, char const *argv[]){
	int ozelKarakterler=diziKarakterSay("hepinizin taa aminaaaa"); 
	printf("Gonderdiginiz dizi %d adet karakter icermektedir",ozelKarakterler );
	
	return 0;
}			*/

/*int recursiveOBEB(int x,int y){
	if(y==0){
		return x;
	}
	return recursiveOBEB(y,x%y);
}
int recursiveOKEK(int x, int y){
	return x*y/recursiveOBEB(x,y);
}
int main(int argc, char const *argv[])
{
	printf("OBEB:%d\n",recursiveOBEB(12,3));
	printf("OKEK:%d\n",recursiveOKEK(12,3));
	return 0;
}			*/

/*void diziyiDoldur(int fonk[][5],int satirSayisi,int sutunSayisi){
	int i,j;
	srand(time(NULL));
	for (i = 0; i <satirSayisi; ++i){
		for (j = 0; j < sutunSayisi; ++j){
			fonk[i][j]=rand()%5+1;
		}
		
	}
}
void diziyiYazdir(int fonk[][5],int satirSayisi,int sutunSayisi){
	int i,j;
	for(i=0;i<satirSayisi;i++){
		for (j = 0; j < sutunSayisi; ++j){
			printf("%d ",fonk[i][j]);
		}
		printf("\n");
	}

}
int diagonalCarpim(int fonk[][5],int satirSayisi,int sutunSayisi){
	int i,j;
	int carpimSonucu=1;
	for ( i = 0; i <satirSayisi; ++i){
		for(j=0;j<sutunSayisi;j++){
			if(j==i){
				carpimSonucu*=fonk[i][j];
			}
		}
	}
	return carpimSonucu;
}

int SagdiagonalCarpim(int fonkDizi[][5],int satirSayisi,int sutunSayisi){
	int i,j;
	int carpimSonucu=1;
	for ( i = 0; i <satirSayisi; ++i){
		for(j=0;j<sutunSayisi;j++){
			if(j+i==satirSayisi-1){
				carpimSonucu*=fonkDizi[i][j];
			}
		}
	}
	printf("Sagdan diagonal carpim :%d",carpimSonucu);
	if(carpimSonucu==diagonalCarpim(fonkDizi,satirSayisi,sutunSayisi)){
		return 1;
	}
	else{
		return 0 ;
	}
}

int main(int argc, char const *argv[]){
	int satirSayisi=5,sutunSayisi=5;
	int dizi[satirSayisi][sutunSayisi];
	diziyiDoldur(dizi,satirSayisi,sutunSayisi);	
	diziyiYazdir(dizi,satirSayisi,sutunSayisi);
	printf("diagonal carpimlari:%d\n",diagonalCarpim(dizi,satirSayisi,sutunSayisi));
	int sonuc=SagdiagonalCarpim(dizi,satirSayisi,sutunSayisi);
	if(sonuc){
		printf("sagdan ve soldan diagonal carpimlari esittir.");
	}
	else{
		printf("esit degildir.");
	}

	return 0;
}	*/



void diziOlustur(int dizi[][5],int satirSayisi,int sutunSayisi){
	int i,j;
	srand(time(NULL));
	for (i = 0; i <satirSayisi; ++i){
		for(j=0;j<sutunSayisi;j++){
			dizi[i][j]=rand()%5+1;

		}
	}
}
void diziyiYazdir(int dizi[][5],int satirSayisi,int sutunSayisi){
	int i,j;
	for(i=0;i<satirSayisi;i++){
		for(j=0;j<sutunSayisi;j++){
			printf("%d ",dizi[i][j]);
		}
		printf("\n");
	}
}
void diziToplam(int dizi[][5],int satirSayisi, int sutunSayisi){
	int i,j,satirToplam=0,sutunToplam=0;
	for(i=0;i<satirSayisi;i++){
		 satirToplam=0;
		 sutunToplam=0;
		for(j=0;j<sutunSayisi;j++){
			satirToplam+=dizi[i][j];
			sutunToplam+=dizi[j][i];
		}
		printf("%d. satirin toplami:%d\n",i+1,satirToplam);
		printf("%d. sutunun toplami:%d\n",i+1,sutunToplam);

	}
}

int main(int argc, char const *argv[]){
	int satirSayisi=5,sutunSayisi=5;
	int dizi[satirSayisi][sutunSayisi];
	diziOlustur(dizi,satirSayisi,sutunSayisi);
	diziyiYazdir(dizi,satirSayisi,sutunSayisi);
	diziToplam(dizi,satirSayisi,sutunSayisi);
	return 0;
}




	

	
	


	
