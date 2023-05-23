#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main (void){
		
/*	int sayiDizisi[10];
	int i;
	
	for(i=0; i<10; i++){
		
		sayiDizisi[i]=pow(i,2);
		printf("%d. sayi %d'dir.\n",i+1,sayiDizisi[i]);
		
	}*/
	
/*	int sayiDizisi[10];
	int i,toplam=0,enBuyuk,enKucuk;
	int kullaniciGirisi;
	
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&kullaniciGirisi);
	
	srand(time(NULL));
	float ortalama=0;
	
	
	
	
	
	
	for(i=0; i<10; i++){
		sayiDizisi[i]=rand()%100;
		printf("%d ",sayiDizisi[i]);
	
	}
	
	printf("\n");
	enBuyuk=sayiDizisi[0];
	enKucuk=sayiDizisi[0];
	for(i=0; i<10; i++){
		
		if(enBuyuk<sayiDizisi[i]){		
	  		enBuyuk=sayiDizisi[i];
		}
		if(enKucuk>sayiDizisi[i]){
			enKucuk=sayiDizisi[i];
		}	
		toplam+=sayiDizisi[i];
		printf("%d. eleman eklendi yeni sonuc:%d\n",i+1,toplam);
		
		if(sayiDizisi[i]%kullaniciGirisi==0)
			printf("%d sayisi kullancinin girdigi sayinin katidir\n",sayiDizisi[i]);
		
	}
	ortalama=(float)toplam/10;
	printf("ortalama:%.2f\n",ortalama);
	printf("En buyuk sayi:%d\n",enBuyuk);
	printf("En kucuk sayi:%d\n",enKucuk);				*/
	
/*	int ikiBoyutluDizi[10][10];
	int i,j;	*/
	
	
	
	
	/*	A01 A02 A03 ... A09
		A12 A12 A13 ... A19
		A23 A22 A23 ... A29
				.
				.
				.
		A91 A92 A93 ... A99 */
	
  /*for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			ikiBoyutluDizi[i][j]=i*j;
			
		}
	}
			for(i=0; i<10; i++){
			for(j=0; j<10; j++){
		printf("%d ",ikiBoyutluDizi[i][j]);
	}
	printf("\n");
		}*/
		
/*	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			if(j%2==0){
				ikiBoyutluDizi[i][j]=1;
			}
			else{
				ikiBoyutluDizi[i][j]=0;
			}
			
		}
	}
		for(i=0; i<10; i++){
			for(j=0; j<10; j++){
		printf("%d ",ikiBoyutluDizi[i][j]);
	}
	printf("\n");
}				*/

/*	int i,j,toplamSatir,toplamSutun,ilkMatris[5][5],ikinciMatris[5][5],toplamMatris;
	srand(time(NULL));
	
	printf("1.Matris:\n\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			ilkMatris[i][j]=rand()%10;
			ikinciMatris[i][j]=rand()%10;
			printf("%d\t",ilkMatris[i][j]);
			
			
			
		}
		printf("\n");
			
	}
	printf("\n2.Matris:\n\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
		printf("%d\t",ikinciMatris[i][j]);
			
		}
	printf("\n");		
}
	printf("Toplam Matris:\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			toplamMatris=ilkMatris[i][j]+ikinciMatris[i][j];
			printf("%d\t",toplamMatris);
	}
	printf("\n");
}		*/

 	/*	int i,j,ilkMatris[5][5],transpozMatris[5][5];
 		srand(time(NULL));
	printf("Matris:\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			ilkMatris[i][j]=rand()%10;
			printf("%d\t",ilkMatris[i][j]);
	}
	
	printf("\n");
}

	printf("\n\n");
	printf("Transpoz Matris:\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			transpozMatris[i][j]=ilkMatris[j][i];
			printf("%d\t",transpozMatris[i][j]);
		}
		printf("\n");
	}					*/
	
	
/*	int dizi[10],i,j=0,Adeger;
	
	srand(time(NULL));	
	printf("Dizi:\n");
	for(i=0; i<10; i++){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	printf("\nLutfen aranan bir deger giriniz:");
	scanf("%d",&Adeger);
	for(i=0; i<10; i++){
		if(dizi[i]==Adeger){
			j=1;
		}		
	}
	if(j){
		printf("Degeriniz bulundu!");
	}
	else{
		printf("Degeriniz bulunmadi!");
	}			*/
	
/*	int dizi[10],i,j,eleman;
	
	srand(time(NULL));	
	printf("Dizi:\n\n");
	for(i=0; i<10; i++){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	
	printf("\n\n");
	printf("Sirali dizi:\n\n");
	for(i=1; i<10; i++){
		eleman=dizi[i];
		for(j=i-1; j>=0 && eleman<=dizi[j];j--){
		dizi[j+1]=dizi[j];	
		}
		dizi[j+1]=eleman;
		
	}
	for(i=0; i<10; i++){
		printf("%d ",dizi[i]);
	
}	*/

/*	int dizi[10],i,j,eleman;
	srand(time(NULL));
	printf("Dizi:\n\n");
	
	for(i=0; i<10;i++){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	printf("\n");
	printf("Sirali Dizi:\n\n");
	for(i=1;i<10;i++){
		eleman=dizi[i];
		for(j=i-1;j>=0 && eleman<=dizi[j];j--){
			dizi[j+1]=dizi[j];
		}
		dizi[j+1]=eleman;
	}
	for(i=0; i<10;i++){
		printf("%d ",dizi[i]);
}							*/


/*	int dizi[10],i,j;
	srand(time(NULL));
	printf("Dizi:\n\n");
	for(i=0;i<10;i++){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	printf("\n");
	for(i=0;i<9;i++){
		for(j=0;j<9-i;j++){
			if(dizi[j]>dizi[j+1]){
				int gecici=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=gecici;
			}
			
		}
		
	}
	printf("Sirali dizi\n");
	
		for(i=0;i<10;i++){
		printf("%d ",dizi[i]);
	}	*/
	
	int ilkDizi[5][5],ikinciDizi[5][5],i,j,toplam=0;
	int CarpiMatris[5][5],k;
	
	srand(time(NULL));
	printf("ilk Matrisi:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			ilkDizi[i][j]=rand()%10;
			printf("%d\t",ilkDizi[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	printf("ikinci Matrisi:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			ikinciDizi[i][j]=rand()%10;
			printf("%d\t",ikinciDizi[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	printf("Carpim Matrisi:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			toplam=0;
			for(k=0;k<5;k++){
			toplam+=ilkDizi[i][k]*ikinciDizi[k][j];
		}
		CarpiMatris[i][j]=toplam;
			printf("%d\t",CarpiMatris[i][j]);
	}
		printf("\n");
	}
		
		
	
	
	
	
	
	
	
	
	
		
			
			
			
			
	
	
	
	
	
	
	return 0 ;
}
