#include<stdio.h>

int main (void){
	
/*	int enKucuk,enBuyuk,sayi1,sayi2,i=2,toplam=0;
	
	printf("lutfen 2 sayi giriniz");
	scanf("%d%d",&sayi1,&sayi2);
	
	enKucuk=sayi1;
	enBuyuk=sayi2;
	
	if(sayi2>enBuyuk){
		sayi2=enBuyuk;
	}
	if(sayi1>enKucuk){
		sayi1=enKucuk;
	}
	sayi1=enKucuk;
	while(i<=enKucuk){
		if(enKucuk%i==0){
			toplam=i;
		
		}
		i++;
	
	}
		printf("sayinin ebobu:%d",toplam);			*/
		
		
	int sayi,i,j;
		
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	for(i=1; i<sayi-j; i+=2){
		
		for(j=1; j<=sayi-i/2;j++){
			printf(" ");
			
			for(j=1; j<i; j++){
				printf("*");
		}
			printf("\n");
		}
		
	}
	
	
	
	return 0 ;
}
