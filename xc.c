#include<stdio.h>
#include<math.h>

int main (void){
	
	/*int sayi,i,j,geciciSayi,asalKontrol1=0,temp=0,asalKontrol2=0,basamakKontrol=1;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	j=sayi;
	for(i=2;i<sayi;i++){
		if(sayi%i==0){
			asalKontrol1=1;
			//printf("%d\n\n",i);
		}	
		basamakKontrol=1;
		while(sayi!=0){
			geciciSayi=sayi;
			
			geciciSayi%=10;
			temp+=geciciSayi*pow(10,basamakKontrol);
			basamakKontrol--;
			sayi/=10;
				for(i=2;i<sayi;i++){
					if(sayi%i==0){
					asalKontrol2=1;
				}
					
			}
			
		}
	}
	/*if(asalKontrol1==0){
		printf("%d Sayisi asal bir sayidir\n",j);	
	}

	printf("%d ",temp);
	
    if(temp==j){
		printf("Bu sayilar birbirine esit oldugundan lassa sayi degildir.");
	}
	else if(asalKontrol2==0 && asalKontrol1==0){
		printf("bu sayilar lassa sayilaridir(%d ve %d)",j,temp);
	}	

	else{
		printf("bu sayilar lassa sayi degildir.");
	}																			*/	
	
	/*int i,j,sayi,asalKontrol1=0,geciciSayi,asalKontrol2=0,asal=0;
	
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	geciciSayi=sayi;
	geciciSayi+=2;
	for(i=2;i<sayi;i++){
		if(sayi%i==0){
			asalKontrol1=1;
		}
	    if(geciciSayi%i==0){
	    	asalKontrol2=1;
			
		}
	}
	
	geciciSayi=sayi;
	geciciSayi+=2;
	for(i=2;i<geciciSayi;i++){
		if(geciciSayi%i==0){
			
			for(j=2;j<i;j++){
				if(j%i==0){
					asalKontrol2=1;
					
				}
			}
			if(asalKontrol1==0){
				if(asalKontrol2==1)
				printf("%d ",j);
				asal++;
				
			}
			
		}
		
	}
	if(asalKontrol1==0 && asalKontrol2==0){
		if(asal<=2){
		printf("\n%d sayisi ve %d chen sayidir.\n",sayi,geciciSayi);
	}		
		
		
	}
	else{
		printf("\n%d sayisi ve %d chen sayi degildir.",sayi,geciciSayi);
	}*/
		
	
/*	int sayi,i,geciciSayi,temp,kontrol=0;
	int kontrol2=0,x,asal=0;
	
	printf("Bir sayi giriniz:");							//Chen asali
	scanf("%d",&sayi);
	geciciSayi=sayi;
	
	for(i=2;i<geciciSayi;i++){
		if(geciciSayi%i==0){
			kontrol++;
		}
	}
	if(kontrol>0){
		printf("%d sayisi asal degildir.",sayi);
	}
	if(kontrol==0){
		temp=geciciSayi;
		temp+=2;
		
		for(i=2;i<temp;i++){
			if(temp%i==0){
				kontrol2++;
			}	
		}
		if(kontrol2==0){
			printf("%d sayisi ile %d sayisi Chen asalidir.",sayi,temp);
		}
		if(kontrol2>0){
			x=temp;
			for(i=2;i<=x;i++){
				while(x%i==0){
					printf("%d sayisinin carpanlari:%d\n",temp,i);
					x/=i;
					asal++;
				}	
			}
			if(asal<=2){
				printf("%d sayisi ile %d sayisi Chen asalidir.",sayi,temp);
			}
			if(asal>2){
				printf("%d sayisi ile %d sayisi Chen asali degildir.",sayi,temp);
			}
		}
	}			*/
	
	
	
	
	
			
	
	
	
	return 0 ;
}
