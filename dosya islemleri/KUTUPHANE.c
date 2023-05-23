#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_KISI_SAYISI 50
#define MAX_KITAP_SAYISI 50
typedef enum{
	ogrenci=0,personel=1
}yetkiBilgileri;
typedef struct{
	char *ad;
	char *soyad;
	int kutuphaneID;
	int sifre;
	yetkiBilgileri yetki;
}kisiBilgileri;

typedef struct{
	char *kitapAdi;
	char *kitapYazarAdi;
	char *kitapYazarSoyadi;
	char *kitapYayinEvi;
	int sayfaSayisi;
	int kitapDurumu;
	
}kitapBilgileri;

int kisiSorgula(kisiBilgileri *uyeListesi,int ID){
	int i;
	for(i=0;i<MAX_KISI_SAYISI;i++){
		if(uyeListesi[i].kutuphaneID==ID){
			return ID;//bu ID daha once kullanildi demek.
		}
	}
	return -1;
}

int kayitOl(kisiBilgileri *uyeListesi){
	int i,KayitYapilacakIndex,ID;
	char kisiAdi[20],kisiSoyadi[20],ch;
	srand(time(NULL));
	
	for(i=0;i<MAX_KISI_SAYISI;i++){
		if(uyeListesi[i].kutuphaneID==0){
			KayitYapilacakIndex=i;
			break;
		}
	}
	ID=rand()%100000+1;
	if(kisiSorgula(uyeListesi,ID)!=-1){
		printf("Bu ID degeri daha once kullanilmistir...Kayit yapilamiyor.\n");
		exit(1);
	}
	printf("ID numaraniz %d olarak belirlenmistir.\n",ID);
	
	uyeListesi[KayitYapilacakIndex].kutuphaneID=ID;
	printf("Lutfen sirasiyla ad-soyad bilgilerinizi giriniz:");
	scanf("%s%s",&kisiAdi,&kisiSoyadi);
	
	uyeListesi[KayitYapilacakIndex].ad=(char*)malloc(sizeof(char)*strlen(kisiAdi)+1);
	uyeListesi[KayitYapilacakIndex].soyad=(char*)malloc(sizeof(char)*strlen(kisiSoyadi)+1);
	
	strcpy(uyeListesi[KayitYapilacakIndex].ad,kisiAdi);
	strcpy(uyeListesi[KayitYapilacakIndex].soyad,kisiSoyadi);
	
	printf("Lutfen ogrenciyseniz 'O' calisansaniz 'C' giriniz:");
	fflush(stdin);
	ch=getchar();
	if(ch=='O'|| ch=='o'){
		uyeListesi[KayitYapilacakIndex].yetki=ogrenci;
	}
	else{
		uyeListesi[KayitYapilacakIndex].yetki=personel;
	}
	printf("Lutfen sifrenizi giriniz:");
	scanf("%d",&uyeListesi[KayitYapilacakIndex].sifre);
	
	
	return uyeListesi[KayitYapilacakIndex].yetki;
}


void kitaplariGoruntule(kitapBilgileri *kitaplik){
	int i;
	for(i=0;i<MAX_KITAP_SAYISI;i++){
		if(kitaplik[i].sayfaSayisi!=0){
			printf("Kitap Adi:%s\n",kitaplik[i].kitapAdi);
			printf("Kitap Yazar Adi-Soyadi:%s %s\n",kitaplik[i].kitapYazarAdi,kitaplik[i].kitapYazarSoyadi);
			printf("Kitap YayinEvi:%s\n",kitaplik[i].kitapYayinEvi);
			printf("Kitap Sayfa Sayisi:%d\n",kitaplik[i].sayfaSayisi);
				if(kitaplik[i].kitapDurumu==0){
				printf("Bu kitap suan raftadir.");				
			}
			else{
				printf("Bu kitap suan baskasi tarafindan alinmistir.");
			}	
			printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
		}
		else{
			return;
		}
	}
}

void kitapAra(kitapBilgileri *kitaplik){
	int i=0;
	char kitapAdi[30];
	printf("Lutfen aramak istediginiz kitabin adini giriniz:");
	scanf("%s",&kitapAdi);
	while(i<MAX_KITAP_SAYISI && kitaplik[i].sayfaSayisi!=0){
		if(strcmp(kitaplik[i].kitapAdi,kitapAdi)==0){
			printf("Kitap Adi:%s\n",kitaplik[i].kitapAdi);
			printf("Kitap Yazar Adi-Soyadi:%s %s\n",kitaplik[i].kitapYazarAdi,kitaplik[i].kitapYazarSoyadi);
			printf("Kitap YayinEvi:%s\n",kitaplik[i].kitapYayinEvi);
			printf("Kitap Sayfa Sayisi:%d\n",kitaplik[i].sayfaSayisi);
			return;
		}
		i++;
	}
	printf("Aradiginiz kitap Maalesef kutuphanemizde bulunamadi!..\n");
}

void kitapEkle(kitapBilgileri *kitaplik){
	int sayfaSayisi,i;
	char kitapAdi[30],kitapYayinEvi[30],kitapYazarAdi[30],kitapYazarSoyadi[30];
	
	printf("Lutfen kitap adini giriniz:");
	scanf("%s",&kitapAdi);
	printf("Lutfen kitap yayinevini giriniz:");
	scanf("%s",&kitapYayinEvi);
	printf("Lutfen kitap yazar adini-soyadini giriniz:");
	scanf("%s %s",&kitapYazarAdi,&kitapYazarSoyadi);
	printf("Lutfen kitabin sayfa sayisini giriniz:");
	scanf("%d",&sayfaSayisi);
	for(i=0;i<MAX_KITAP_SAYISI;i++){
		if(kitaplik[i].sayfaSayisi==0){
			kitaplik[i].kitapAdi=(char*)malloc(sizeof(char)*strlen(kitapAdi)+1);
			kitaplik[i].kitapYayinEvi=(char*)malloc(sizeof(char)*strlen(kitapYayinEvi)+1);
			kitaplik[i].kitapYazarAdi=(char*)malloc(sizeof(char)*strlen(kitapYazarAdi)+1);
			kitaplik[i].kitapYazarSoyadi=(char*)malloc(sizeof(char)*strlen(kitapYazarSoyadi)+1);
			strcpy(kitaplik[i].kitapAdi,kitapAdi);
			strcpy(kitaplik[i].kitapYayinEvi,kitapYayinEvi);
			strcpy(kitaplik[i].kitapYazarAdi,kitapYazarAdi);
			strcpy(kitaplik[i].kitapYazarSoyadi,kitapYazarSoyadi);
			kitaplik[i].sayfaSayisi=sayfaSayisi;
			break;
			
		}
	}
}
void uyeleriGoruntule(kisiBilgileri *uyeListesi){
	int i=0;
	while(i<MAX_KISI_SAYISI && uyeListesi[i].kutuphaneID!=0){
		printf("Uye Adi-Soyadi:%s %s\n",uyeListesi[i].ad,uyeListesi[i].soyad);
		printf("Uye ID bilgisi:%d\n",uyeListesi[i].kutuphaneID);
		if(uyeListesi[i].yetki==1){
			printf("Uye durumu:Calisan.\n");
		}
		else{
			printf("Ute durumu:Ogrenci.\n");
		}
		printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
		i++;	
	}
}

int girisYap(kisiBilgileri *uyeListesi){
	int ID,sifre,i;
	printf("Lutfen kutuphane ID bilginizi giriniz:");
	scanf("%d",&ID);
	printf("Lutfen kutuphane sifre bilginizi giriniz:");
	scanf("%d",&sifre);
	for(i=0;i<MAX_KISI_SAYISI;i++){
		if(uyeListesi[i].kutuphaneID==ID){
			if(uyeListesi[i].sifre==sifre){
				printf("ID-sifre dogru...Giris basarili.\n");
				return uyeListesi[i].yetki;
			}
			return -1;//sifre yanlis girildi. giris basarisiz.
		}
	}
	return -2;//o ID degerine ait kimse bulunamadi.
}

void uyeleriAktar(kisiBilgileri *uyeListesi){
	FILE *uyeKayitlari;
	int i;
	char ad[20],soyad[20];
	uyeKayitlari=fopen("uyeListesi.txt","r");
	if(uyeKayitlari==NULL){
		fprintf(stderr,"Uye listesine ulasirken bir hata meydana geldi.\n");
		exit(1);
	}
	while(!feof(uyeKayitlari)){
		for(i=0;i<MAX_KISI_SAYISI;i++){
			if(uyeListesi[i].kutuphaneID==0){
				fscanf(uyeKayitlari,"%s\t%s\t%d\t%d\t%d\n",ad,soyad,&uyeListesi[i].yetki,&uyeListesi[i].kutuphaneID,&uyeListesi[i].sifre);
				uyeListesi[i].ad=(char*)malloc(sizeof(char)*strlen(ad)+1);
				uyeListesi[i].soyad=(char*)malloc(sizeof(char)*strlen(soyad)+1);
				strcpy(uyeListesi[i].ad,ad);
				strcpy(uyeListesi[i].soyad,soyad);
				break;
			}
		}
	}
	fclose(uyeKayitlari);	
}
void kitaplariAktar(kitapBilgileri *kitaplik){
	char kitapAdi[30],yazarAdi[30],yayinEvi[30],yazarSoyadi[30];
	FILE *kitapKayitlari;
	int i;
	kitapKayitlari=fopen("kitapListesi.txt","r");
	if(kitapKayitlari==NULL){
		fprintf(stderr,"Kitap listesine ulasirken bir hata meydana geldi");
		exit(1);
	}
	while(!feof(kitapKayitlari)){
		for(i=0;i<MAX_KISI_SAYISI;i++){
			if(kitaplik[i].sayfaSayisi==0){
				fscanf(kitapKayitlari,"%s\t%s\t%s\t%s\t%d\t%d\n",kitapAdi,yayinEvi,yazarAdi,yazarSoyadi,&kitaplik[i].kitapDurumu,&kitaplik[i].sayfaSayisi);
				kitaplik[i].kitapAdi=(char*)malloc(sizeof(char)*strlen(kitapAdi)+1);
				kitaplik[i].kitapYazarAdi=(char*)malloc(sizeof(char)*strlen(yazarAdi)+1);
				kitaplik[i].kitapYazarSoyadi=(char*)malloc(sizeof(char)*strlen(kitapAdi)+1);
				kitaplik[i].kitapYayinEvi=(char*)malloc(sizeof(char)*strlen(yayinEvi)+1);
				strcpy(kitaplik[i].kitapAdi,kitapAdi);
				strcpy(kitaplik[i].kitapYazarAdi,yazarAdi);
				strcpy(kitaplik[i].kitapYazarSoyadi,yazarSoyadi);
				strcpy(kitaplik[i].kitapYayinEvi,yayinEvi);
				break;
			}
		}
	}
}

void kitaplariYedekle(kitapBilgileri *kitaplik){
	FILE *kitapKayitlari;
	int i=0;
	kitapKayitlari=fopen("kitapListesi.txt","w");
	if(kitapKayitlari==NULL){
		fprintf(stderr,"Kitap listesine ulasirken bir hata meydana geldi");
		exit(1);
	}
	
	while(i<MAX_KITAP_SAYISI && kitaplik[i].sayfaSayisi!=0){
		fprintf(kitapKayitlari,"%s\t%s\t%s\t%s\t%d\t%d\n",kitaplik[i].kitapAdi,kitaplik[i].kitapYayinEvi,kitaplik[i].kitapYazarAdi,kitaplik[i].kitapYazarSoyadi,kitaplik[i].kitapDurumu,kitaplik[i].sayfaSayisi);
		i++;
	}
	fclose(kitapKayitlari);
}
void uyeleriYedekle(kisiBilgileri *uyeListesi){
	FILE *uyeKayitlari;
	int i=0;
	uyeKayitlari=fopen("uyeListesi.txt","w");
	if(uyeKayitlari==NULL){
		fprintf(stderr,"Uye listesine ulasirken bir hata meydana geldi.\n");
		exit(1);
	}
	while(i<MAX_KISI_SAYISI && uyeListesi[i].kutuphaneID!=0){
		fprintf(uyeKayitlari,"%s\t%s\t%d\t%d\t%d\n",uyeListesi[i].ad,uyeListesi[i].soyad,uyeListesi[i].kutuphaneID,uyeListesi[i].yetki,uyeListesi[i].sifre);
		i++;
	}
	fclose(uyeKayitlari);
}

int main(){
	kisiBilgileri *uyeListesi;
	kitapBilgileri *kitaplik;
	yetkiBilgileri uyeYetkisi;
	char ch;
	int girisDurumu;
	kitaplik=(kitapBilgileri*)calloc(MAX_KITAP_SAYISI,sizeof(kitapBilgileri));
	uyeListesi=(kisiBilgileri*)calloc(MAX_KISI_SAYISI,sizeof(kisiBilgileri));
	
	uyeleriAktar(uyeListesi);
	kitaplariAktar(kitaplik);
	
	
	
	//KAYIT OL--GIRIS YAP
	printf("\t\t\t Merhaba Kutuphane Sistemimize Hosgeldiniz...\n");
	printf("1) Sisteme kayit olmak istiyorsaniz:'K'\n2) Sisteme giris yapmak istiyorsaniz'G' tuslayiniz:\n");
	fflush(stdin);
	ch=getchar();
	if(ch=='k'||ch=='K'){
		girisDurumu=kayitOl(uyeListesi);//ogrenci mi yoksa calisan mi
	}
	else if(ch=='g'||ch=='G'){
		girisDurumu=girisYap(uyeListesi);//ogrenci mi yoksa calisan mi
		if(girisDurumu==-1){
			printf("Sifrenizi yanlis girdiniz...Giris yapilamiyor!\n");
			exit(1);
		}
		else if(girisDurumu==-2){
			printf("Boyle bir ID degeri sistemde kayitli degildir...Giris yapilamiyor!\n");
			exit(1);
		}
	}
	else{
		printf("Hatali bir tusalama yaptiniz...Sistemden cikis yapiliyor!\n");
		exit(1);
	}
	
	if(girisDurumu==1){
		uyeYetkisi=personel;
	}
	else{
		uyeYetkisi=ogrenci;
	}
	if(uyeYetkisi==ogrenci){
		do{
			printf("1) Tum Kitaplari Goruntulemek icin 'G' Tuslayiniz:\n2) Kitap Aramak icin 'A' Tuslayiniz:\n3) Cikis Yapmak icin 'Q' Tuslayiniz:\n");
			fflush(stdin);
			ch=getchar();
			switch(ch){
				case'G':
				case'g':
					kitaplariGoruntule(kitaplik);
					break;
				case'A':
				case'a':
					kitapAra(kitaplik);
					break;
				case'Q':
				case'q':
					kitaplariYedekle(kitaplik);
					uyeleriYedekle(uyeListesi);
					printf("Cikis yapiliyor...\nIyi Gunler Efendim!\n");
					break;
				default:
					printf("Hatali bir tuslama yaptiniz.\n");
					break;
			}
		}while(ch!='Q');
	}
	else{
		do{
			printf("1) Kitap eklemek istiyorsaniz 'E' Tuslayiniz:\n2) Tum uyeleri goruntulemek istiyorsaniz 'U' tuslayiniz:\n3) Cikis yapmak istiyorsaniz 'Q' tuslayiniz:\n");
			fflush(stdin);
			ch=getchar();
			switch(ch){
				case'E':
				case'e':
					kitapEkle(kitaplik);
					break;
				case'U':
				case'u':
					uyeleriGoruntule(uyeListesi);
					break;
				case'Q':
				case'q':
					kitaplariYedekle(kitaplik);
					uyeleriYedekle(uyeListesi);
					printf("Cikis yapiliyor...\nIyi Gunler Efendim!\n");
					break;
				default:
					printf("Hatali bir tuslama yaptiniz.\n");
					break;
			}
			
		}while(ch!='Q');
	}
	
	
	return 0;
}
