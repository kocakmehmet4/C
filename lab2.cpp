#include<stdio.h>


int main(){
	
/*	int sayi=1;
	
	while(sayi>0){
		
		sayi*=2;
		
		printf("%d\n",sayi);
	}							*/
	
/*	

	int kenar,sutunPoz;
	int satirPoz=1;


	printf("Lutfen kenar uzunlugu giriniz:");
	scanf("%d",&kenar);
	
	while(satirPoz<=kenar){
		sutunPoz=1;
		while(sutunPoz<=kenar){
			
			if(satirPoz==1){										
				printf("*");										
			}
			else if(satirPoz==kenar){
				printf("*");
			}
			else if(sutunPoz==1){
				printf("*");
			
			}
			else if(sutunPoz==kenar){
				printf("*");
			}
		
			else{
				printf(" ");
			}
			sutunPoz++;
		}
		printf("\n");
		
		satirPoz++;			
	}					*/
	
	
/*	int sayi,temp;
	int counter=1;
	
	
	printf("5 basamakli sayi giriniz");
	scanf("%d",&sayi);
	
	temp=sayi;
	
	while(10000<=sayi<100000){
		
		
		if(counter==7)
		break;
		
		if(sayi%7==10000){
			printf("%d sayisinda 7 bulunmaktadir\n",temp);	
			temp=sayi/10000;
		
		}
		
		else if(sayi%1000==7){
			printf("bu sayida 7 bulunmaktadir\n");
			temp=sayi/1000;
			
		}
		else if(sayi%100==7){
			printf("bu sayida 7 bulunmaktadir\n");
			temp=sayi/100;
		
		}
		else if(sayi%10==7){
			printf("bu sayida 7 bulunmaktadir\n");
			temp=sayi/10;
			
		}
		else{
			printf("Hatali sayi girisi!"); 
			break;  
		}
		
		counter++;
	
	}
	printf("%d",temp);				*/
 
	/*
	int sayi,sayiKopya,rakam;
	int faktor=10000,yediSayisi=0;
	
	printf("5 basamaki bir sayi giriniz:");
	scanf("%d",&sayi);
	sayiKopya=sayi;
	
	while(faktor>=1){
		rakam=sayiKopya/faktor;
		if(rakam==7)
			yediSayisi++;l‏צח
		sayiKopya%=faktor;
		faktor/=10;
		
		
	}
	printf("%d sayisinda %d adet yedi vardir",sayi,yediSayisi);	
	*/


/*	int sutun,satir=0;
	int sayi=2;
	
	
	while(sayi<=8){
		sutun=0;

		if(satir%2!=0){
			printf(" ");
		while(sutun<8){
			printf("* ");
			sutun++;
	
		
		}
		printf("\n");
		satir++;
	}
	
	sayi++;
	
}			*/

/*	int kenar,sutunPoz;
	int satirPoz=1;
	
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&kenar);
	
	while(satirPoz<=kenar){
		int sutunPoz=1;
		while(sutunPoz<=kenar){

	
		if(sutunPoz==1){
			printf("*");
	}
		else if(sutunPoz==kenar){
			printf("*");
		}
		else if(satirPoz==1){					
			printf("*");
		}
		else if(satirPoz==kenar){		
			printf("*");
		}		

		
	
		else{
			printf(" ");
		}
		sutunPoz++;
	}
	
	printf("\n");
	
	satirPoz++;
	
}					*/

/*	int kenar,satir=1,sutun;
	
	printf("Kenar belirleyiniz:");
	scanf("%d",&kenar);
	
	while(satir<=kenar){
		printf("*");
		sutun=1;
		while(sutun<kenar){
			printf("*");
			sutun++;
		}
		printf("\n");
		satir++;
	}		*/
	
	
/*	int sayi,temp;
	int counter=1;
	
	
	printf("5 basamakli sayi giriniz");
	scanf("%d",&sayi);
	
	temp=sayi;
	
	while(sayi<100000){	
	
	if (counter==7){
		
		break;
	}
	
	if(sayi>10000){
		if(sayi%10==7){
			temp=sayi/10;
			printf("1 adet 7 bulunmaktadir.");
			break;
		}
		else if(sayi%100==7){
			temp=sayi/100;
			printf("1 adet 7 bulunmaktadir.");
		}
		else if(sayi%1000==7){
			temp=sayi/1000;
			printf("1 adet 7 bulunmaktadir.");
		}
		else if(sayi%10000==7){
			temp=sayi/10000;
			printf("1 adet 7 bulunmaktadir.");
		}
		
	}
	counter++;
}			*/

	int sayi,temp,islem;
	int counter=0;

	
	printf("Lutfen 5 basamakli sayi giriniz:");
	scanf("%d",&sayi);
	

		temp=sayi;
	islem=temp/10000;
		

	if(islem==7){
		counter++;
	}
	temp%=10000;
	islem=temp/1000;
	if(islem==7){
		counter++;
	}
	temp%=1000;
	islem=temp/100;
	if(islem==7){
		counter++;
	}
		temp%=100;
	islem=temp/10;
	if(islem==7){
		counter++;
	}
		temp%=10;
	islem=temp/1;
	if(islem==7){
		counter++;
		
	}
		
	printf("%d sayisi icinde %d adet yedi vardir.",sayi,counter);
	
	
	
	
/*	int sayi,satir,sutun;
	
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	satir=1;
	while(satir<=sayi){
		sutun=1;
		
		if(satir%2==0){
			printf(" ");
			
		}
		while(sutun<=sayi){
			printf("* ");
			sutun++;

		}
		printf("\n");
		
		
		satir++;
		
	}				*/
	
/*	int satir=0;
	int sutun;
	
	while(satir<8){
		sutun=0;
		if(satir% 2!=0){
			printf(" ");
		}
		while(sutun<8){
			printf("* ");
			sutun++;
			
		}
		printf("\n");
		satir++;
	}*/
	
	

			
		
		
				
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
