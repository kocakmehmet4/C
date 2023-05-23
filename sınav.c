#include<stdio.h>
#include<math.h>

#define PI 3.14


#define SPHEREVOLUME(r) (4/3*PI*(r)*(r)*(r))


	int main(void){
		
	/*	int i;
		
		printf("%10s%10s\n","Radius","Volume");
		
		for(i=1;i<=10;i++){
			
			printf("%10d%10.3f\n",i,SPHEREVOLUME(i));
		}
		*/
		
		
		/*	-------	FLOYD UCGENÝ----
		
		int i,j,sayi=1;
		
		for(i=1;i<=10;i++){
			
			
			for(j=1;j<=i;j++){
				
				printf("%d ",sayi);
				sayi++;
			}
			printf("\n");
		}   */
		
		// KLAVYEDEN GÝRÝLEN SAYIDA KARE OLUÞTURMA
		
		/*int i,j,sayi;
		printf("Lutfen bir sayi giriniz:");
		scanf("%d",&sayi);
		
		for(i=1;i<=sayi;i++){
			for(j=1;j<=sayi;j++){
				
				if(i==1 || sayi==i){
					printf("*");
				}
				else{
					if(j==1 || j==sayi){
						printf("*");
					}
					else{
						printf(" ");
					}
				}
				
			}
			printf("\n");
		}*/
		
		/*KLAVYEDEN GÝRÝLEN SAYIDA DÝKDÖRTGEN OLUÞTURMA
		
		int i,j,sayi1,sayi2;
		
		printf("Lutfen a kenarini giriniz:");
		scanf("%d",&sayi1);
		printf("Lutfen b kenarini giriniz:");
		scanf("%d",&sayi2);
		
		for(i=1;i<=sayi1;i++){
			for(j=1;j<=sayi2;j++){
				if(i==1 || sayi1==i){
					printf("*");
				}
				else{
					if(j==1 || sayi2==j){
						printf("*");
					}
					else{
						printf(" ");
					}
				}
			}
			printf("\n");
		}		*/
		
		
		/* 8 YAZMA
		int i,j,sayi,k;
		
		printf("Lutfen sayi giriniz:");
		scanf("%d",&sayi);
		
		for(i=1;i<=sayi*2-1;i++){
			
			if(i==1||sayi==i||i==sayi*2-1){
				
				for(j=1;j<=sayi;j++){
					if(j==1 ||j==sayi){
						printf(" ");
					}
					else{
						printf("*");
					}
				}
			}
			else{
				for(k=1;k<=sayi;k++){
					if(k==1||k==sayi){
						printf("*");
					}
					else{
						printf(" ");
					}
				}
			}
			printf("\n");
		}*/
		
		
	/* MUKEMMEL SAYÝ
		int i,j,toplam=0,sayi;
		
		printf("Lutfen bir sayi giriniz:");
		scanf("%d",&sayi);
		
		for(i=1;i<sayi;i++){
			if(sayi%i==0){
				toplam+=i;
			}
		}
		//printf("Toplam=%d",toplam);
		
		if(toplam==sayi){
			printf("Bu sayi mukemmel sayidir.");
		}
		else{
			printf("Bu sayi mukemmel sayi degildir.");
		}    */
		
		
	/* 1 1000 arasi mukemmel sayi
		int i,j,toplam;
		
		for(i=1;i<1000;i++){
			toplam=0;
			for(j=1;j<i;j++){
				if(i%j==0){
					toplam+=j;
				}
				
			}
		//	printf("Toplam:%d",toplam);
			if(toplam==i){
				printf("%d\n",i);
		}
			
			}*/
			
		/* TAU SAYÝ
			int i,j,toplam,sayi,basamakKontrol=0;
			
			printf("Lutfen bir sayi giriniz:");
			scanf("%d",&sayi);
			
			for(i=1;i<=sayi;i++){
				if(sayi%i==0){
					basamakKontrol++;
				}
			
			}	if(sayi%basamakKontrol==0){
					printf("Bu sayi Tau sayidir.");
				}
				else{
					printf("Bu sayi Tau sayi degildir.");
				}			*/
				
	/*	1 ile 100 arasi tau sayi
	int i,j,toplam,sayi,basamakKontrol=0;
			
			
		for(i=1;i<100;i++){
			basamakKontrol=0;
			for(j=1;j<=i;j++){
				if(i%j==0){
					basamakKontrol++;
				}
			}
			if(i%basamakKontrol==0){
				printf("%d\n",i);
			}		
	}    */
	
	//Tekin sayi
/*	int i,j,geciciSayi,temp,sayi,kontrol=0;
	
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	geciciSayi=sayi;
	while(geciciSayi!=0){
		kontrol=0;
		
	temp=geciciSayi%10;
	if(temp==0){
		break;
	}
	if(sayi%temp==0){
		kontrol++;	
	}
	else{
		break;
	}
	
	geciciSayi/=10;
	}
	if(kontrol==1){
		printf("Bu sayi tekin sayidir.");
	}
	else{
		printf("Bu sayi tekin sayi degildir.");
	}		*/
	
	
	// 1 ile 100 arasi tekin sayi
	
/*	int i,j,kontrol=0,temp,geciciSayi;
	
	for(i=1;i<100;i++){
		geciciSayi=i;
		kontrol=0;
		
		while(geciciSayi!=0){
			kontrol=0;
			temp=geciciSayi%10;
			if(temp==0){
				break;
			}
			if(i%temp==0){
				kontrol=1;
			}
			else{
				break;
			}
			geciciSayi/=10;
			
		}
		if(kontrol==1){
			printf("%d\n",i);
		}
	}*/
	
//AB iki basamaklý sayýsý asal iken BA iki basamaklý sayýsý da asal oluyorsa AB ve BA sayýlarýna simetrik asal sayýlar denir.

	/*int i,j=1,sayi,temp,asalKontrol=0;
	
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	for(i=2;i<sayi;i++){
		if(sayi%i==0){
			asalKontrol=1;
		}
	}
	if(asalKontrol==0){
		
		printf("%d sayisi Asal sayidir.\n",sayi);
		int geciciSayi,k=0,toplam=0;
		geciciSayi=sayi;
		while(geciciSayi!=0){
			
			temp=geciciSayi%10;
			toplam=toplam*10+temp;
		
			geciciSayi/=10;
			
	}
	printf("%d ve %d sayilari simetriktir",toplam,sayi);
}
	if(asalKontrol==1){
		printf("Bu sayi asal sayi degildir.");
	}*/
	
	/*int i,j,x,sayi,toplam=0;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++){
		for(j=0;j<=sayi-i+6;j++){
			printf(" ");
		}
		for(x=1;x<=i;x++){
			
			printf("* ");
		}
		printf("\n");
	}
	
	
	for(i=3;i<=sayi+2;i++){
		
		for(j=0;j<=sayi-i+6;j++){
			printf(" ");
		}
		for(x=1;x<=i;x++){
			
			printf("* ");
		}
		printf("\n");
	}
	for(i=5;i<=sayi+4;i++){
		
		
		for(j=0;j<=sayi-i+6;j++){
			printf(" ");
		}
		for(x=1;x<=i;x++){
			
			printf("* ");
		}
		printf("\n");
	}
	for(i=1;i<=3;i++){
		
		for(x=0;x<=sayi+3;x++){
			printf(" ");
		}
		for(j=1;j<=3;j++){
			printf("* ");
		}
		printf("\n");
	}		*/


	
	
	
	
	
	
	
	
	
	
		
			
		

		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		return 0 ;
	}
