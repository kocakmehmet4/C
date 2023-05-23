#include<stdio.h>

int main(){
	
/*	int sayi,geciciSayi1,i,basamak,temp;
	int geciciSayi2,basamak2,toplam=0,toplam2=0;
															//Smith sayi
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	geciciSayi1=sayi;
	geciciSayi2=sayi;
	while(geciciSayi1!=0){
		
		basamak=geciciSayi1%10;
		toplam+=basamak;
		geciciSayi1/=10;
	}
	printf("%d sayisinin rakamlar toplami:%d\n",sayi,toplam);
	printf("\n");
	
	for(i=2;i<=geciciSayi2;i++){
		while(geciciSayi2%i==0){
			temp=i;
			while(temp!=0){
				basamak2=temp%10;
				toplam2+=basamak2;
				temp/=10;
			}
			printf("%d sayisinin asal carpani:%d\n",sayi,i);
			geciciSayi2/=i;
		}
		
	}
	printf("%d sayisinin asal carpanlarinin toplami:%d",sayi,toplam2);
	printf("\n\n");
	
	if(toplam==toplam2){
		printf("%d sayisi Smith sayidir.",sayi);
	}
	else{
		printf("%d sayisi Smith sayi degildir.",sayi);
	}
	*/
	
	int basamak1,toplam1=0,geciciSayi1;
	int basamak2,toplam2=0,geciciSayi2;
	int x,kontrol=0,i,j,temp;
															//Belirtilen sayiya kadar olan smith sayilari yazdirma
	for(i=1;i<=50;i++){
		
		kontrol=1;
		for(x=2;x<i;x++){
			if(i%x==0){
				kontrol=0;
			}
		}
		if(kontrol==0){
			
			toplam1=0;
			toplam2=0;
			geciciSayi1=i;
			geciciSayi2=i;
		while(geciciSayi1!=0){
			basamak1=geciciSayi1%10;
			toplam1+=basamak1;
			geciciSayi1/=10;
		}
		printf("%d sayisinin basamak toplami:%d\n",i,toplam1);
		
		for(j=2;j<=geciciSayi2;j++){
			
			while(geciciSayi2%j==0){
				temp=j;
				while(temp!=0){
					basamak2=temp%10;
					toplam2+=basamak2;
					temp/=10;
				}
				printf("%d sayisinin asal carpani:%d\n",i,j);
				geciciSayi2/=j;
			}
		}
			printf("%d sayisinin asal carpanlarinin toplami:%d\n",i,toplam2);	
		
			if(toplam1==toplam2){
				printf("%d sayisi smith sayidir.\n\n",i);
			}
			
			printf("\n");
		}		
	}
	
	return 0;
}
