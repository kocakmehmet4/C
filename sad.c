#include<stdio.h>
#include <ctype.h>

int main (void){
	
	/*long int sayi=10000;
	 int a=0,b=1,i=1,j;
	long int temp,toplam=0;

	while(a<=b){
	toplam=a+b;
		printf("%d ",a);
		a=b;
		b=toplam;
		for(i=2; i<=a; i=2){
			for(j=2; j<=a; j++){
		
		if(a%i==0){
			printf("%d sayisi asal degildir.\n",a);
			break;
		}
		else{
		printf("%d sayisi asal sayidir.\n",a);
		break;	
		}

		}

		}
		if (a>=sayi)
		{
			break;
		}


}				*/



/*	int giris=,counter=0,sayi1=0,sayi2=1,toplam=0,control,art,temp,control2=0,geneltop=0,yedek;
	
	printf("pozitif bir sayi giriniz: ");
	scanf("%d",&giris);
    if(giris<=0){
    	printf("pozitif sayi giriniz: ");
    	scanf("%d",&giris);
	}
	while(giris>counter){             
		
		toplam=sayi1+sayi2;
		sayi1=sayi2;
		sayi2=toplam;
		control2=0;          //123
		art=2;
		control=0;
		while(toplam>art){
			
			if(toplam%art==0){
				control++;
		    }
		    
			art++;
		}
	if(control==0 && toplam>=2){
		printf("%d ",toplam);
		temp=toplam;
		counter++;
		control2++;
	}
    if(control2==1){
		
		while(temp!=0){ //89
		yedek=temp;     //89
		yedek%=10;          //9
		geneltop+=yedek;    //9
		temp/=10;          
		}	
	}
	}
		
	printf("\nsayilarin rakam toplamlari %d ",geneltop);	*/


	/*int sayi,i,j,k;

	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);

	for ( i = 1; i <= sayi; ++i){
		for( j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for ( i = sayi; i >= 1; --i){
		for( j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	for ( i = 1; i <=sayi; i++){
		i=2*j-1;
		j++;

		for (j = 1; j <= i; j++){

			printf("*");
			
		}

		printf("\n");
	}
	printf("\n");
	
	for (i =1; i <=sayi; i+=2){
		for(j=sayi-i; j>=0; j--){
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	for(i=0; i<=sayi; i+=2){
		for (j = 1; (sayi-i)/2>=j; ++j){
			printf(" ");	
		}

		for(j=0; j<=i; j++){
			printf("*");
			}
	
		for (j = 1; (sayi-i)/2>=j; ++j){
			printf(" ");	
		}
		printf("\n");
}
		printf("\n");
		int counter,x;				*/

 /*for(counter=0; counter<sayi; counter++){
	   			x=2*counter+1;
	
			for(j=1; j<sayi-counter;j++){
				printf(" ");
		
		}
			for(j=1; j<=x; j++){
				printf("*");
			
		}
		printf("\n");
		
	}*/



	/*	for(counter=0; counter<sayi; counter++){
			x=2*counter+1;
			for (j = 1; j <sayi-counter; j++){

				printf(" ");	
			}
			for(j=1; j<=x; j++){
				printf("*");
			}
			printf("\n");
		}			*/



		/*int kucukHarf=0,buyukHarf=0,rakam=0,karakterSayisi=0;
		char ch;
		printf("Lutfen bir sifre giriniz:");

		do{
			ch=getchar();

			if (kucukHarf==0){
				if(islower(ch)){
					kucukHarf=1;
				}
			}
			if (buyukHarf==0){
				if(isupper(ch)){
					buyukHarf=1;
				}
			}
			if (rakam==0){
				if(isdigit(ch)){
					rakam=1;
				}
			}
			karakterSayisi++;

		}while(ch !='\n');

		if (kucukHarf && buyukHarf && rakam&& karakterSayisi<=16){
			printf("Sifreniz olusturulmustur...");
		}
		else{
			printf("Sifreniz olusturulmamistir...");
		}	
		}			*/




	//Mükemmel sayi tüm pozitif bölenlerin toplamı o sayiyi veriyorsa oluşan sayidir.


	/*int sayi,i,toplam=0,temp;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	temp=sayi;

	for(i=1; i<sayi; i++){

		if(temp%i==0){
			toplam+=i;
		}
		
	}
	if(toplam==sayi){
			printf("%d sayisi mukemmel sayidir",sayi);
		}
		else{
			printf("%d sayisi mukemmel sayi degildir",sayi);
		}			*/


	/*int sayi=100000,i,toplam=0,temp,j;

	for ( i = 1; i <=sayi; ++i)	{
		toplam=0;
		for (j =1 ; j < i; ++j){
			
			if(i%j==0){
				toplam+=j;
			}
		
		}
		if(i==toplam){
			printf("%d sayisi mukemmel sayidir\n",i);
		}

	}*/


	return 0 ;	
	}



	
