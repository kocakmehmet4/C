#include <stdio.h>
#include<math.h>


int main (void){


	/*int bitDuzeyi,sayi,geciciSayi,basamakSayisi=1,toplam=0;

	printf("Lutfen bir sayi giriniz");
	scanf("%d",&sayi);
	

	while(sayi!=0){

		
		bitDuzeyi=sayi%2;
		toplam+=bitDuzeyi*basamakSayisi;
		basamakSayisi*=10;
		sayi/=2;	
	1000
	 0
	 0
	 10
	
		}
		printf("%d",toplam);*/



	int sayi,temp,counter=1,toplam=0;

	int kontrol,geciciSayi;
	printf("Lutfen bir binary sayi giriniz:");
	scanf("%d",&sayi);

	while(sayi !=0){

		kontrol=sayi;
		geciciSayi=kontrol%10;
		if(geciciSayi==1 || geciciSayi==0){
			kontrol/=10;
			geciciSayi=kontrol%10;
			if(geciciSayi==1 || geciciSayi==0){
				break;

		}
	}
		printf("Yanlis sayi girdiniz!\n");
		printf("Lutfen binary sayi giriniz.\n");
		printf("Tekrar bir sayi giriniz:\n");
		scanf("%d",&sayi);
	}



	

	while(sayi !=0){

		temp=sayi;
		temp%=10;
		toplam+=temp*counter;
		counter*=2;
		sayi/=10;



	}
	printf("%d",toplam);


	/*printf("%d",toplam);		

	int binary,temp,kontrol,toplam=0;
	int gecicibinary,basamak=1;
	printf("Bir sayi giriniz:");
	scanf("%d",&binary);
	
	while(binary!=0){
		
		kontrol=binary;
		gecicibinary=kontrol%10;
		if(gecicibinary==1 || gecicibinary==0){
			kontrol/=10;
			gecicibinary=kontrol%10;
			if(gecicibinary==1 || gecicibinary==0){
				break;
			}
		}
		
		
		printf("Yanlis sayi girdiniz!\n");
		printf("Lutfen binary sayi giriniz.\n");
		printf("Tekrar bir sayi giriniz:\n");
		scanf("%d",&binary);
	}
	while(binary!=0){
		
		temp=binary;
		temp%=10;
		toplam+=temp*basamak;
		basamak*=2;
		binary/=10;
	}
	printf("%d",toplam);		*/


		
















	return 0 ;
}