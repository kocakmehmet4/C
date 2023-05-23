#include <stdio.h>

/*typedef struct{
	int saat;
	int dakika;
	double saniye;
}saatBilgileri;

saatBilgileri saatiAyir(double kullaniciSaati){
	saatBilgileri donusturulenSaat;
	int tamSayiKismi=(int) kullaniciSaati;
	double ondalikliKisim=kullaniciSaati-tamSayiKismi;

	donusturulenSaat.saat=tamSayiKismi/3600;
	donusturulenSaat.dakika=(tamSayiKismi%3600)/60;
	donusturulenSaat.saniye=(tamSayiKismi%3600)%60+ondalikliKisim;


	//7350
	return donusturulenSaat;
}

int main(int argc, char const *argv[])
{
	double kullaniciGirisi;
	saatBilgileri kullaniciSaati;
	printf("Lutfen gireceginiz saat birimini saniye cinsinden giriniz:");
	scanf("%lf",&kullaniciGirisi);
	kullaniciSaati=saatiAyir(kullaniciGirisi);
	printf("saat:%d dakika:%d  saniye:%.2lf",kullaniciSaati.saat,kullaniciSaati.dakika,kullaniciSaati.saniye);

	return 0;
}*/

/*typedef struct
{
	char sembol[3];
	char tamAdi[20];
	int atomNumarasi;
	
}element;

void bilgileriGoster(element elementBilgileri[],char *sembol,int elemanSayisi){
	int i;
	int bulunduMu=0;
	for (i = 0; i <elemanSayisi; ++i)
	{
		if(strcmp(elementBilgileri[i].sembol,sembol)==0){
			printf("Sembol:%s\n",elementBilgileri[i].sembol);
			printf("Tam adi:%s\n",elementBilgileri[i].tamAdi);
			printf("Atom Numarasi:%d\n",elementBilgileri[i].atomNumarasi);
			bulunduMu=1;
			break;
		}
	}
	if(!bulunduMu){
		printf("Aradiginiz element listede bulunmadi!\n");
	}
}

int main(int argc, char const *argv[])
{
	element elementBilgileri[]={{"He","Helyum",2},{"H","Hidrjen",1},{"B","Bor",5},{"F","flor",9},{"N","Azot",7}};
	char kullaniciArama[5];
	while(1){
		printf("Yazdirmak istediginiz elementin sembolunu giriniz(CIKIS ICIN Q'YU TUSLAYIN!):");
		scanf("%s",&kullaniciArama);
		if(strcmp(kullaniciArama,"Q")==0){
			break;
		}
		bilgileriGoster(elementBilgileri,kullaniciArama,5);
	}

	
	return 0;
}*/

/*typedef struct 
{
	int ID;//4 byte
	double fiyatBilgisi;// 8 byte
	char urunAdiBilgisi[20]; // 20 byte
	
}urunBilgileri;

void listeyeUrunEkle(urunBilgileri urunListesi[],int urunID,double urunFiyat,char *urunAdi){
	int bosYer=0;
	while(1){
		if(urunListesi[bosYer].ID==0){
			urunListesi[bosYer].ID=urunID;
			urunListesi[bosYer].fiyatBilgisi=urunFiyat;
			strcpy(urunListesi[bosYer].urunAdiBilgisi,urunAdi);
			break;
		}
		bosYer++;
	}
}
int urunBul(int arananID,urunBilgileri urunListesi[],int urunSayisi){
	int i;
	for (i = 0; i <urunSayisi; ++i)
	{
		if(urunListesi[i].ID==arananID){
			return i;
		}
	}
	return -1;
}
void urunBilgisiGoster(int urunID,urunBilgileri urunListesi[],int urunSayisi){
	int urunIndex=urunBul(urunID,urunListesi,urunSayisi);
	if(urunIndex!=-1){
		printf("Urun ID:%d\n",urunListesi[urunIndex].ID);
		printf("Urun fiyat:%.2lf\n",urunListesi[urunIndex].fiyatBilgisi);
		printf("Urun Adi:%s\n",urunListesi[urunIndex].urunAdiBilgisi);
	}
	else{
		printf("Aradiginiz urun kayitli degildir.");
	}

}

int main(int argc, char const *argv[])
{
	int urunSayisi,i,ID;
	urunBilgileri *urunlerListesi;
	double urunFiyat;
	char urunAdi[15];

	puts("Lutfen kac adet urun girmek istediginizi giriniz:");
	scanf("%d",&urunSayisi);
	urunlerListesi=(urunBilgileri*)calloc(urunSayisi,sizeof(urunBilgileri));//dinamik şekilde urun deposu olusturduk.
	for (i = 0; i <urunSayisi; ++i)
	{
		puts("Lutfen eklenecek urunun ID bilgisini giriniz:");
		scanf("%d",&ID);
		puts("Lutfen eklenecek urunun fiyat bilgisini giriniz:");
		scanf("%lf",&urunFiyat);
		puts("Lutfen eklenecek urunun adini giriniz:");
		scanf("%s",&urunAdi);
		listeyeUrunEkle(urunlerListesi,ID,urunFiyat,urunAdi);

	}	
	printf("Lutfen gormek istediginiz urunun ID'sini giriniz:");
	scanf("%d",&ID);
	urunBilgisiGoster(ID,urunlerListesi,urunSayisi);


	
	return 0;
}*/

/*typedef struct
{
	int x;
	int y;
}Nokta;
	
typedef struct{
	Nokta koordinat [4];

}dikdortgen;
float alanHesapla(dikdortgen kullaniciGirisi){
	float x_kenar,y_kenar;
	x_kenar=kullaniciGirisi.koordinat[1].x-kullaniciGirisi.koordinat[0].x;
	y_kenar=kullaniciGirisi.koordinat[3].y-kullaniciGirisi.koordinat[0].y;
	return x_kenar*y_kenar;
}


int  main(int argc, char const *argv[])
{
	dikdortgen hesaplanacakDortgen;
	int i;
	for (i = 0; i <4; ++i)
	{
		printf("Lutfen N%d sirasiyla x ve y degerlerini giriniz: ",i );
		scanf("%d%d",&hesaplanacakDortgen.koordinat[i].x,&hesaplanacakDortgen.koordinat[i].y);
	}
	float sonuc=alanHesapla(hesaplanacakDortgen);
	printf("Girdiginiz x-y degerlerine karsilik alan degeri:%.2f",sonuc);
	return 0;
}*/

/*typedef struct
{
	float sanal;
	float gercek;	
}karmasikSayi;

//karmasikSayi topla(karmasikSayi n1,karmasikSayi n2);
void topla(karmasikSayi n1,karmasikSayi n2,karmasikSayi *sonuc);

int main(int argc, char const *argv[])
{
	karmasikSayi n1,n2,sonuc;


	printf("Lutfen ilk karmasik sayinin sanal ve gercek degerlerini giriniz:");
	scanf("%f %f",&n1.sanal,&n1.gercek);
	printf("Lutfen ikinci karmasik sayinin sanal ve gercek degerlerini giriniz:");
	scanf("%f %f",&n2.sanal,&n2.gercek);

	//sonuc=topla(n1,n2);
	topla(n1,n2,&sonuc);
	printf("Sonuc:%.1fi+%.1f\n",sonuc.sanal,sonuc.gercek);
	return 0;
}
/*karmasikSayi topla(karmasikSayi n1,karmasikSayi n2){
	karmasikSayi temp;
	temp.gercek=n1.gercek+n2.gercek;
	temp.sanal=n1.sanal+n2.sanal;
	return (temp);
}

void topla(karmasikSayi n1,karmasikSayi n2,karmasikSayi *sonuc){
	sonuc->gercek=n1.gercek+n2.gercek;
	sonuc->sanal=n1.sanal+n2.sanal;
}*/

/*typedef struct
{
	int saat;
	int dakika;
	double saniye;
	
}saatBilgileri;

saatBilgileri farkiBul(saatBilgileri sayi1,saatBilgileri sayi2){
	saatBilgileri temp;
	double ilkSaatDouble=sayi1.saat*3600+sayi1.dakika*60+sayi1.saniye;
	double ikinciSaatDouble=sayi2.saat*3600+sayi2.dakika*60+sayi2.saniye;

	if(ilkSaatDouble>=ikinciSaatDouble){
		if(sayi1.dakika<sayi2.dakika){
			sayi1.saat-=1;
			sayi1.dakika+=60;
		}
		if(sayi1.saniye<sayi2.saniye){
			sayi1.dakika-=1;
			sayi1.saniye+=60;
		}
		temp.saat=sayi1.saat-sayi2.saat;
		temp.dakika=sayi1.dakika-sayi2.dakika;
		temp.saniye=sayi1.saniye-sayi2.saniye;
	}
	else{
		if(sayi1.dakika>sayi2.dakika){
			sayi2.saat-=1;
			sayi2.dakika+=60;
		}
		if(sayi1.saniye>sayi2.saniye){
			sayi2.dakika-=1;
			sayi2.saniye+=60;
		}
		temp.saat=sayi2.saat-sayi1.saat;
		temp.dakika=sayi2.dakika-sayi1.dakika;
		temp.saniye=sayi2.saniye-sayi1.saniye;


	}
	return temp;
	
}

int main(int argc, char const *argv[])
{
	saatBilgileri kullaniciGirisi,kullaniciGirisi2,saatFarki;
	printf("Lutfen ilk saat bilgilerini saat-dakika-saniye olarak giriniz:");
	scanf("%d:%d:%lf",&kullaniciGirisi.saat,&kullaniciGirisi.dakika,&kullaniciGirisi.saniye);
	printf("Lutfen ikinci saat bilgilerini saat-dakika-saniye olarak giriniz:");
	scanf("%d:%d:%lf",&kullaniciGirisi2.saat,&kullaniciGirisi2.dakika,&kullaniciGirisi2.saniye);

	saatFarki=farkiBul(kullaniciGirisi,kullaniciGirisi2);
	printf("%d:%d:%.2lf",saatFarki.saat,saatFarki.dakika,saatFarki.saniye);
	
	return 0;
}*/


/*typedef struct 
{
	int saat;
	int dakika;
	float saniye;
	
}saatBilgileri;

saatBilgileri farkiBul(saatBilgileri sayi1,saatBilgileri sayi2);

int main(int argc, char const *argv[])
{
	saatBilgileri kullaniciGirisi1,kullaniciGirisi2,sonuc;
	printf("Lutfen ilk saat bilgilerini saat-dakika-saniye olarak giriniz:");
	scanf("%d:%d:%f",&kullaniciGirisi1.saat,&kullaniciGirisi1.dakika,&kullaniciGirisi1.saniye);
	printf("Lutfen ikinci saat bilgilerini saat-dakika-saniye olarak giriniz:");
	scanf("%d:%d:%f",&kullaniciGirisi2.saat,&kullaniciGirisi2.dakika,&kullaniciGirisi2.saniye);

	sonuc=farkiBul(kullaniciGirisi1,kullaniciGirisi2);
	printf("sonuc:%d:%d:%.2f",sonuc.saat,sonuc.dakika,sonuc.saniye);
	
	return 0;
}
saatBilgileri farkiBul(saatBilgileri sayi1,saatBilgileri sayi2){
	saatBilgileri temp;
	float doubleSayi1=sayi1.saat*3600+sayi1.dakika*60+sayi1.saniye;
	float doubleSayi2=sayi1.saat*3600+sayi1.dakika*60+sayi1.saniye;

	if(doubleSayi1>=doubleSayi2){
		if(sayi1.dakika<sayi2.dakika){
			sayi1.dakika+=60;
			sayi1.saat-=1;
		}
		if(sayi1.saniye<sayi2.saniye){
			sayi1.saniye+=60;
			sayi1.dakika-=1;
		}
		temp.saat=sayi1.saat-sayi2.saat;
		temp.dakika=sayi1.dakika-sayi2.dakika;
		temp.saniye=sayi1.saniye-sayi2.saniye;
	}
	else{
		if(sayi1.dakika>sayi2.dakika){
			sayi2.dakika+=60;
			sayi2.saat-=1;
		}
		if(sayi1.saniye>sayi2.saniye){
			sayi2.saniye+=60;
			sayi2.dakika-=1;
		}
		temp.saat=sayi2.saat-sayi1.saat;
		temp.dakika=sayi2.dakika-sayi1.dakika;
		temp.saniye=sayi2.saniye-sayi1.saniye;
	}
	return temp;

}*/

/*typedef struct
{
	int sanal;
	int gercek;
	
}karmasikSayi;

karmasikSayi topla(karmasikSayi sayi1,karmasikSayi sayi2);

int  main(int argc, char const *argv[])
{
	karmasikSayi n1,n2,sonuc;
	printf("Lutfen sirasiyla ilk karmasik sayinin sanal ve reel kisimlarini giriniz:\n");
	scanf("%d%d",&n1.sanal,&n1.gercek);
	printf("Lutfen sirasiyla ikinci karmasik sayinin sanal ve reel kisimlarini giriniz:\n");
	scanf("%d%d",&n2.sanal,&n2.gercek);
	sonuc=topla(n1,n2);
	printf("%di+%d",sonuc.sanal,sonuc.gercek);
	return 0;
}

karmasikSayi topla(karmasikSayi sayi1,karmasikSayi sayi2){
	karmasikSayi temp;
	temp.sanal=sayi1.sanal+sayi2.sanal;
	temp.gercek=sayi1.gercek+sayi2.gercek;
	return temp;

}*/



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
	for (int i = 0; i < kitapSayisi; ++i)
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

/*typedef struct
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
}*/

struct Ogrenci{
	char isim[20];
	char soyisim[20];
	float ortalama;
};


int main(int argc, char const *argv[])
{


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















