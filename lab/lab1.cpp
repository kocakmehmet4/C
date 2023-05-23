#include<stdio.h>

int main (void){
	
/*	
	int max,min,temp;
	int sayi1,sayi2,sayi3;
	printf("lutfen 5 tam sayi giriniz:");
	scanf("%d%d%d%d%d",&max,&min,&sayi1,&sayi2,&sayi3);
	
	if(max<min){
		temp=max;
		max=min;
		min=temp;	
	}	
	if(sayi1>max)
		max=sayi1;
	if(sayi1<min)
		min=sayi1;
	if(sayi2>max)
		max=sayi2;
	if(sayi2<min)
		min=sayi2;
	if(sayi3>max)
		max=sayi3;
	if(sayi3<min)
		min=sayi3;
		
	printf("Max:%d\n",max);
	printf("Min:%d\n",min);			*/
	
	/*
	
	float litre,kilometre,toplamLitre, toplamKilometre, ortalama;
	
	printf("litre miktarini giriniz:(cikis icin -1)\n");
	scanf("%f",&litre);
		
	while(litre !=-1){
		toplamLitre+=litre;
		printf("gidecegi mesafeyi giriniz:\n");
		scanf("%f",&kilometre);
		
		toplamKilometre+=kilometre;
		
		printf("kilometre nin litreye orani :%f\n",kilometre/litre);
		printf("litre miktarini giriniz:(cikis icin -1)\n");
		scanf("%f",&litre);
		
		
		
	}
	ortalama= toplamKilometre/toplamLitre;
	printf("toplam:%f",ortalama);
	*/
	
	
	/*
	int yol,mazot;
	int toplamYol,toplamMazot;
	float ortalama;
	
	printf("Mazot girin(cikis icin -1):");
	scanf("%d",&mazot);
	
	
	while(mazot!=-1){
		toplamMazot+=mazot;
		printf("yol:");
		scanf("%d",&yol);
		toplamYol+=yol;	
			
		printf("Mazot girin(cikis icin -1):");
		scanf("%d",&mazot);
	}
	
	ortalama= (float) toplamYol/toplamMazot;
	printf("ortalama:%f",ortalama);
	*/
	
	
	
/*	float mazot,yol;
	float toplamMazot,toplamYol;
	float ortalama;	
	while(1){
		printf("Mazot:");
		scanf("%f",&mazot);
		if(mazot==-1){
			break;	
		}
		printf("Yol:");
		scanf("%f",&yol);
		
		toplamMazot+=mazot;
		toplamYol+=yol;
		ortalama=toplamYol/toplamMazot;	
	}
	printf("ortalama:%f\n",ortalama);			*/
	
	
/*	float mazot,yol,toplamMazot,toplamYol,ortalama;
	
	while(1){
		
		printf("Mazot:(Cikmak icin -1)");
		scanf("%f",&mazot);
		if(mazot==-1){
			break;	
		}
		toplamMazot+=mazot;
		
		printf("yol:");
		scanf("%f",&yol);
		toplamYol+=yol;
		ortalama=toplamYol/toplamMazot;
		
	}
	printf("ortalama:%f",ortalama);        */
	
	
	
/*	float mazot,yol,toplamMazot,toplamYol,ortalama;
	
	printf("Lutfen mazot miktarini giriniz:");
	scanf("%f",&mazot);
	
	while(mazot !=-1){
		toplamMazot+=mazot;
		printf("gideceginiz yol miktari:");
		scanf("%f",&yol);
		toplamYol+=yol;
		printf("Lutfen mazot miktarini giriniz:");
		scanf("%f",&mazot);
		ortalama= toplamYol/toplamMazot;
		
	}
	printf("ortalama:%f",ortalama);      */
	
/*	int sayac=0, sayi=0,enbuyukSayi=0,enkucukSayi=0,sayiNumarasi=1;
	
	while(sayac<5){
		printf("%d. sayiyi giriniz:",sayiNumarasi);
		scanf("%d",&sayi);
		
		sayac++;
		sayiNumarasi++;
		
		if(sayac==1)
		{
			enbuyukSayi=sayi;
			enkucukSayi=sayi;
		}
		else
		{
			if(sayi>=enbuyukSayi)
				enbuyukSayi=sayi;
			
			if(sayi<=enkucukSayi)
				enkucukSayi=sayi;			
		}
	}
	printf("Girilen en buyuk sayi:%d \n",enbuyukSayi);
	printf("Girilen en kucuk sayi:%d \n",enkucukSayi);  */
	
/*	int sayac=0,enkucukSayi=0,enbuyukSayi=0,sayi=0,sayici=1;
	
	while(5>sayac){
		printf("%d. sayiyi giriniz:",sayici);
		scanf("%d",&sayi);
		sayac++;
		sayici++;
		
		if(sayac==1){
			enbuyukSayi=sayi;
			enkucukSayi=sayi;
		}
		else{
			if(sayi>=enbuyukSayi)
				enbuyukSayi=sayi;
			if(sayi<=enkucukSayi)
				enkucukSayi=sayi;	
			
		}
			
	}
	printf("Girilen en buyuk sayi:%d\n",enbuyukSayi);
	printf("Girilen en kucuk sayi:%d\n",enkucukSayi);		*/
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
