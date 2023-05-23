#include<stdio.h>

/*typedef struct
{
	char kitapYazari[20];
	char kitapAdi[20];
	char yayinEvi[20];
	int sayfaSayisi;
}kitapBilgileri;

void kitapEkle(kitapBilgileri *kitapDizisi,int kitapSayisi){
	int i=0;
	while(1){
		if(i>kitapSayisi){
			puts("Uzgunum daha fazla kitap eklenemez kitaplik tamamen dolu!\n");
			return;
		}
		if(kitapDizisi[i].sayfaSayisi==0){
			printf("Kitap ismini giriniz:");
			scanf("%s",&kitapDizisi[i].kitapAdi);
			printf("Kitap yazarini giriniz:");
			scanf("%s",&kitapDizisi[i].kitapYazari);
			printf("Kitap YayinEvi bilgisini giriniz:");
			scanf("%s",&kitapDizisi[i].yayinEvi);
			printf("Kitabin sayfa sayisini giriniz:");
			scanf("%d",&kitapDizisi[i].sayfaSayisi);
			return;

		}
		i++;
	}
}

void kitapGoruntule(kitapBilgileri *kitapDizisi,int kitapSayisi){
	int i;
	for (i = 0; i < kitapSayisi; ++i)
	{
		printf("Kitap Adi:%s\nKitap Yazari:%s\nKitap YayinEvi:%s\nKitap sayfa sayisi:%d\n",kitapDizisi[i].kitapAdi,kitapDizisi[i].kitapYazari,kitapDizisi[i].yayinEvi,kitapDizisi[i].sayfaSayisi);
		printf("------------------------------------------------------------\n");
	}
}
int kitapAra(kitapBilgileri *kitapDizisi, char *kitapAdi,int kitapSayisi){
	int i;
	for (i = 0; i<kitapSayisi; ++i)
	{
		if(strcmp(kitapDizisi[i].kitapAdi,kitapAdi)==0){
			return i;
		}
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	int kitapSayisi;
	kitapBilgileri *kitaplik;
	char kullaniciIstegi,kitapAdi[20];

	puts("Lutfen eklemek istediginiz kitap sayisini giriniz:");
	scanf("%d",&kitapSayisi);

	kitaplik=(kitapBilgileri*)calloc(kitapSayisi,sizeof(kitapBilgileri));

	do
	{
		fflush(stdin);
		puts("Kitap eklemek istiyorsaniz 'E',tum kitaplari goruntulemek istiyorsaniz 'G',arama yapmak istiyorsaniz 'A',cikis yapmak istiyorsaniz 'Q' tuslayiniz.");
		kullaniciIstegi=getchar();
		switch(kullaniciIstegi)
		{
			case 'E':
			kitapEkle(kitaplik,kitapSayisi);
			break;
			case 'A':
			puts("Lutfen aramak istediginiz kitabin adini giriniz:");
			scanf("%s",&kitapAdi);
			int kitap_index=kitapAra(kitaplik,kitapAdi,kitapSayisi);
			if(kitap_index==-1){
				printf("aradiginiz kitap kutuphanede bulunamadi");
			}
			else{
				printf("aradiginiz kitap kitapliginizin %c-%d kisminda bulundu.\n",kitapAdi[0],kitap_index+1);
			}
			break;
			case 'G':
			kitapGoruntule(kitaplik,kitapSayisi);
			break;
			case 'Q':
			puts("Cikis yapiliyor... Tesekkur ederiz\n");
			break;
			default:
			puts("Yanlis bir tuslama yaptiniz!");
			break;
		}

	}while(kullaniciIstegi!='Q');
	
	return 0;
}*/
/*
typedef struct
{
	char kitapYazari[20];
	char kitapAdi[20];
	char yayinEvi[20];
	int sayfaSayisi;
}kitapBilgileri;

typedef enum{
	ogrenci=1,calisan=2
}YetkiSeviyeleri;

void kitapEkle(kitapBilgileri *kitapDizisi,int kitapSayisi,YetkiSeviyeleri yetki){
	int i=0;
	if(yetki!=calisan){
		puts("Uzgunum. Kitap ekleme yetkisine sahip degilsiniz. Kitap ekleyemezsiniz");
		return;
	}
	while(1){
		if(i>kitapSayisi){
			puts("Uzgunum daha fazla kitap eklenemez kitaplik tamamen dolu!\n");
			return;
		}
		if(kitapDizisi[i].sayfaSayisi==0){
			printf("Kitap ismini giriniz:");
			scanf("%s",&kitapDizisi[i].kitapAdi);
			printf("Kitap yazarini giriniz:");
			scanf("%s",&kitapDizisi[i].kitapYazari);
			printf("Kitap YayinEvi bilgisini giriniz:");
			scanf("%s",&kitapDizisi[i].yayinEvi);
			printf("Kitabin sayfa sayisini giriniz:");
			scanf("%d",&kitapDizisi[i].sayfaSayisi);
			return;

		}
		i++;
	}
}

void kitapGoruntule(kitapBilgileri *kitapDizisi,int kitapSayisi){
	int i;
	for (i = 0; i < kitapSayisi; ++i)
	{
		printf("Kitap Adi:%s\nKitap Yazari:%s\nKitap YayinEvi:%s\nKitap sayfa sayisi:%d\n",kitapDizisi[i].kitapAdi,kitapDizisi[i].kitapYazari,kitapDizisi[i].yayinEvi,kitapDizisi[i].sayfaSayisi);
		printf("------------------------------------------------------------\n");
	}
}
int kitapAra(kitapBilgileri *kitapDizisi, char *kitapAdi,int kitapSayisi){
	int i;
	for (i = 0; i<kitapSayisi; ++i)
	{
		if(strcmp(kitapDizisi[i].kitapAdi,kitapAdi)==0){
			return i;
		}
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	int kitapSayisi;
	kitapBilgileri *kitaplik;
	char kullaniciIstegi,kitapAdi[20];
	YetkiSeviyeleri kullaniciYetki;

	puts("Lutfen eklemek istediginiz kitap sayisini giriniz:");
	scanf("%d",&kitapSayisi);

	kitaplik=(kitapBilgileri*)calloc(kitapSayisi,sizeof(kitapBilgileri));

	do
	{
		fflush(stdin);
		puts("Kitap eklemek istiyorsaniz 'E',tum kitaplari goruntulemek istiyorsaniz 'G',arama yapmak istiyorsaniz 'A',cikis yapmak istiyorsaniz 'Q' tuslayiniz.");
		kullaniciIstegi=getchar();
		switch(kullaniciIstegi)
		{
			case 'E':
			puts("Lutfen ogrenciyseniz 1, calisansaniz 2'yi tuslayiniz.");
			scanf("%d",&kullaniciYetki);
			kitapEkle(kitaplik,kitapSayisi,kullaniciYetki);
			break;
			case 'A':
			puts("Lutfen aramak istediginiz kitabin adini giriniz:");
			scanf("%s",&kitapAdi);
			int kitap_index=kitapAra(kitaplik,kitapAdi,kitapSayisi);
			if(kitap_index==-1){
				printf("aradiginiz kitap kutuphanede bulunamadi");
			}
			else{
				printf("aradiginiz kitap kitapliginizin %c-%d kisminda bulundu.\n",kitapAdi[0],kitap_index+1);
			}
			break;
			case 'G':
			kitapGoruntule(kitaplik,kitapSayisi);
			break;
			case 'Q':
			puts("Cikis yapiliyor... Tesekkur ederiz\n");
			break;
			default:
			puts("Yanlis bir tuslama yaptiniz!");
			break;
		}

	}while(kullaniciIstegi!='Q');
	
	return 0;
}
*/

/*void maxMinBul(int dizi[],int index,int boyut,int enKucuk,enBuyuk){
	
	
}


int main(int argc, char const *argv[])
{
	int max,min,sonuc;
	int elemanSayisi,i;
	printf("Lutfen dizinin kac elemanli olmasini istediginizi giriniz:");
	scanf("%d",&elemanSayisi);
	int dizi[elemanSayisi];
	printf("%d elemanli dizi:\n",elemanSayisi);

	for (i = 0; i <elemanSayisi; i++)
	{
		scanf("%d",&dizi[i]);
	}
	
	printf("%d",sonuc);
	return 0;
}*/


/*typedef struct 
{
	char kitapAdi[20];
	char yazarAdi[20];
	char yayinEvi[20];
	int sayfaSayisi;
}kitapBilgileri;

void kitapEkle(kitapBilgileri *kitapDizisi,int kitapSayisi){
	int i=0;

	while(1){
		if(i>kitapSayisi){
			printf("Uzgunum daha fazla kitap eklenemez kitaplik tamamen dolu.");
			return;
		}
		if(kitapDizisi[i].sayfaSayisi==0){
			printf("Kitabin ismini giriniz:");
			scanf("%s",&kitapDizisi[i].kitapAdi);
			printf("Kitabin yazar Adini giriniz:");
			scanf("%s",&kitapDizisi[i].yazarAdi);
			printf("Kitabin yayin evini giriniz:");
			scanf("%s",&kitapDizisi[i].yayinEvi);
			printf("Lutfen kitabin sayfa sayisini giriniz:");
			scanf("%d",&kitapDizisi[i].sayfaSayisi);
			return;

		}
		i++;
	}
	printf("\n");
}
void kitapLariGoster(kitapBilgileri *kitapDizisi,int kitapSayisi){
	int i;
	for (i = 0; i <kitapSayisi; ++i)
	{
		printf("Kitabin adi:%s\n",kitapDizisi[i].kitapAdi);
		printf("Kitabin yazari:%s\n",kitapDizisi[i].yazarAdi);
		printf("Kitabin	yayinEvi:%s\n",kitapDizisi[i].yayinEvi);
		printf("Kitabin sayfaSayisi:%d\n",kitapDizisi[i].sayfaSayisi);
		printf("------------------------------------------------\n");
	}
	printf("\n");

}
int kitapAra(kitapBilgileri *kitapDizisi,int *kitapAdi,int kitapSayisi){
	int i;
	for (i = 0; i <kitapSayisi; ++i)
	{
		if(strcmp(kitapDizisi[i].kitapAdi,kitapAdi)==0){
			return i;
		}
	}
	printf("\n");
	return -1;
}

int main(int argc, char const *argv[])
{
	int kitapSayisi;
	char kullaniciGirisi,kitapAdi[20];
	kitapBilgileri *kitaplik;
	printf("Lutfen kac adet kitap girmek istediginizi belirtiniz:");
	scanf("%d",&kitapSayisi);
	kitaplik=(kitapBilgileri*)calloc(kitapSayisi,sizeof(kitapBilgileri));
	


	do{
		fflush(stdin);
		printf("Lutfen kitap eklemek icin 'E', Kitaplari Gormek icin 'G',Kitap aramak icin 'A', Cikis icin 'Q' tuslayiniz:");
		kullaniciGirisi=getchar();
		switch(kullaniciGirisi){
			case 'E':
				kitapEkle(kitaplik,kitapSayisi);
				break;
			case 'G':
				kitapLariGoster(kitaplik,kitapSayisi);
				break;
			case 'A':
				printf("Lutfen aramak istediginiz kitabin adini giriniz:");
				scanf("%s",&kitapAdi);
				int kitap_index=kitapAra(kitaplik,kitapAdi,kitapSayisi);
				if(kitap_index==-1){
					printf("Aradiginiz kitap bulunamadi.");
				}
				else{
					printf("Aradiginiz kitap %c-%d kutuphanesinde bulunmaktadir.",kitapAdi[0],kitap_index+1);
				}
				break;
			case 'Q':
				printf("Cikisiniz Yapiliyor....Iyi gunler dilerim.");
				break;
			default:
				printf("Hatali tuslama yaptiniz:");


		}

	}while(kullaniciGirisi!='Q');

	return 0;
}*/
/*int recursiveEkok(int sayi1,int sayi2){
	return sayi1*sayi2/recursiveEbob(sayi1,sayi2);
}
int recursiveEbob(int sayi1,int sayi2){
	if(sayi2!=0){
		return recursiveEbob(sayi2,sayi1%sayi2);
	}
	else{						      
		return sayi1;
	}


}
int main(int argc, char const *argv[])
{
	int sayi1,sayi2;

	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi1);
	printf("Lutfen ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	int sonuc=recursiveEbob(sayi1,sayi2);
	printf("OBEB:%d",sonuc);
	int sonuc2=recursiveEkok(sayi1,sayi2);
	printf("OKEK:%d",sonuc2);

	return 0;
}*/


void boslukKarakterSay(char *str,int *boslukSayisi){
	char *str2=str;
	while(*str2!='\0'){
		if(*str2==' '){
			*boslukSayisi++;
			
		}
		str2++;
	}
}


int main(){
	char kullaniciGirisi[20];
	int boslukSayisi=0;
	puts("Lutfen bir string giriniz:");
	gets(kullaniciGirisi);
	boslukKarakterSay(kullaniciGirisi,&boslukSayisi);
	printf("%d",boslukSayisi);
	
	return 0;
}






