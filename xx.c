#include<stdio.h>
#include<math.h>

int main (void){


/*int sayi,asal,toplam=0,i,j,geciciSayi,k;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	k=sayi;

	while(sayi!=0){
		for ( i = 2; i <sayi; ++i){
			if(sayi%i==0){		
				for ( j = 2; j <= i; j++){
					if(i%j==0){
						//printf("%d\n",j);
						geciciSayi=j*j;	
						if(k%geciciSayi==0 && k%j==0){
						printf("%d sayisi geciciSayidir",k);
					}
						else {
							printf("%d sayisi geciciSayi degildir",k);
						
					}

				}
					sayi/=j;
					
					
				}
			}
		
		}
	sayi/=i;
	}			*/
	
	/*int sayi=100,asal,toplam=0,i,j,geciciSayi,k,p;
	
	
	k=sayi;
	for(i=1;i<=sayi;i++){
		while(sayi!=0){
			for(j=2;j<sayi;j++){	
					if(sayi%j==0 && sayi%j*j==0){
						printf("%d\n",j*j);
					
					
				}
					
			}
			sayi/=j;
		}
	}			*/
	
	
	
	 //9 sayisi alttan sýnýr 7 üstten 11
	 
/*	int sayi,i,j,asalKontrol=0;
	int alt,ust,geciciSayi,temp;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	for(i=2;i<sayi;i++){
		asalKontrol=0;
		for(j=2;j<i;j++){
			if(i%j==0){
				asalKontrol=1;
			}
		}
		if(asalKontrol==0){
			temp=i;
		}
	}
	printf("alttan:%d\n",temp);
	
	
	for(i=sayi*2;i>sayi;i--){
		asalKontrol=0;
		for(j=2;j<i;j++){
			if(i%j==0){
				asalKontrol=1;
			}
		}
		if(asalKontrol==0){
			geciciSayi=i;
		}
	}
	printf("ustten:%d",geciciSayi);
	
*/


	/*int i,j,sayi,geciciSayi,asalKontrol=0;
	
	for(i=2;i<10;i++){
		asalKontrol=0;
		for(j=2;j<i;j++){
			if(i%j==0){
				asalKontrol=1;
			}
		}
			if(asalKontrol==0){
				int temp;
				geciciSayi=pow(2,i);
				temp=geciciSayi-1;
				
				for (j= 2; j<geciciSayi; j++){
					asalKontrol=0;
					
					if(geciciSayi%j==0){
						asalKontrol=1;
					}
					
			}
				
			if(asalKontrol==0){
						printf("%d ",temp);
					}

				
		}
	
}			*/

	//8 lik sayiyi 10 e çevirme

	/*int i,j,toplam=0,sayi,temp,geciciSayi=1;

	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	for ( i = 0; i <=sayi; ++i){

		temp=sayi;
		temp%=8;

		geciciSayi=temp*pow(10,i);
		toplam+=geciciSayi;
		
		sayi/=8;
	}
	printf("%d\n",toplam);		*/


	//10 luk sayiyi 8 e çevirme

	int i,j,toplam=0,sayi,temp,geciciSayi=1,kontrol=0;

	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);

	for (i = 0; i <=100; i++){
		kontrol=1;
		for(j=0;j<6;j++){
			temp=sayi;
			temp%=10;

			while(temp>7){
				kontrol=1;
				break;
								
			}
			
		}

		if(kontrol==0){


			geciciSayi=temp*pow(8,i);
			toplam+=geciciSayi;
		sayi/=10;
		}

	}	
	printf("%d\n",toplam);		
	


	 
		 
		

	

		
	

	return 0 ; 
}
 
