#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(void){
	
/*	int hesapNo;
	float baslangicParasi,masraflar,krediler,krediLimit,tutar;
	
	while(hesapNo !=-1){
	
		printf("Hesap numaranizi giriniz:(cikmak icin -1):");
		scanf("%d",&hesapNo);
		if(hesapNo==-1){
			break;
		}
		
		printf("Baslangic parasini giriniz:");
		scanf("%f",&baslangicParasi);
		
		printf("Masraflari giriniz:");
		scanf("%f",&masraflar);
		
		printf("Kredileri giriniz:");
		scanf("%f",&krediler);
		
		
		
		printf("Kredi karti limitinizi giriniz:");
		scanf("%f",&krediLimit);
		
		tutar= baslangicParasi+masraflar-krediler;
		
		
		
		
		printf("Hesap:%d\n",hesapNo);
		if(krediLimit<tutar)
			printf("Kredi limitiniz yoktur!\n");
		else	
			printf("Kredi karti limiti:%.2f\n",krediLimit);
		
		printf("Tutar:%.2f\n",tutar); 					}*/


	int number=1,satir=1,n=1;

	while(number<=15){
		printf("\n");
		number=((satir*2)-1);

		while(n<=number){
			printf("*");
			n++;

		satir++;
	} 

	
}				

	/*int sayi,i=0,j,x;

	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);


	while(i<sayi){
		x=1+(2*i);
		j=1;
		while(j<=x){
			printf("*");
			j++;
	
		}
		printf("\n");
		i++;
	}
			*/
	/*	int number,counter=0,i=1,z=1;

		printf("Lutfen bir sayi giriniz:");
		scanf("%d",&number);

			
		while(counter<number){

			z=1+(2*counter);
			i=1;
			

			while(i<=z){

				printf("*");
				i++;
			}
			printf("\n");
			counter++;

		}		370 371 153	*/	


	/*int toplam=0,sayi,a,b;

	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	b=sayi;
	
	while(sayi!=0){
		a=sayi;
		a%=10;
		toplam+=pow(a,3);
		sayi/=10;

	}
	
	if(b==toplam)
		printf("%d sayisi armstrong sayidir.",toplam);

	else
		printf("%d sayisi %d sayisina esit olmadigindan armstrong sayi degildir",b,toplam);		*/



	/*int faktor=1,sayi,counter=1;

	printf("Lutfen bir sayi giriniz.");
	scanf("%d",&sayi);

	while(counter<=sayi){

		faktor*=counter;
		counter++;

	}
	printf("%d\n",faktor);		*/

	/*int i,x=1,y=1,sayi;

	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);

	while(x<=sayi){

		i=(x*(x+1)/2);
	
	/*
   x=2 i=3
   1 
   2 3

		
		
	*/
		/*while(y<=i){
			printf("%d ",y);
			y++;

		}
		printf("\n");
		x++;	
	}				*/


	/*int i,j=0,k=1,sayi,toplam=0;

	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);

	for(i=0;i<sayi;i++){
	printf("%d ",j);
		toplam=k+j;
		j=k;
		k=toplam;
		
	}					*/


	/*int i,asal=0;
	int sayi;

	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);

	for(i=2;i<sayi; i++){
		
	if(sayi%i==0){
			asal=1;
			break;
		}
	}

	if(asal==0)
		printf("%d sayisi asal sayidir",sayi);
	else
		printf("%d sayisi asal sayi degildir",sayi);	*/

	/*int num1,num2,EBOB,EKOK,counter;
	int bigNum,LittleNum;

	printf("Lutfen 2 sayi giriniz:");
	scanf("%d%d",&num1,&num2);

	if(num1>num2){

		bigNum=num1;
		LittleNum=num2;
	}
	else{
		bigNum=num2;
		LittleNum=num1;
	}

	counter=bigNum;

	while(1){
		
		if(counter%bigNum==0 && counter%LittleNum==0){
			EKOK=counter;
			break;
		}
		counter++;
}

	counter=LittleNum;

	while(1){

		if(bigNum%counter==0 && LittleNum%counter==0){
			EBOB=counter;
			break;
		}
		counter--;
	}
	printf("%d sayisinin Ekoku:%d ve %d sayisinin EBOBu:%d",num1,EKOK,num2,EBOB);		*/

	/*int i,j,toplam=0,sayi;

	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&j);


	for(i=1; i<=j; i++){
		
		if(i%2==1){
			continue;
		}

		
		toplam+=i;
			

	}
	printf("%d",toplam);		*/
	










	


					

						
		


	

		

		


		
	
		








		




	
	
		
		
		
		
	
	
	
	return 0 ;
	
}
