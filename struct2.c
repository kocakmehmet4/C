#include <stdio.h>

/*typedef struct
{
	float sanal;
	float gercek;
	
}karmasikSayi;

karmasikSayi karmasikFonksiyon(karmasikSayi n1,karmasikSayi n2);

int main(int argc, char const *argv[])
{
	karmasikSayi sayi1,sayi2,sonuc;
	printf("Lutfen ilk sanal-gercek kismi bulunan sayiyi sirasiyla giriniz:");
	scanf("%f %f",&sayi1.sanal,&sayi1.gercek);
	printf("Lutfen ikinci sanal-gercek kismi bulunan sayiyi sirasiyla giriniz:");
	scanf("%f %f",&sayi2.sanal,&sayi2.gercek);
	sonuc=karmasikFonksiyon(sayi1,sayi2);
	printf("sonuc:%1.f+%.1fi",sonuc.gercek,sonuc.sanal);
	return 0;
}
karmasikSayi karmasikFonksiyon(karmasikSayi n1,karmasikSayi n2){
	karmasikSayi temp;
	temp.sanal=n1.sanal+n2.sanal;
	temp.gercek=n1.gercek+n2.gercek;
	return (temp);

}*/

/*typedef struct
{
	int saat;
	int dakika;
	double saniye;
}saatBilgileri;

saatBilgileri saatFarki(saatBilgileri n1,saatBilgileri n2);

int main(int argc, char const *argv[])
{
	saatBilgileri kullaniciGirisi1,kullaniciGirisi2,sonuc;

	printf("Lutfen saat bilgilerini sirasiyla saat-dakika-saniye biciminde giriniz:");
	scanf("%d:%d:%lf",&kullaniciGirisi1.saat,&kullaniciGirisi1.dakika,&kullaniciGirisi1.saniye);
	printf("Lutfen saat bilgilerini sirasiyla saat-dakika-saniye biciminde giriniz:");
	scanf("%d:%d:%lf",&kullaniciGirisi2.saat,&kullaniciGirisi2.dakika,&kullaniciGirisi2.saniye);
	sonuc=saatFarki(kullaniciGirisi1,kullaniciGirisi2);
	printf("saat:%d,dakika:%d,saniye:%.2lf",sonuc.saat,sonuc.dakika,sonuc.saniye);
	return 0;
}
saatBilgileri saatFarki(saatBilgileri n1,saatBilgileri n2){
	saatBilgileri temp;
	double ilkSaat=n1.saat*3600+n1.dakika*60+n1.saniye;
	double ikinciSaat=n2.saat*3600+n2.dakika*60+n2.saniye;
	if(ilkSaat<ikinciSaat){
		if(n1.dakika>n2.dakika){
			n2.dakika+=60;
			n2.saat-=1;
		}
		if(n1.saniye>n2.saniye){
			n2.saniye+=60;
			n2.dakika-=1;
		}
		temp.saat=n2.saat-n1.saat;
		temp.dakika=n2.dakika-n1.dakika;
		temp.saniye=n2.saniye-n1.saniye;
	}
	else{

		if(n1.dakika<n2.dakika){
			n1.dakika+=60;
			n1.saat-=1;
		}
		if(n1.saniye<n2.saniye){
			n1.saniye+=60;
			n1.dakika-=1;
		}
		temp.saat=n1.saat-n2.saat;
		temp.dakika=n1.dakika-n2.dakika;
		temp.saniye=n1.saniye-n2.saniye;

	}
	return temp;
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

}
int kitapAra(kitapBilgileri *kitapDizisi,int *kitapAdi,int kitapSayisi){
	int i;
	for (i = 0; i <kitapSayisi; ++i)
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

typedef struct{
	char sembol[3];
	char elemenIsmi[20];
	int elemanSayisi;

}elementBilgileri;

void bilgileriGoster(elementBilgileri element[],char *sembol,int elemanSayisi){
	int i,bulunduMu=0;;
	for (int i = 0; i <elemanSayisi; ++i)
	{
		if(strcmp(element[i].sembol,sembol)==0){
		printf("Element sembolu:%s\n",element[i].sembol);
		printf("Elementin Adi:%s\n",element[i].elemenIsmi);
		printf("Atom Numarasi:%d\n",element[i].elemanSayisi);
		bulunduMu=1;
		break;
		}
	}
	if(!bulunduMu){
		printf("Aradiginiz eleman listede bulunamadi!"); 
	}
}

int main(int argc, char const *argv[])
{
	elementBilgileri kullaniciGirisi[]={{"He","Helyum",2},{"H","Hidrjen",1},{"B","Bor",5},{"F","flor",9},{"N","Azot",7}};
	
	char kullaniciIslemi[5];

	while(1){
		printf("Lutfen aramak istediginiz elementin sembolunu giriniz(Cikmak icin Q'yu tuslayim):");
		scanf("%s",&kullaniciIslemi);
		if(strcmp(kullaniciIslemi,"Q")==0){
			break;
		}
		bilgileriGoster(kullaniciGirisi,kullaniciIslemi,5);
	}
	
	return 0;
}	





