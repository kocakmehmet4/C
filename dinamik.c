#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*int main(){
    int *ptr; //baslangic adresini donebilmek icin
    ptr=(int*)malloc(sizeof(int));//baslangic adresini doner
    *ptr=15;
    int *ptr2;
    ptr2=(int*)malloc(sizeof(int));
    *ptr2=350;
    *ptr=*ptr2; //burada deger esitlemesi
    ptr=ptr2;//burada adres esitlemesi
    free(ptr2);//alani geri bosaltmak icin, tum islemler bittikten sonra alaný geri bosaltmak gerekiyor.
    printf("%#X\n",ptr);
    printf("%d\n",*ptr);
    printf("%#X\n",ptr2);
    printf("%d\n",*ptr2);
    return 0;
}*/

/*int main(){
	
	/*int dizi1[10];
	char dizi2[10];
	float dizi3[10];
	double dizi4[10];
	printf("%d byte\n",sizeof(dizi1));
	printf("%d byte\n",sizeof(dizi2));
	printf("%d byte\n",sizeof(dizi3));
	printf("%d byte\n",sizeof(dizi4));
	return 0;
	
	int elemanSayisi,i;
	printf("Lutfen kac adet eleman istediginizi giriniz:");
	scanf("%d",&elemanSayisi);
	srand(time(NULL));
	int *dizi=(int*)malloc(sizeof(int)*elemanSayisi);
	int *ptr=dizi;
	for(ptr=dizi;ptr!=dizi+elemanSayisi;ptr++){
		*ptr=rand()%100;
	}
	for(ptr=dizi;ptr!=dizi+elemanSayisi;ptr++){
		printf("%d ",*ptr);
	}
	printf("\nTersten Hali\n");
	for(ptr=dizi+elemanSayisi-1;ptr>=dizi;ptr--){
		printf("%d ",*ptr);
	}
	free(dizi);
	
	/*for(i=0;i<elemanSayisi;i++){
		dizi[i]=i;
	}
	for(i=0;i<elemanSayisi;i++){
		printf("%d\n",dizi[i]);
	}
	return 0;
}*/

/*int main(){
	
	//POINTERtoPOINTER
	
/*	int kullaniciSayisi=123;
	int *ptr=&kullaniciSayisi;
	int **ptrTOptr=&ptr;
	
	printf("%#X\n",&kullaniciSayisi);
	printf("%#X\n",ptr);
	printf("%#X\n",*ptrTOptr);
	printf("%d\n",kullaniciSayisi);
	printf("%d\n",*ptr);
	printf("%d\n",**ptrTOptr);
	
	int **ikiBoyutluDizi;
	int satirSayisi,sutunSayisi,i,j;
	srand(time(NULL));
	printf("Satir Sayisini giriniz:");
	scanf("%d",&satirSayisi);
	printf("Sutun sayisini giriniz:");
	scanf("%d",&sutunSayisi);
	ikiBoyutluDizi=(int**)malloc(sizeof(int*)*satirSayisi);
	for(i=0;i<satirSayisi;i++){
		ikiBoyutluDizi[i]=(int*)malloc(sizeof(int)*sutunSayisi);
	}
	for(i=0;i<satirSayisi;i++){
		for(j=0;j<sutunSayisi;j++){
			ikiBoyutluDizi[i][j]=rand()%100;
		}
	}
	for(i=0;i<satirSayisi;i++){
		for(j=0;j<sutunSayisi;j++){
			printf("%d ",ikiBoyutluDizi[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<satirSayisi;i++){
		free(ikiBoyutluDizi[i]);
	}
	free(ikiBoyutluDizi);
	

	return 0;
}*/
/*int main(){
	int elemanSayisi;
	puts("Lutfen eleman Sayisini giriniz:");
	scanf("%d",&elemanSayisi);
	int *dizi=(int*)calloc(elemanSayisi,sizeof(int));
	int *ptr;
	for(ptr=dizi;ptr<dizi+elemanSayisi;ptr++){
		*ptr=10;
		printf("%d ",*ptr);
	}
	puts("Eleman Sayisini kaca yukseltmek istersiniz:");
	scanf("%d",&elemanSayisi);
	dizi=realloc(dizi,elemanSayisi*sizeof(int));
	for(ptr=dizi;ptr<dizi+elemanSayisi;ptr++){
		*ptr=20;
		printf("%d ",*ptr);
	}
	free(dizi);
	
	return 0;
}*/
/*void diziyiDoldur(int *dizi,int elemanSayisi){
	int *ptr;
	srand(time(NULL));
	for(ptr=dizi;ptr<dizi+elemanSayisi;ptr++){
		*ptr=rand()%100;
	}
}
void diziyiYazdir(int *dizi,int elemanSayisi){
	int *ptr=dizi;
	for(;ptr<dizi+elemanSayisi;ptr++){
		printf("%d ",*ptr);
	}
	printf("\n");
}
void secmeliSiralama(int *dizi,int elemanSayisi){
	int *p1,*p2,*enkucukIndex;
	for(p1=dizi;p1<dizi+elemanSayisi;p1++){
		enkucukIndex=dizi+elemanSayisi-1;
		for(p2=p1;p2<dizi+elemanSayisi;p2++){
			if(*p2<*enkucukIndex){
				enkucukIndex=p2;
			}
		}
		int gecici=*enkucukIndex;
		*enkucukIndex=*p1;
		*p1=gecici;
	}
}
void ikiliArama(int *dizi,int elemanSayisi,int arananDeger){
	int *ptrSol=dizi;
	int *ptrSag=dizi+elemanSayisi-1;	
	int *ptrOrtanca;
	int bulunduMu=0;
	while(ptrSol<=ptrSag){
	
		ptrOrtanca=ptrSol+(ptrSag-ptrSol)/2;
		if(*ptrOrtanca==arananDeger){
			bulunduMu=1;
			break;
		}
		else if(*ptrOrtanca>arananDeger){
			ptrSag=ptrOrtanca-1;
		}
		else{
			ptrSol=ptrOrtanca+1;
		}
	}
	if(bulunduMu){
		printf("%d sayisi bulundu.x",arananDeger);
	}
	else{
		printf("%d sayisi bulunamadi!",arananDeger);
	}

}
int main(){
	
	int elemanSayisi,arananDeger;
	printf("Lutfen eleman sayisini giriniz:");
	scanf("%d",&elemanSayisi);
	int *dizi=(int*)malloc(sizeof(int)*elemanSayisi);
	diziyiDoldur(dizi,elemanSayisi);
	diziyiYazdir(dizi,elemanSayisi);
	secmeliSiralama(dizi,elemanSayisi);
	diziyiYazdir(dizi,elemanSayisi);
	printf("Lutfen aramak istediginiz degeri giriniz:");
	scanf("%d",&arananDeger);
	ikiliArama(dizi,elemanSayisi,arananDeger);
	return 0;
}*/
/*void diziyiDoldur(int *dizi,int elemanSayisi){
	int *ptr;
	srand(time(NULL));
	for(ptr=dizi;ptr<dizi+elemanSayisi;ptr++){
		*ptr=rand()%100;
	}
}
void diziyiYazdir(int *dizi,int elemanSayisi){
	int *ptr;
	for(ptr=dizi;ptr<dizi+elemanSayisi;ptr++){
		printf("%d ",*ptr);
	}
	printf("\n");
}
void secmeliSirala(int *dizi,int elemanSayisi){
	int *ptr1,*ptr2,*enKucuk;
	for(ptr1=dizi;ptr1<dizi+elemanSayisi;ptr1++){
		enKucuk=dizi+elemanSayisi-1;
		for(ptr2=ptr1;ptr2<dizi+elemanSayisi;ptr2++){
			if(*enKucuk>*ptr2){
				enKucuk=ptr2;
			}
		}
		int gecici=*enKucuk;
		*enKucuk=*ptr1;
		*ptr1=gecici;
	}	
}
void ikiliSiralama(int*dizi,int elemanSayisi,int arananDeger){
	int *ptrSol=dizi;
	int *ptrSag=dizi+elemanSayisi-1;
	int *ptrOrtanca;
	int bulunduMu=0;
	while(ptrSol<=ptrSag){
		ptrOrtanca=ptrSol+(ptrSag-ptrSol)/2;
		if(*ptrOrtanca==arananDeger){
			bulunduMu=1;
			break;
		}
		else if(*ptrOrtanca>arananDeger){
			ptrSag=ptrOrtanca-1;
		}
		else{
			ptrSol=ptrOrtanca+1;
		}
	}
	if(bulunduMu){
		printf("%d sayisi bulundu.",arananDeger);
	}
	else{
		printf("%d sayisi bulunamadi!",arananDeger);
	}
}
int main(){
	
	int elemanSayisi,arananDeger;
	printf("Lutfen eleman Sayisini giriniz:");
	scanf("%d",&elemanSayisi);
	int *dizi=(int*)malloc(sizeof(int)*elemanSayisi);
	diziyiDoldur(dizi,elemanSayisi);
	diziyiYazdir(dizi,elemanSayisi);
	secmeliSirala(dizi,elemanSayisi);
	diziyiYazdir(dizi,elemanSayisi);
	puts("Lutfen aramak istediginiz degeri giriniz:");
	scanf("%d",&arananDeger);
	ikiliSiralama(dizi,elemanSayisi,arananDeger);
	
	return 0;
}*/

/*void diziyiDoldur(int **ikiboyutlu,int elemanSayisi,int sutunSayisi){
	int i,j;
	srand(time(NULL));
	for(i=0;i<elemanSayisi;i++){
		for(j=0;j<sutunSayisi;j++){
			ikiboyutlu[i][j]=rand()%100;
		}
	}
}
void diziyiYazdir(int **ikiboyutlu,int elemanSayisi,int sutunSayisi){
	int i,j;
	for(i=0;i<elemanSayisi;i++){
		for(j=0;j<sutunSayisi;j++){
			printf("%d ",ikiboyutlu[i][j]);
		}
		printf("\n");
	}
}
void matrisToplam(int **ilkMatris,int **ikinciMatris,int **sonucMatris,int satir,int sutun ){
	int i,j;
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			sonucMatris[i][j]=ilkMatris[i][j]+ikinciMatris[i][j];
		}
	}
}
void birimMatris(int satirSayisi,int sutunSayisi){
	int i,j;
	int **birim=(int**)calloc(satirSayisi,sizeof(int*));
	for(i=0;i<satirSayisi;i++){
		birim[i]=(int*)calloc(sutunSayisi,sizeof(int));
	}
	puts("birim Matris olmadan onceki hali:");
	diziyiYazdir(birim,satirSayisi,sutunSayisi);
	for(i=0;i<satirSayisi;i++){
		for(j=0;j<sutunSayisi;j++){ 
			if(j==i){
				birim[i][j]=1;
			}
		}
	}
	puts("birim Matris olusturulmus hali:");
	diziyiYazdir(birim,satirSayisi,sutunSayisi);
	for(i=0;i<satirSayisi;i++){
		free(birim[i]);
	}
	free(birim);
}
void transpozYazdir(int **ikiboyutluDizi,int satirSayisi,int sutunSayisi){
	int i,j;
	for(i=0;i<satirSayisi;i++){
		for(j=0;j<sutunSayisi;j++){
			printf("%d ",ikiboyutluDizi[j][i]);
		}
		printf("\n");
	}
}

int main(){
	int satir,sutun,i;
	puts("Lutfen satir sayisini giriniz:");
	scanf("%d",&satir);
	puts("Lutfen sutun sayisini giriniz:");
	scanf("%d",&sutun);
	int **ilkMatris,**ikinciMatris,**sonucMatris;
	ilkMatris=(int**)malloc(sizeof(int*)*satir);
	ikinciMatris=(int**)malloc(sizeof(int*)*satir);
	sonucMatris=(int**)calloc(satir,sizeof(int*));
	for(i=0;i<satir;i++){
		ilkMatris[i]=(int*)malloc(sizeof(int*)*sutun);
		ikinciMatris[i]=(int*)malloc(sizeof(int*)*sutun);
		sonucMatris[i]=(int*)calloc(sutun,sizeof(int));
	}
	diziyiDoldur(ilkMatris,satir,sutun);
	diziyiDoldur(ikinciMatris,satir,sutun);
	printf("Ilk matris:\n");
	diziyiYazdir(ilkMatris,satir,sutun);
	printf("\nIkinci matris:\n");
	diziyiYazdir(ikinciMatris,satir,sutun);
	puts("\nToplam Matrisinin toplamadan onceki hali:");
	diziyiYazdir(sonucMatris,satir,sutun);
	matrisToplam(ilkMatris,ikinciMatris,sonucMatris,satir,sutun );
	puts("\nToplam Matrisinin toplamadan sonraki hali:");
	diziyiYazdir(sonucMatris,satir,sutun);
	birimMatris(satir,sutun);
	puts("\nTranspoz Matris:");
	transpozYazdir(ilkMatris,satir,sutun);
	for(i=0;i<satir;i++){
		free(ilkMatris[i]);
		free(ikinciMatris[i]);
		free(sonucMatris[i]);
	}
	free(ilkMatris);
	free(ikinciMatris);
	free(sonucMatris);
	
	return 0;
}*/

/*int anagramKontrol(char *str,char *str2){
	int i;
	char *ptr=str;
	char *ptr2=str2;
	if(strlen(str)!=strlen(str2)){
		return 0;
	}
	int *frekans1=(int*)calloc(26,sizeof(int));
	int *frekans2=(int*)calloc(26,sizeof(int));
	while(*ptr!='\0' && *ptr2!='\0'){
		int indeks=*ptr-'a';
		frekans1[indeks]+=1;
		indeks=*ptr2-'a';
		frekans2[indeks]+=1;
		ptr++;
		ptr2++;
	}
	for(i=0;i<26;i++){
		if(frekans1[i]!=frekans2[i])
			return 0;
	}
	return 1;

}

int main(){
	char kullaniciGirisi[100];
	char kullaniciGirisi2[100];
	puts("Lutfen ilk stringi giriniz:");
	gets(kullaniciGirisi);
	puts("Lutfen ikinci stringi giriniz:");
	gets(kullaniciGirisi2);
	
	int sonuc=anagramKontrol(kullaniciGirisi,kullaniciGirisi2);
	if(sonuc!=0){
		printf("%s ve %s stringleri birbirlerinin anagramidir.",kullaniciGirisi,kullaniciGirisi2);
	}
	else{
		printf("Anagram degillerdir.");
	}
	return 0;
}*/

/*void diziyiDoldur(int satirSayisi,int sutunSayisi,int **ptr){
	int i,j;
	for(i=0;i<satirSayisi;i++){
		for(j=0;j<sutunSayisi;j++){
			printf("%d. satir %d. sutun:",i+1,j+1);
			scanf("%d",&ptr[i][j]);
		}
	}
	printf("\n");
}
void diziyiYazdir(int satirSayisi,int sutunSayisi,int **ptr){
	int i,j;
	for(i=0;i<satirSayisi;i++){
		for(j=0;j<sutunSayisi;j++){
			printf("%d ",ptr[i][j]);
		}
		printf("\n");
	}
}
int simetrikDizi(int satirSayisi,int sutunSayisi,int **ptr){
	int i,j;
	for(i=0;i<satirSayisi;i++){
		for(j=0;j<sutunSayisi;j++){
			if(ptr[j][i]!=ptr[i][j]){
				return 0;
				
			}
		}
	}
	return 1;
}
void negatifeCevir(int satirSayisi,int sutunSayisi,int **ptr){
	int i,j;
	for(i=0;i<satirSayisi;i++){
		for(j=0;j<sutunSayisi;j++){
			ptr[i][j]*=-1;
		}
	}
}
void toplamMatris(int satirSayisi,int sutunSayisi,int **ptr,int **ptr2,int **sonucMatris){
	int i,j;
	for(i=0;i<satirSayisi;i++){
		for(j=0;j<sutunSayisi;j++){
			sonucMatris[i][j]=ptr[i][j]+ptr2[i][j];
		}
	}
}
int main(){
	
	int satirSayisi,sutunSayisi,i,j;
	puts("Lutfen satir sayisini giriniz:");
	scanf("%d",&satirSayisi);
	puts("Lutfen sutun sayisini giriniz:");
	scanf("%d",&sutunSayisi);
	int **ikiBoyutluMatris=(int**)malloc(sizeof(int*)*satirSayisi);
	int **ikiBoyutluMatris2=(int**)malloc(sizeof(int*)*satirSayisi);
	int **sonucMatris=(int**)malloc(sizeof(int*)*satirSayisi);
	for(i=0;i<satirSayisi;i++){
		ikiBoyutluMatris[i]=(int*)malloc(sizeof(int)*sutunSayisi);
		ikiBoyutluMatris2[i]=(int*)malloc(sizeof(int)*sutunSayisi);
		sonucMatris[i]=(int*)malloc(sizeof(int)*sutunSayisi);
	}
	diziyiDoldur(satirSayisi,sutunSayisi,ikiBoyutluMatris);
	diziyiDoldur(satirSayisi,sutunSayisi,ikiBoyutluMatris2);
	diziyiYazdir(satirSayisi,sutunSayisi,ikiBoyutluMatris);
	printf("\n");
	negatifeCevir(satirSayisi,sutunSayisi,ikiBoyutluMatris2);
	toplamMatris(satirSayisi,sutunSayisi,ikiBoyutluMatris,ikiBoyutluMatris2,sonucMatris);
	diziyiYazdir(satirSayisi,sutunSayisi,sonucMatris);


	int sonuc=simetrikDizi(satirSayisi,sutunSayisi,sonucMatris);
	if(sonuc){
		printf("Dizi simetrik dizidir.");
	}
	else{
		printf("Dizi simetrik degildir.");
	}
	
	
	for(i=0;i<satirSayisi;i++){
		free(ikiBoyutluMatris[i]);
		free(ikiBoyutluMatris2[i]);
		free(sonucMatris[i]);
	}
	free(ikiBoyutluMatris);
	free(ikiBoyutluMatris2);
	free(sonucMatris);
	return 0;
}*/
void diziyiDoldur(int elemanSayisi,int *dizi){
	int i;
	srand(time(NULL));
	for(i=0;i<elemanSayisi;i++){
		dizi[i]=rand()%100;
	}
}
void diziyiYazdir(int elemanSayisi,int *dizi){
	int i;
	for(i=0;i<elemanSayisi;i++){
		printf("%d ",dizi[i]);
	}
}
void arayaSokma(int elemanSayisi,int *dizi){
	int *p1,*p2,arayaSokulacakEleman;
	for(p1=dizi+1;p1<dizi+elemanSayisi;p1++){
		arayaSokulacakEleman=*p1;
		for(p2=p1-1;p2>=dizi && arayaSokulacakEleman<=*p2;p2--){
			*(p2+1)=*p2;
		}
		*(p2+1)=arayaSokulacakEleman;
	}
}
int main(){
	int elemanSayisi,i;
	puts("Lutfen eleman sayisini giriniz:");
	scanf("%d",&elemanSayisi);
	int *dizi=(int*)malloc(sizeof(int)*elemanSayisi);
	diziyiDoldur(elemanSayisi,dizi);
	printf("Sirasiz Hali:\n");
	diziyiYazdir(elemanSayisi,dizi);
	arayaSokma(elemanSayisi,dizi);
	printf("\nSirali Hali:\n");
	diziyiYazdir(elemanSayisi,dizi);
	return 0;
}

























