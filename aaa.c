#include<stdio.h>
#include<math.h>


int main (void){
		
		
	// Asal bölenlerin toplamý asal olan sayýlara Toplamasal sayi denir  ör 210
	/*	int i,j,toplam=0,sayi,asalKontrol=0,geciciSayi;
		
		printf("Lutfen bir sayi giriniz:");
		scanf("%d",&sayi);
		geciciSayi=sayi;
		for(i=2;i<=sayi;i++){
			
			for(j=2;j<=i;j++){
				
				if(sayi%j==0){
				//printf("%d\n",j);
				sayi/=j;
				toplam+=j;
			}
						
			
		}
			
	}	
		printf("%d sayisi asal oldugundan\n",toplam);
		for(i=2;i<toplam;i++){
			if(toplam%i==0){
				asalKontrol=1;
			}
		}
		if(asalKontrol==0){
			printf("%d sayisi Toplamasal sayidir.",geciciSayi);
		}
		else{
			printf("%d sayisi toplamasal degildir.",geciciSayi);
		} */
	
		
		//Bir sayinin tüm pozitif bölenleri (kendisi hariç) toplami kendisinden buyukse zengin sayidir  ör 24
		
		/*int i,j,toplam,geciciSayi,sayi;
		
		printf("Lutfen bir sayi giriniz:");
		scanf("%d",&sayi);
		geciciSayi=sayi;
	
		for(i=2;i<sayi;i++){
			if(sayi%i==0){
				toplam+=i;
			}
			
		}
		if(toplam>geciciSayi){
			printf("%d sayisi zengin sayidir.",geciciSayi);
		}
		else{
			printf("%d sayisi zengin sayi degildir.",geciciSayi);
		}		*/
		
		
		
		
	/*	int toplam=0,i,j,geciciSayi=100;	
	for(j=1;j<100;j++){
		
		toplam=0;
		for(i=2;i<j;i++){
			
				if(j%i==0){
					toplam+=i;
				}
				
			}
			if(toplam>j){
				printf("%d sayisi zengin sayidir.\n",j);
			}
			else{
				printf("%d sayisi zengin sayi degildir.\n",j);
			}
	}				*/
	
	//Kendisinin dýþýndaki farklı en büyük 3 pozitif tamsayý böleninin 
	//toplamýna eþit olan sayýlara “Yarý Mükemmel Sayý” denir. Örneðin; 18 sayýsý.
	
	/*int i,j,sayi,toplam=0,Kontrol=0;
	
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	for(i=sayi-1;i>=1;i--){
		if(sayi%i==0){
			printf("%d ",i);
			toplam+=i;
			if(Kontrol!=3){
				Kontrol++;
				if(toplam==sayi){
				printf("\n%d sayisi yari Mukemmel sayidir.\n",sayi);
					
				}
				
			}
				
				
			}
		}		*/
		
		
		
		
	/*	int i,j,sayi=105,toplam=0,asalKontrol=0;
	
	for(j=2;j<sayi;j++){
		toplam=0;
		asalKontrol=0;
		
		for(i=j-1;i>=1;i--){
			if(j%i==0){
			//	printf("%d ",i);
				toplam+=i;
				if(asalKontrol!=3){
					asalKontrol++;
					if(toplam==j){
					printf("\n%d sayisi yari Mukemmel sayidir.\n",j);
						
					}
					
				}
					
					
				}
			}
			printf("\n");	
	}			*/
		
		
		//Kaprekar sayilar------>
		
	/*	int sayi=100,i,j,toplam=0,geciciSayi,basamak=0,k;
		
		printf("Lutfen bir sayi giriniz:");
		scanf("%d",&j);
	//	for(i=1;i<sayi;i++){
			basamak=0;
			k=j;	
			while(k!=0){
				geciciSayi=k;
				geciciSayi%=10;
				k/=10;
				basamak++;
			}
			//printf("%d\n",basamak);
			
			geciciSayi=j*j;
			sayi=j*j;
			if(basamak==2){
				geciciSayi%=100;
				sayi/=100;
				toplam=sayi+geciciSayi;
				if(toplam==j)
				printf("%d sayisi Kaprekar sayidir",toplam);
				else{
				printf("%d sayisi Kaprekar sayi degildir.",toplam);
			}
				
			}	
			else if(basamak==3){
				geciciSayi%=1000;
				sayi/=1000;
				toplam=sayi+geciciSayi;
				if(toplam==j)
				printf("%d sayisi Kaprekar sayidir",toplam);
				else{
				printf("%d sayisi Kaprekar sayi degildir.",toplam);
			}
			}
			else if(basamak==4){
				geciciSayi%=10000;
				sayi/=10000;
				toplam=sayi+geciciSayi;
				if(toplam==j)
				printf("%d sayisi Kaprekar sayidir",toplam);
				else{
				printf("%d sayisi Kaprekar sayi degildir.",toplam);
			}
			}
			else{
				printf("%d sayisi Kaprekar sayi degildir.",toplam);
			}		*/
	
			
	//} 	
	
	
		
	/*	int sayi=100,i,j,toplam=0,geciciSayi,basamak=0,k,temp;
		
		printf("Lutfen bir sayi giriniz:");
		scanf("%d",&sayi);
		k=sayi;	
		
			while(k!=0){
				k/=10;
				basamak++;
			}	
			
				for(i=1;i<=basamak;i++){
					j*=10;
				}
				geciciSayi=sayi*sayi;
				temp=geciciSayi%j;
				geciciSayi/=j;
				toplam=temp+geciciSayi;
				
				//printf("%d",toplam);
				if(toplam==sayi){
					printf("%d sayisi Kaprekar sayidir",sayi);
					
				}
				else{
					printf("%d sayisi Kaprekar sayi degildir",sayi);
				}	*/
				
				
				
				
	/*	int sayi=100,i,j=1,toplam=0,geciciSayi,basamak=0,k,temp,p;
		
	
		
		for(p=1;p<10000;p++){
			k=p;	
			toplam=0;
			basamak=0;
			j=1;
			while(k!=0){
				k/=10;
				basamak++;
			}	
			
				for(i=1;i<=basamak;i++){
					j*=10;
				}
				geciciSayi=p*p;
				temp=geciciSayi%j;
				geciciSayi/=j;
				toplam=temp+geciciSayi;
				
				if(toplam==p){
					printf("%d\n",p);
					
				}
			
		}			*/
		
		/*int i,j,toplam=0,k,basamak,geciciSayi,temp,kat;
			
		for(i=1;i<100;i++){
			toplam=0;
			k=i;
			basamak=0;
			kat=1;
			while(k!=0){
				k/=10;
				basamak++;
			}
			for(j=1;j<=basamak;j++){
				kat*=10;
			}	
			geciciSayi=i*i;
			temp=geciciSayi%kat;
			geciciSayi/=kat;
			toplam=temp+geciciSayi;	
			
				if(toplam==i){
			printf("%d\n",i);
		}
		}*/
	
		
			
			
			
			
		
		
	
	
		
		
	
	
		
		
		
		
		
		
	
	
	
	
		
		
		
		
	

	
	


		
		return 0 ;		
}
