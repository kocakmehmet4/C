#include<stdio.h>

int main(){
	
	
/*	int i,j,k,sayi;
	
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++){
		for(j=0;j<=sayi-i+5;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
	for(i=3;i<=sayi+2;i++){
		for(j=0;j<sayi-i+6;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
	
	for(i=5;i<=sayi+4;i++){
		for(j=0;j<sayi-i+6;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
	for(i=1;i<=3;i++){
		for(j=0;j<sayi+3;j++){
			printf(" ");
		}
		for(k=1;k<=3;k++){
			printf("* ");
		}
		printf("\n");
	}*/
	
	
	/*int i,j,toplam,basamak,geciciSayi,sayi,temp,kontrol=0;;
	
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++){
		
		for(j=2;j<=i;j++){
			
			if(sayi%j==0){
				kontrol=1;
				printf("%d",j);
				sayi/=j;
			}
			else if(kontrol==0){
				printf("%d",sayi);
			}
			
			
		}
		
		
	}		*/
	
	
	/*int i,j,k,sayi,geciciSayi,asalKontrol=0,asalKontrol2=1,temp;
	
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	geciciSayi=sayi;
		for(i=2;i<sayi;i++){
			while(geciciSayi!=0){
				temp=geciciSayi%10;	
				for(j=2;j<temp;j++){
					if(temp%j==0){
						asalKontrol2=1;
						break;
					}
					
				}
				if(asalKontrol2==0){
					printf("%d\n",temp);
				
				}
				geciciSayi/=10;
			}
			
			if(sayi%i==0){
				asalKontrol=1;
			}
		}
		if(asalKontrol==0){
			printf("\n%d sayisi asal oldugundan YALANCI ASAL DEGILDIR",sayi);
		}
		if(asalKontrol2==0){
			printf("%d sayisi; yalanci asaldir.",sayi);	
		}*/
		
		
	/*	int i,j,toplam=0,geciciSayi,temp,sayi,toplam1=0,a;
		
		printf("Lutfen bir sayi giriniz:");
		scanf("%d",&sayi);
		a=sayi;
		for(i=2;i<=sayi;i++){
			while(sayi%i==0){
				//printf("%d\n",i);
				temp=i;
				while(temp!=0){
					geciciSayi=temp%10;
					toplam+=geciciSayi;
					temp/=10;
				}
				sayi/=i;	
			}
		}
		printf("%d",toplam);
		geciciSayi=a;
		while(geciciSayi!=0){
			
			temp=geciciSayi%10;
			toplam1+=temp;
			geciciSayi/=10;
		}
		printf("toplam:%d",toplam1);
		
		if(toplam1==toplam){
			printf("Bu sayi smith sayidir");
		}		*/


	/*int i,j,toplam=0,toplam1=0,temp,geciciSayi,sayi,a;

	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	a=sayi;
	for ( i=2; i <=sayi; ++i){
		while(sayi%i==0){
			temp=i;
			while(temp!=0){
				geciciSayi=temp%10;
				toplam+=geciciSayi;
				temp/=10;
			}
			sayi/=i;
		}
	}
	printf("%d\n",toplam);
	geciciSayi=a;
	while(geciciSayi!=0){
		temp=geciciSayi%10;
		toplam1+=temp;
		geciciSayi/=10;
	}
	printf("%d\n",toplam1);
	if(toplam==toplam1){
		printf("Bu sayi smith sayidir.");
	}	*/


	/* ////////////////TOPLAM ASAL SAYILAR/////////////

	int main(int argc, char const *argv[]){

	int sayi,i,asalKontrol=0,asalKontrol2=0,temp,j,toplam=0,a,geciciSayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	a=sayi;
	for (i = 2; i <=sayi; ++i){
		while(sayi%i==0){
			temp=i;
			while(temp!=0){
				geciciSayi=temp%10;
				toplam+=geciciSayi;
				temp/=10;
			}
			sayi/=i;
			break;
		}
	}
	for(i=2;i<toplam;i++){
		if(toplam%i==0){
			asalKontrol=1;
		}
	}
	if(asalKontrol==0){
		printf("%d sayisi toplamAsalSayi'dir\n",a);
	}
	else{
		printf("%d sayisi toplamAsalSayi degildir\n",a);
	}
	return 0 ;
}		*/


	/*int i,j,geciciSayi,toplam1=0,toplam=0,temp,a,sayi;

	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	a=sayi;
	for (i = 2; i <=sayi; ++i){
		while(sayi%i==0){
			temp=i;
			while(temp!=0){
				geciciSayi=temp%10;
				toplam+=geciciSayi;
				temp/=10;
			}
			sayi/=i;
		}
	}
	//printf("%d",toplam);
	geciciSayi=a;
	while(geciciSayi!=0){
		temp=geciciSayi%10;
		toplam1+=temp;
		geciciSayi/=10;
	}
	if(toplam1==toplam){
		printf("%d sayisi smith sayidir.",a);
	}	*/
	// 1-1000 ARASI SMITH SAYILAR

	int i,j,geciciSayi,toplam1=0,toplam=0,temp,asalKontrol=0,a;
	for(j=1;j<1000;j++){
		a=j;
		toplam=0;
		toplam1=0;
		for (i = 2; i <=j; ++i){
			while(a%i==0){
				temp=i;
				while(temp!=0){
					geciciSayi=temp%10;
					toplam+=geciciSayi;
					temp/=10;
				}
				a/=i;
			}
		}
		//printf("%d",toplam);
		geciciSayi=j;
		while(geciciSayi!=0){
			temp=geciciSayi%10;
			toplam1+=temp;
			geciciSayi/=10;
		}
		for(i=2;i<j;i++){
			if(j%i==0){
				asalKontrol=1;
				if(toplam1==toplam){
				printf("%d ",j);
				break;
				}
			}
		}
	}		

	/*int i,j,k,sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);

	for ( i = 0; i <sayi; ++i){
		for(j=0;j<=sayi-i+5;j++){
			printf(" ");
		}
		for(k=0;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
	for ( i = 2; i <sayi+2; ++i){
		for(j=0;j<=sayi-i+5;j++){
			printf(" ");
		}
		for(k=0;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
	for ( i = 4; i <sayi+4; ++i){
		for(j=0;j<=sayi-i+5;j++){
			printf(" ");
		}
		for(k=0;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}		*/


			/////YALANCI ASAL SAYILAR//////
	//7*2=14


	/*int i,j,temp,sayi,geciciSayi,carp=1,asalKontrol=0;

	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	geciciSayi=sayi;

	for (i = 2; i <sayi; ++i){
		if(sayi%i==0){
			for(j=2;j<i;j++){
				if(i%j==0){
					asalKontrol=1;
					break;
				}
			}
			if(asalKontrol==0){
				carp*=i;
			}
			
		}
	}
	if(i==carp){
		printf("Bu sayi yalanci asaldir.");
	}
*/

	//----------1'den 100'e yalanci asal sayilar----------
/*int i,j,temp,sayi,geciciSayi,carp=1,asalKontrol=0,k,a;

for (k = 1; k<=100; ++k){
	a=k;
	carp=1;
	for (i = 2; i <k; ++i){
		if(k%i==0){
			while(j==2){
				if(i%j==0){
					asalKontrol=1;
					break;
				}
				j++;
			}
			if(asalKontrol==0){
				carp*=i;
			}
			
		}

	}
	if(a==carp){
		printf("%d ",a);
	}
}		*/

	
	




		
		

		
		
	
	
	
	
	
	
	
	
	
	
	return 0;
}
