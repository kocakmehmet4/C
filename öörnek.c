#include<stdio.h>


int main (void){
	

/*int gucluSayi,geciciSayi,toplam=0,i,j;

printf("Lutfen bir sayi giriniz");
scanf("%d",&gucluSayi);
for ( i = 2; i <gucluSayi; i++){

	if(gucluSayi%i==0){
		toplam=i;
		printf("%d\n",toplam);

		}
		

}
	geciciSayi=(i*i);
		for(j=2;j<=i;j++){

		if(gucluSayi%geciciSayi==0){
			printf("Bu sayi gucluSayi'dir:%d\n",geciciSayi);
		}

	
	}*/

/*	int gucluSayi,geciciSayi,toplam=0,i,j=3,dizi[10];

printf("Lutfen bir sayi giriniz");
scanf("%d",&gucluSayi);

j=3;
for ( i = 2; i <gucluSayi; i++){

	if(gucluSayi%i==0){
		dizi[i]=i*i;
		if(gucluSayi%j==0){
			dizi[i-1]=j*j;
			j++;
		}
		

		if(gucluSayi%(dizi[i])==0 && gucluSayi%dizi[i-1]==0){
		printf("%d bu gucluSayi'dir%d\n",dizi[i],dizi[i-1]);
	}
		gucluSayi/=i;
		if (gucluSayi%dizi[i]!=0){

		}
	

	}
	
	}				*/

		//Klavyeden kenarı girilen bir kare ‘x’ şeklinde oluşturunuz.

	/*int sayi,i,j;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);

	for(i=1;i<=sayi;i++){
		for (j=1; j<=sayi;j++){

			if(i==1 || sayi==i){
				printf("*");
			}
			else{
				if(j==1 || j==sayi){
					printf("*");
				}
				else
					printf(" ");
			}
			
	}
	printf("\n");
}				*/

	/*int i,j,sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	for ( i = 1; i <=sayi; ++i){
		for(j=1;j<=sayi;j++){
			if(i==1|| i==sayi){
				printf("*");
				}
			
			else{
				if(j==1 || sayi==j){
					printf("*");
				}
				else{

					printf(" ");
				}
				
			}
		
	}

		printf("\n");
	}			*/

	/*int i,j,sayi1,sayi2;

	printf("Lutfen a kenarini giriniz:");
	scanf("%d",&sayi1);
	printf("Lutfen b kenarini giriniz:");
	scanf("%d",&sayi2);

	for(i=1;i<=sayi1;i++){
		for(j=1;j<=sayi2;j++){
			if(i==1 || i==sayi1){
				printf("*");
			}
			else{
				if(j==1 || j==sayi2){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
		}
		printf("\n");
	}		*/

	/*int i,j,sayi,geciciSayi=1,sayac=0,asalKontrol=0,enKucukSayi,toplam=0;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);

	enKucukSayi=geciciSayi;

	for (i=2;i<sayi;i++){
		enKucukSayi++;
		if(sayi%i==0){
			asalKontrol=1;	
		}
	}
	if(asalKontrol==0){
		printf("Girilen sayi asaldir");
	}
	printf("%d",enKucukSayi);*/


	/*float celcius,fahrenayt;

	for (celcius=0;celcius<=100;celcius++){
		fahrenayt=9/(double)5*celcius+32;
		printf("%.1f C== %.2f\n",celcius,fahrenayt);
	}*/

	/*int sayi,i,j,toplam=0;
	
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);

	for (i = 1; i <sayi; i++){
		if(sayi%i==0){
			toplam+=i;

		}
	}
	if(toplam==sayi){
		printf("%d sayisi mukemmel sayidir.",sayi);
	}
	else{
		printf("%d sayisi mukemmel sayi degildir.",sayi);
	}		*/



	/*int sayi,i,j,toplam=0,asalKontrol=0;
	
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);

	for ( i = 1; i <=sayi; ++i){
		if (sayi%i==0){
			asalKontrol++;
			printf("%d ",i);
		}
	}
	if(sayi%asalKontrol==0){
		printf("\n%d sayisi Tau sayidir.",sayi);
	}			*/


	//Bir ABC sayısı kendisini oluşturan rakamların hepsine bölünebiliyorsa ABC sayısına tekin sayı denir. 
	//Örneğin : 648 sayısı 6,4 ve 8 sayılarına bölündüğü için bir tekin sayıdır.

	/*int sayi,toplam,geciciSayi,temp,k;

	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	k=sayi;
	while(sayi!=0){
		geciciSayi=sayi;
		geciciSayi%=10;
		temp=geciciSayi;
		sayi/=10;

		if(temp==0){
			printf("%d sayisi tekin sayi degildir.",k);
			break;
		}
		if (k%temp==0){
			printf("Bu sayi tekin sayidir");
			break;
			if(temp==0){
			printf("%d sayisi tekin sayi degildir.",k);
			break;
		}
		}
		else{
			printf("Bu sayi tekin sayi degildir");
			break;
		}

	}	*/
	/*int sayi,toplam,geciciSayi,temp,k,kontrol=1;

	for (int i = 10; i <100; ++i){
		sayi=i;
		kontrol=1;
		while(sayi!=0){
			geciciSayi=sayi;
			geciciSayi%=10;
			
				if(geciciSayi==0){
					break;
				}
				else if(i%geciciSayi==0){	
					kontrol=0;
				}
			
				else if(i%geciciSayi!=0) {
					kontrol=1;
					break;
			}
			sayi/=10;
		}
		if(kontrol==0)
		printf("%d sayisi tekin sayidir\n",i);
	}			*/


	//AB iki basamaklı sayısı asal iken BA iki basamaklı sayısı da asal oluyorsa AB ve BA sayılarına simetrik asal sayılar denir.

	//Örneğin; 37 sayısı simetrik asaldır. (37 ve 73  asal sayılardır)

	int asalKontrol=0,sayi,geciciSayi,j;

	printf("Lutfen bir asal sayi giriniz");
	scanf("%d",&sayi);

	while(sayi!=0){
		geciciSayi=sayi;
		geciciSayi%=10;
		for (int i = 2; i < geciciSayi; ++i){
			if(geciciSayi%i!=0){
				asalKontrol=1;

			}

		}
		geciciSayi*=10;
		printf("%d",geciciSayi);
		sayi/=10;
		
	}
	if(sayi==geciciSayi){
			printf("Bu sayi simetrik sayidir");
		}
	


	
	
	
	return 0 ;
}







 
