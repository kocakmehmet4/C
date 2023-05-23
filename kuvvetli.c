#include<stdio.h>

int main (void){
	
	/*int gucluSayi,geciciSayi,toplam=0,i,j=3,dizi[10];

printf("Lutfen bir sayi giriniz");
scanf("%d",&gucluSayi);

j=3;
for ( i = 2; i <gucluSayi; i++){

	if(gucluSayi%i==0){
		dizi[i]=i*i;
		if(gucluSayi%j==0){
			dizi[i+1]=j*j;
			j++;
		}
		

		if(gucluSayi%(dizi[i])==0 && gucluSayi%dizi[i+1]==0){
		printf("%d bu gucluSayi'dir%d\n",dizi[i],dizi[i+1]);
	}
		gucluSayi/=i;
		if (gucluSayi%dizi[i]!=0){

		}
	
			145 5!+4!+1!
	}
}										*/
	

	/*int fak=1,i,j,toplam=0,basamak,sayi,geciciSayi;
	printf("Lutfen sayi giriniz:");
	scanf("%d",&sayi);
		geciciSayi=sayi;
	while(geciciSayi!=0){
		
		basamak=geciciSayi%10;
		fak=1;
		while(basamak>0){
			
			fak*=basamak;
			basamak--;
			
		}
		toplam+=fak;
		geciciSayi/=10;	
	}
	if(toplam==sayi)
		printf("Organize sayidir.");
	else
		printf("Organize sayi degildir.");
		*/
		
	/*int faktor=1,sayi=100000,geciciSayi,toplam=0,i,j,basamak;
	
	
	for(i=1; i<sayi; i++){
		geciciSayi=i;
		toplam=0;
		while(geciciSayi!=0){
			basamak=geciciSayi%10;
			faktor=1;
			while(basamak>0){
				faktor*=basamak;
				basamak--;
			
			}
			toplam+=faktor;
			geciciSayi/=10;
		}
		if(toplam==i){
			printf("%d sayisi bulundu.\n",i);
		}
	
}		*/

	/*int faktor=1,sayi,toplam=0,i,j,geciciSayi,basamak;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	geciciSayi=sayi;

	while (geciciSayi!=0){
		basamak=geciciSayi%10;
		faktor=1;
		while(basamak>0){
			faktor*=basamak;
			basamak--;
		}
		toplam+=faktor;
		geciciSayi/=10;
	}
	if (toplam==sayi)
	{
		printf("Bu sayisi Organize sayidir");
	}
	else
	{
		printf("Bu sayisi Organize sayi degildir");
	} 	*/



	/*int faktor=1,geciciSayi,sayi=100000,toplam=0,basamak,i,j;

	for (i = 1; i < sayi; i++){
		geciciSayi=i;
		toplam=0;
		
		while(geciciSayi!=0){

			basamak=geciciSayi%10;
			faktor=1;
		

			for (j = basamak;  j>0 ; j--){
				faktor*=j;

			}
			toplam+=faktor;
			geciciSayi/=10;
			}

		if (toplam==i){
		printf("%d ",i);
		}
	}*/



	//72 --> 2 2 2 3 3 = 2^2 * 3^2 * 2

	int sayi,asal,toplam=0,i,j,geciciSayi,k;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);

	while(sayi!=0){
		for ( i = 2; i <sayi; ++i){
			if(sayi%i==0){		
				for (int j = 2; j <= i; j++){
					if(i%j==0){
						printf("%d\n",j);
						geciciSayi=j*j;	
						
							if(sayi%geciciSayi==0 && sayi%j==0){
								printf("%d sayisi ve karesi olan %d sayisi tam bolundugunden guclu bir sayidir.\n",j,j*j);
						} 

					}
					sayi/=j;
				}
			}
		
		}
	sayi/=i;
	}



	

		
	

	return 0 ; 
}
 






