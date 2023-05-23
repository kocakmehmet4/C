#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/*int main (){
	int x,a[25][25],i,j;
	do{
		printf("1 ile 25 arasi bir sayi giriniz:");
		scanf("%d",&x);
		printf("\n");
	}while(x>25);
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			if(j>=i){
				a[i][j]=1+(j-i);
				printf("%3d",a[i][j]);
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
} */
	
//SERI TOPLAMA--

/*int seriToplam(int x){
	int toplam=0;
	for(int i=1;i<=x;i++){
		toplam+=i;
	}
	return toplam;
}
int main(){
	int x;
	printf("Lutfen bir x degeri giriniz:");
	scanf("%d",&x);
	int seriToplami=seriToplam(x);
	printf("\nx icin seri toplami:%d",seriToplami);
	}*/
	
	// iki sayi arasi rastgele sayi ver
/*int rastgeleSayiVer(int baslangic,int bitis){
	
	srand(time(NULL));
	int rastgele=(rand()%baslangic) + (bitis-baslangic);
	if(rastgele==baslangic){
		rastgele++;
	}
	return rastgele;
}
int main(){
	
	int baslangic,bitis;
	printf("baslangic degerini giriniz:");
	scanf("%d",&baslangic);
	printf("bitis degerini giriniz:");
	scanf("%d",&bitis);
	
	int rastgele=rastgeleSayiVer(baslangic,bitis);
	printf("%d-%d arasi rastgele sayi:%d\n",baslangic,bitis,rastgele);
	return 0 ;
}	*/

/*	#include<stdbool.h>


	bool isSesliHarf(char harf){
		char sesliHarfler[10]={'a','e','i','o','u','A','E','I','O','U'};
			for(int i=0;i<10;i++){
				if(sesliHarfler[i]==harf)
					return true;
			}
		return false;
	}
	void sesliHarfleriDegistir(char *cumle){
		int i=0;
		
		do{
			if(isSesliHarf(cumle[i])){
				cumle[i]='*';
			}
			i++;
		}while(cumle[i]!='\0'&& cumle[i]!='\n');
		
	}
	int main(){
		char cumle[250];
		printf("\nString giriniz:\n");
		gets(cumle);
		sesliHarfleriDegistir(cumle);
		printf("> %s\n",cumle);
		return 0 ;
	}	*/
	
/*	#include<stdbool.h> 
	bool isAsal(int sayi){
		int i=2;
		while(i<=sayi/2){
			if(sayi%i==0){
				return false;
			}
			else{
				i++;
			}
		}
		return true;
	}
	int main(){
		int x;
		printf("Sayi giriniz:\n");
		scanf("%d",&x);
		bool asal=isAsal(x);
		if(asal){
			printf("%d sayisi asaldir.",x);
		}
		else{
			printf("%d sayisi asal degildir.",x);

		}
	}*/
	

	/*void bastir(int matrisimiz[][4],int size){
		int i,j;
		for(i=0;i<size;i++){
			for(j=0;j<4;j++){
				printf("%d ",matrisimiz[i][j]);
			}
			printf("\n");
		}
	}
	int main(){
		int matris[4][4];
		int i,j;
		printf("Matrisi doldurunuz:\n");
		srand(time(NULL));
		for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				matris[i][j]=rand()%10;
			}
		}
		bastir(matris,4);
		return 0 ;
	}	*/
	
	
/*	int carp(int matris[],int size){
		int carpim=1;
		int i=0;
		
		for(;i<size;i++){
			carpim*=matris[i];
			
		}
		return carpim;
	}
	int main(){
		int sayilar[5];
		srand(time(NULL));
		for(int i=0;i<5;i++){
			sayilar[i]=rand()%9+1;
			printf("%d ",sayilar[i]);
			
		}
		printf("\n%d ",carp(sayilar,5));
		
	}	*/
	
	
	/*void Printf(float);
	float delta(float a,float b,float c);
	
	int main(){
		float fd1,fd2,fd3;
		fd1=1.0;
		fd2=2.0;
		fd3=1.0;
		Printf(delta(fd1,fd2,fd3));
	}
	float delta(float a,float b,float c){
		float d=b*b-4*a*c;
		return d;
	}
	void Printf(float res){
		
		if(res<0){
			printf("reel kok yoktur.");
		}
		else if(res==0){
			printf("cift katli kok vardir.");
		}
		else{
			printf("reel kok vardir.");
		}
	}		*/
	
	
/*	int is_prime(int sayi);
	
	int main(){
		int  n;
		int kontrol=0;
		for( n=1;n<100;n++){
			kontrol=0;
			while(kontrol==0){
				kontrol=is_prime(n);
				break;
			}
			if(kontrol==1){
			printf("%d ",n);
			}
		}
		
	}
	int is_prime(int sayi){
		
		for(int i=2;i<sayi;i++){
			if(sayi%i==0){
				return 0;
			}
		}
		return 1;
	}		*/
	
	//TOPLAMASAL SAYILAR// 5*2
	
/*	int asalKontrol(int x);
	
	int main(){
		
		int temp=0,i,toplam=0,j;
			
		
		for(j=1;j<100;j++){
			
			toplam=0;
			temp=0;
			for(i=2;i<j;i++){
				if(j%i==0){
					toplam+=i;
					temp=asalKontrol(toplam);
				}
			}
			if(temp){
				printf("%d ",j);
			}
			
		}
			
			return 0 ;
	}
			
	int asalKontrol(int x){
		int n;
		for(n=2;n<x;n++){
			if(x%n==0){
				return 0;
			}
		}
		return 1;
	}	*/
	
	
	#include <math.h>
#include <stdlib.h>

/*int main(int argc, char const *argv[])
{
	int i,j,toplam=0,geciciSayi,temp,x=1,basamak;
	for (i = 1; i <100; ++i){
		geciciSayi=i*i;
		temp=i;
		basamak=0;
		x=1;
		toplam=0;
		while(temp!=0){
			basamak++;
			temp/=10;
		}
		for(j=1;j<=basamak;j++){
			x*=10;
		}
		while(geciciSayi!=0){
			temp=geciciSayi%x;
			toplam+=temp;
			geciciSayi/=x;
		}
		if(toplam==i){
			printf("%d ",i);
		}
		
	}

	return 0;
}		*/



#include <stdio.h>

int asalKontrol(int x);
int toplamAsal(int y);

	
	int asalKontrol(int x);
	
	int main(){
		int a=100;
		printf("%d ",toplamAsal(a));
		
		
			
			return 0 ;
	}
			
	int asalKontrol(int x){
		int n;
		for(n=2;n<x;n++){
			if(x%n==0){
				return 0;
			}
		}
		return 1;
	}	
	int toplamAsal(int y){
		int i,b,toplam=0,geciciSayi,temp,j,t;
			toplam=0;
			t=j;
			for(i=2;i<j;i++){
				while(j%i==0){
					temp=i;
					while(temp!=0){
						geciciSayi=temp%10;
						toplam+=geciciSayi;
						temp/=10;
					}
					t/=i;
				}
			}

			
	}

		
	


	
	

		
		
		
		
		
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


