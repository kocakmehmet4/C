#include<stdio.h>

/*void yazdir(int sayi,int dizi[]);
void sirala(int sayi,int dizi[]);
void doldur(int sayi,int dizi[]);
void tekrarsizDizi(int sayi,int dizi[]);

int main(){
	
	int i,sayi,j,dizi[100],count;
	printf("Lutfen dizisini olusturmak istediginiz boyutu giriniz:");
	scanf("%d",&sayi);	
	doldur(sayi,dizi);
	printf("Sirasiz dizi:");
	yazdir(sayi,dizi);
	printf("\n");
	printf("Tekrarsiz dizi:");
	tekrarsizDizi(sayi,dizi);
	printf("\n");
	printf("Sirali dizi:");
	sirala(sayi,dizi);
	yazdir(sayi,dizi);
	

	
		
	return 0;
}
void doldur(int sayi,int dizi[]){
	int i,count;
	for(i=0,
	count=0;i<sayi;i++){
		printf("dizinin %d. elemani:",count+1);
		scanf("%d",&dizi[i]);
		count++;
	}
}
void yazdir(int sayi,int dizi[]){
	int i;
		for(i=0;i<sayi;i++){
		printf("%d ",dizi[i]);
	}
	
}
void sirala(int sayi,int dizi[]){
	int i,j,kucukSayi,iKucukSayi;
	for(i=0;i<sayi;i++){
		kucukSayi=dizi[sayi-1];
		iKucukSayi=sayi-1;
		for(j=i;j<sayi;j++){
			if(dizi[j]<kucukSayi){
				kucukSayi=dizi[j];
				iKucukSayi=j;
			}
			
		}
		dizi[iKucukSayi]=dizi[i];
		dizi[i]=kucukSayi;
		
	}
}
void tekrarsizDizi(int sayi,int dizi[]){
	int i,j,kontrol=0,eleman,toplam,kontrol2,k=0;
	int yeniDizi[sayi];
	for(i=0;i<sayi;i++)
	{
		eleman=dizi[i];
		kontrol=0;
		for (j = 0; j <k; ++j)
		{
			if(eleman==dizi[j])
			{
				kontrol=1;
				break;
			}
			else{
				kontrol=0;
			}
		}
		if(kontrol==0){
			yeniDizi[i]=eleman;
			k++;
		}
		else{
			yeniDizi[i]=NULL;
		}
	}
	for (i = 0; i <sayi; ++i)
	{
		if(yeniDizi[i]!=NULL){
			printf("%d ",yeniDizi[i]);

		}
	}
}	*/

int main(int argc, char const *argv[])
{
	int i,j,satir,sutun,dizi[10][10],count=1,count2=1;

	printf("Satiri giriniz");
	scanf("%d",&satir);
	printf("Sutunu giriniz:");
	scanf("%d",&sutun);
	for (i = 0; i <satir; ++i)
	{

		for (i = 0; i <sutun; ++i)
		{
			scanf("%d",&dizi[i][j]);
			printf("%d. satir ve %d. sutun\n",count,count2);
			count2++;
		}
		count++;
		printf("\n");

	}
	int dizi2[10][10],kontrol=0,l=0,k=0;

	for (i = 0; i <satir; ++i)
	{
		kontrol=0;
		for (i = 0; i <sutun; ++i)
		{
			l=0;
			while(l<=sutun){
				if(dizi[i][j]==dizi2[k][l]){
					kontrol++;
				}
				l++;
			}
			if(kontrol==1){
				printf("%d",dizi[i][j]);
			}
		}


		printf("\n");
		k++;
	}
	return 0;
}
	















