#include<stdio.h>
#include<math.h>

int main(void){


	/*int sayi,temp;
	int counter=0;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	temp=sayi;
	
	while(counter<=sayi){
		
		if(counter*(counter+1)==temp){
			
			printf("%d sayisi (%d=%d*%d) pronik sayidir.",sayi,sayi,counter,(counter+1));
			break;
		}
		counter++;
	}
	if(counter*(counter+1)!=temp){
		printf("%d sayisi pronik sayi degildir.",sayi);
	}			*/




/*	int main (void){*/


int sayi,gecicisayi,temp,faktor=10000;
	int islem,toplam=0;
	int counter=0;
	 
	printf("5 basamakli bir sayi giriniz:");
	scanf("%d",&sayi);
	gecicisayi=sayi;
	
	while(faktor>=1){
		
		temp=gecicisayi/faktor;
		islem=temp*pow(10,counter);
		toplam+=islem;
		gecicisayi%=faktor;
		faktor/=10;
		counter++;

	 }

	 if(toplam==sayi){
	 	printf("%d sayisi palindrom sayidir",sayi);
	 }
	 else{
	 	printf("%d sayisi palindrom sayi degildir",sayi);
	 }


 


	
		/*1011 					101				10			1
		gecici sayi 1			1				0			1
		toplam=1				2				0			8
		binary basamak 2		4				8			16
		101						10				1			10*/
		

	/*int binaryNum,temp,total=0,counter=0;
	
	printf("Lutfen binary sayi giriniz:");
	scanf("%d",&binaryNum);

		while(binaryNum!=0){
			
			temp=binaryNum;
			temp%=10;
			total+=temp*pow(2,counter);
			binaryNum/=10;
			counter++;
		}
		
		printf("toplam:%d",total);		*/		
	

	return 0;
}

