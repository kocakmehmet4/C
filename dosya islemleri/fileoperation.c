#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*int main(){
	FILE *dosya=fopen("deneme.txt","w");
	if(dosya!='\0'){
		printf("Dosya basarili bir sekilde olusturuldu.\n");
	}
	else{
		printf("Dosya olusturulurken bir hata meydana geldi.\n");
	}
	int kapandiMi;//
	kapandiMi=fclose(dosya); //kapandiysa 0 kapanmadiysa 0dan farkli deger doner.
	if(kapandiMi==0){
		printf("Dosya basarili bir sekilde kapatildi.\n");
	}
	else{
		printf("Dosya kapatilirken bir hata meydana geldi.\n");
	}
	
	return 0;
}*/
/*int main(){
	FILE *dosya=fopen("deneme.txt","r");//okuma modu
	FILE *dosya2=fopen("deneme2.txt","w");// yazma modu
	if(dosya!='\0'){
		printf("Dosya basarili bir sekilde okundu.\n");
	}
	else{
		printf("Dosya olusturulurken bir hata meydana geldi.\n");
	}
	if(dosya2!='\0'){
		printf("Yazilacak olan dosya basarili bir sekilde acildi.\n");
	}
	else{
		printf("Dosya olusturulurken bir hata meydana geldi.\n");
	}
	int i,ch;
	//for(i=0;i<5;i++){ ch=fgetc(dosya);	fputchar(ch);}
	
	do{
		ch=fgetc(dosya); //buradan okudum
		//fputchar(ch); //buraya yazdim
		fputc(ch,dosya2);//buraya yaziyoruz
		
	}while(ch!=EOF);
			
	printf("\n");
	
	int kapandiMi;//
	kapandiMi=fclose(dosya); //kapandiysa 0 kapanmadiysa 0dan farkli deger doner.
	if(kapandiMi==0){
		printf("Dosya basarili bir sekilde kapatildi.\n");
	}
	else{
		printf("Dosya kapatilirken bir hata meydana geldi.\n");
	}
	
	kapandiMi=fclose(dosya2);
	if(kapandiMi==0){
		printf("Yazilacak olan dosya basarili bir sekilde kapatildi.\n");
	}
	else{
		printf("Dosya kapatilirken bir hata meydana geldi.\n");
	}
	
	return 0;
}*/
/*#define MAX_SATIR_SAYISI 50
#define MAX_KARAKTER_SAYISI 50
int main(){
	char saklanacakYer[MAX_SATIR_SAYISI][MAX_KARAKTER_SAYISI];
	FILE *dosya=fopen("deneme.txt","r");//okuma modu
	int satirSayac=0;
	FILE *dosya2=fopen("deneme2.txt","w");// yazma modu
	if(dosya!=NULL && dosya2!=NULL){
		printf("Iki dosyaniz basarili bir sekilde acildi.\n");
		while(satirSayac<MAX_SATIR_SAYISI && !feof(dosya)){
			fgets(saklanacakYer[satirSayac],MAX_KARAKTER_SAYISI,dosya);
			printf("%s ifadesi dosya2'e kopyalandi.\n",saklanacakYer[satirSayac]);
			fputs(saklanacakYer[satirSayac],dosya2);
			satirSayac++;
		}
	}
	else{
		printf("Dosyalar acilirken bir hata meydana geldi.\n");
	}
	return 0;
}*/

/*#define MAX_SATIR_SAYISI 50
int main(){
	char adSoyad[MAX_SATIR_SAYISI],bolumBilgisi[MAX_SATIR_SAYISI];
	float ortalama;
	FILE *dosya=fopen("deneme.txt","r");//okuma modu 
	FILE *dosya2=fopen("deneme2.txt","w");// yazma modu
	if(dosya!=NULL && dosya2!=NULL){
		printf("Iki dosyaniz basarili bir sekilde acildi.\n");
		fscanf(dosya,"%s%f%s",&adSoyad,&ortalama,&bolumBilgisi);
		printf("Ad-Soyad:%s\nOrtalama:%.2f\nBolum Bilgisi:%s\n",adSoyad,ortalama,bolumBilgisi);
		fprintf(dosya2,"Ad-Soyad:%s\nOrtalama:%.2f\nBolum Bilgisi:%s\n",adSoyad,ortalama,bolumBilgisi);
	}
	else{
		printf("Dosyalar acilirken bir hata meydana geldi.\n");
	}
	return 0;
}*/

/* Isimize yariyacak fonksiyonlar:
1. feof(FILE POINTER)-->>dosyanin sonuna gelip gelinmedigini soyler. dosyanin sonuna gelindigi zaman 0'dan farkli bir deger donuyor aksi halde 0.

2. rewind(FILE POINTER)-->dosyanin en basina donmemizi saglar.

3. fseek(FILE POINTER,KAC BYTE, NEREDEN ITIBAREN )--> imleci dosyanin belirli yerlerine goturmemizi saglar.
	SEEK_SET-->dosyanin basindan itibaren 
	SEEK_CUR-->en son kalinan yerden itibaren.
	SEEK_END-->sondan itibaren
	- geriye dogru anlamina gelir.
4. ftell(FILE POINTER)-->kacinci byte degerinde oldugumuzu soyler.   */


/*#define MAX_SATIR_SAYISI 50
int main(){
	char adSoyad[MAX_SATIR_SAYISI],bolumBilgisi[MAX_SATIR_SAYISI];
	float ortalama;
	FILE *dosya=fopen("deneme.txt","r");//okuma modu 
	FILE *dosya2=fopen("deneme2.txt","w");// yazma modu
	if(dosya!=NULL && dosya2!=NULL){
		printf("Iki dosyaniz basarili bir sekilde acildi.\n");
		while(!feof(dosya)){
			fscanf(dosya,"%s%f%s",&adSoyad,&ortalama,&bolumBilgisi);
			printf("Ad-Soyad:%s\nOrtalama:%.2f\nBolum Bilgisi:%s\n",adSoyad,ortalama,bolumBilgisi);
			fprintf(dosya2,"Ad-Soyad:%s\nOrtalama:%.2f\nBolum Bilgisi:%s\n\n--------------------------------\n",adSoyad,ortalama,bolumBilgisi);
		}
		//rewind(dosya);
		/*while(!feof(dosya)){
			fscanf(dosya,"%s%f%s",&adSoyad,&ortalama,&bolumBilgisi);
			printf("Ad-Soyad:%s\nOrtalama:%.2f\nBolum Bilgisi:%s\n",adSoyad,ortalama,bolumBilgisi);
			fprintf(dosya2,"Ad-Soyad:%s\nOrtalama:%.2f\nBolum Bilgisi:%s\n\n--------------------------------\n",adSoyad,ortalama,bolumBilgisi);
		}*/
	/*	printf("Sonuncu karakter:%d byte degerinde.\n",ftell(dosya));
		fseek(dosya,5,SEEK_SET);
		fseek(dosya,5,SEEK_CUR);
		fseek(dosya,-1,SEEK_END);
		printf("%d byte degerinde.",ftell(dosya));
		
	}
	else{
		printf("Dosyalar acilirken bir hata meydana geldi.\n");
	}
	return 0;
}*/

/*int dosyalariKarsilastir(FILE *ilkDosya,FILE *ikinciDosya){
	int karakterSayisi,karakterSayisi2;
	fseek(ilkDosya,0,SEEK_END);
	fseek(ikinciDosya,0,SEEK_END);
	karakterSayisi=ftell(ilkDosya);
	karakterSayisi2=ftell(ikinciDosya);
	printf("Ilk dosya %d adet karakter icerir.\n",karakterSayisi);
	printf("Ikinci dosya %d adet karakter icerir.\n",karakterSayisi2);
	if(karakterSayisi>karakterSayisi2){
		printf("ilk dosyanin boyutu ikinci dosyanizdan daha buyuktur.\n");
		return;
	}
	else if(karakterSayisi<karakterSayisi2){
		printf("ikinci dosyanin boyutu ilk dosyanizdan daha buyuktur.\n");
		return;
	}
	else{
		rewind(ilkDosya);
		rewind(ikinciDosya);
		int ch,ch2;
		while(1){
			ch=fgetc(ilkDosya);
			ch2=fgetc(ikinciDosya);
			printf("ilk dosyanin karakteri:%c\n",ch);
			printf("ikinci dosyanin karakteri:%c\n",ch2);
			if(ch==EOF && ch2==EOF){
				break;
			}
			if(ch!=ch2){
				return 0; //karakterler farkli
			}
		}
		
	}
	return 1; //tum karakterler ayni
}

int main(){
	
	FILE *ilkDosya=fopen("deneme.txt","r");
	FILE *ikinciDosya=fopen("deneme2.txt","r");
	if(ilkDosya!=NULL && ikinciDosya!=NULL){
		int sonuc=dosyalariKarsilastir(ilkDosya,ikinciDosya);
		if(sonuc){
			printf("iki dosya tamamen birbirinin aynisidir.");
		}
		else{
			printf("iki dosya birbirinden farklidir.");
		}
	}
	
	fclose(ilkDosya);
	fclose(ikinciDosya);
	return 0;
}*/
/*void buyukHarfeCevir(FILE *birinciDosya, FILE *ikinciDosya){
	int ch;
	while(1){
		ch=fgetc(birinciDosya);
		if(ch==EOF){
			break;
		}
		fputc(toupper(ch),ikinciDosya);
	}
	
	printf("Donusum tamamlandi!");
}



int main(){
	
	FILE *ilkDosya=fopen("deneme.txt","r");
	FILE *ikinciDosya=fopen("deneme2.txt","w");
	if(ilkDosya==NULL || ikinciDosya==NULL){
		fprintf(stderr,"Dosyalar acilirken bir hata meydana geldi.");
		exit(0);
	}
	buyukHarfeCevir(ilkDosya,ikinciDosya);
	fclose(ilkDosya);
	fclose(ikinciDosya);
	
	return 0;
}*/

/*void tersAktar(FILE *dosya,FILE *dosya2){
	int karakterSayisi,i;
	fseek(dosya,0,SEEK_END);//DOSYA SONUNA GELDIK
	karakterSayisi=ftell(dosya);//KAC KARAKTER VAR OGRENDIK
	printf("Karakter sayisi:%d\n",karakterSayisi);
	fseek(dosya,-1,SEEK_END); //DOSYANIN SON HARFINDEYIZ
	for(i=2;i<=karakterSayisi+1;i++){
		int ch=fgetc(dosya);
		printf("%c ",ch);
		fputc(ch,dosya2);
		fseek(dosya,-(i),SEEK_END);
	}
	printf("\nTum icerik basariyla aktarildi.");
}
void NKarakterTersiAktar(int N,FILE *dosya,FILE *dosya2){
	char *string;
	int karakterSayisi,i;
	fseek(dosya,0,SEEK_END);
	karakterSayisi=ftell(dosya);
	if(karakterSayisi>=N){
		rewind(dosya);
		string=(char*)malloc(sizeof(char)*N);
		for(i=0;i<N;i++){
			string[i]=fgetc(dosya);
			printf("%c ",string[i]);
		}
		for(i=N-1;i>=0;i--){
			fputc(string[i],dosya2);
		}
		printf("%d adet karakter aktarildi.",N);
	}
	else{
		printf("N sayisi karakter sayisindan buyuk olamaz.");
	}
}

int main(){
	FILE *ilkDosya=fopen("deneme.txt","r");
	FILE *ikinciDosya=fopen("deneme2.txt","w");
	if(ilkDosya==NULL || ikinciDosya==NULL){
		fprintf(stderr,"Dosyalar acilirken bir hata meydana geldi.");
		exit(0);
	}
	//tersAktar(ilkDosya,ikinciDosya);
	NKarakterTersiAktar(30,ilkDosya,ikinciDosya);
	
	fclose(ilkDosya);
	fclose(ikinciDosya);
	
	return 0;
}*/

/*typedef struct{
	char adSoyad[50];
	char harfNotu;
	int vizeNotu;
	int finalNotu;
	double ortalama;
	
}ogrenciBilgileri;

double ortalamaHesapla(int vizeNotu,int finalNotu){
	return vizeNotu*0.35+finalNotu*0.65;
}
char harfNotuHesapla(double ortalama){
	if(ortalama>=90){
		return 'A';
	}
	else if(ortalama>=80 && ortalama<90){
		return 'B';
	}
	else if(ortalama>=65 && ortalama<80){
		return 'C';
	}
	else if(ortalama>=50 && ortalama <65){
		return 'D';
	}
	else{
		return 'F';
	}
}

void sonDurumHesapla(FILE *dosya ,FILE *dosya2){
	while(!feof(dosya)){
		ogrenciBilgileri ogrenciler;
		fscanf(dosya,"%s %d %d",&ogrenciler.adSoyad,&ogrenciler.vizeNotu,&ogrenciler.finalNotu);
		ogrenciler.ortalama=ortalamaHesapla(ogrenciler.vizeNotu,ogrenciler.finalNotu);
		ogrenciler.harfNotu=harfNotuHesapla(ogrenciler.ortalama);
		if(ogrenciler.harfNotu!='F'){
			fprintf(dosya2,"%s\t%d\t%d\t\%lf\t%c\t%s\n",ogrenciler.adSoyad,ogrenciler.vizeNotu,ogrenciler.finalNotu,
							ogrenciler.ortalama,ogrenciler.harfNotu,"Tebrikler! Gectiniz...");
		}
		else{
			fprintf(dosya2,"%s\t%d\t%d\t\%lf\t%c\t%s\n",ogrenciler.adSoyad,ogrenciler.vizeNotu,ogrenciler.finalNotu,
							ogrenciler.ortalama,ogrenciler.harfNotu,"Kaldiniz...");
		}
	}
}

int main(){
	FILE *ilkDosya=fopen("deneme.txt","r");
	FILE *ikinciDosya=fopen("deneme2.txt","w");
	if(ilkDosya==NULL || ikinciDosya==NULL){
		fprintf(stderr,"Dosyalar acilirken bir hata meydana geldi.");
		exit(0);
	}
	sonDurumHesapla(ilkDosya,ikinciDosya);
	printf("Hesaplama tamamlandi.");
	fclose(ilkDosya);
	fclose(ikinciDosya);
	
	return 0;
}*/
/*int kelimeSayisiBul(FILE *dosya){
	int ch,kelimeSayisi=0;
	do{
		ch=fgetc(dosya);
		if(ch=='.' || ch==' '){
			kelimeSayisi+=1;
		}
		
	}while(ch!=EOF);
	return kelimeSayisi;
	
}

int main(){
	
	FILE *ilkDosya=fopen("deneme.txt","r");
	if(ilkDosya==NULL){
		fprintf(stderr,"Dosya acilirken bir hata meydana geldi.");
		exit(0);
	}
	int kelimeSayisi=kelimeSayisiBul(ilkDosya);
	printf("%d adet kelime icermektedir.",kelimeSayisi);
	
	return 0;
}*/

/*int kelimeArama(FILE *dosya,char *str){
	char kelime[20];
	int kelimeSayisi=0;
	while(!feof(dosya)){
		fscanf(dosya,"%s",&kelime);
		kelimeSayisi+=1;
		if(strcmp(kelime,str)==0){
			return kelimeSayisi;
		}
		
	}
	return -1;
}

int main(){
	char arananKelime[20];
	FILE *dosya=fopen("deneme.txt","r");
	if(dosya==NULL){
		fprintf(stderr,"Hata meydana geldi.");
		exit(0);
	}
	puts("Lutfen aranan kelimeyi giriniz:");
	gets(arananKelime);
	int index=kelimeArama(dosya,arananKelime);
	if(index!=-1){
		printf("%s kelimesi dosyanin %d. kelimesi",arananKelime,index);
	}
	else{
		printf("%s kelimesi dosyada bulunamadi.",arananKelime);
	}
	return 0;
}*/

/*void buyukHarfeCevir(FILE *dosya,FILE *dosya2){
	 int ch;
	 ch=fgetc(dosya);
	 fputc(toupper(ch),dosya2);
	 while(1){
	 	ch=fgetc(dosya);
	 	if(ch==EOF){
	 		break;
		 }
		 fputc(ch,dosya2);
		 if(ch=='.'){	
		 	ch=fgetc(dosya);
		 	if(ch==EOF){
		 		break;
			 }
			 fputc(toupper(ch),dosya2);
			 
		 }
	 }
}

int main(){
	
	FILE *ilkDosya=fopen("deneme.txt","r");
	FILE *ikinciDosya=fopen("deneme2.txt","w");
	if(ilkDosya==NULL || ikinciDosya==NULL){
		fprintf(stderr	,"Dosyalar acilirken bir hata meydana geldi.");
		exit(0);
	}
	buyukHarfeCevir(ilkDosya,ikinciDosya);
	fclose(ilkDosya);
	fclose(ikinciDosya);
	
	return 0;
}*/

int main(){
	int i;
	char *filmListesi[5];
	char film[20];
	FILE *filmDosyasi;
	if((filmDosyasi=fopen("FilmDosyasi.txt","w"))==NULL){
		fprintf(stderr,"Dosya acilirken bir hata meydana geldi.\n");
		exit(0);
	}
	
	for(i=0;i<5;i++){
		puts("Lutfen istediginiz dizi-film adini giriniz:");
		gets(film);
		filmListesi[i]=(char*)malloc(sizeof(char)*strlen(film)+1);
		strcpy(filmListesi[i],film);
	}
	for(i=0;i<5;i++){
		fprintf(filmDosyasi,"Film-Dizi Adi:%s\n",filmListesi[i]);
	}
	fclose(filmDosyasi);
	
	return 0;
}




