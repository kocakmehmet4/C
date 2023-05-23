#include <stdio.h>
#include<stdlib.h>

int main(void) {


	/*int i,faktor=1,sayi;
	printf("Lutfen faktoru alinacak sayi giriniz");
	scanf("%d",&sayi);

	for(i=1; i<=sayi; i++){

		faktor*=i;
		printf("%d!=%d\n",i,faktor);

	}

			*/

/*	int i, sayi,geciciSayi,kalan;

	printf("Lutfen sayi giriniz");
	scanf("%d",&sayi);
	printf("Sayini tersi: ");
	while(sayi != 0){

		geciciSayi=sayi;
		geciciSayi%=10;
		kalan=geciciSayi;
		printf("%d",kalan);
		sayi/=10;
	}			*/


	/*    int number, reversed = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &number);
    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }
    printf("Reversed number = %d", reversed);		*/


/*	int sayi1,sayi2,sonuc;
	int i;

	printf("Lutfen 2 sayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);
	
	printf("1)Toplama islemi\n2)Cıkartma islemi\n3)Carpma islemi\n4)Bolme islemi\n");

	printf("Lutfen Yukaridan bir islem giriniz:");
	scanf("%d",&i);
	fflush(stdin);
	

	switch(i){

		case 1:
		sonuc=sayi1+sayi2;
			printf("Sonuc:%d",sonuc);
			break;
		case 2:
		sonuc=sayi1-sayi2;
		printf("Sonuc:%d",sonuc);
		break;
		case 3:
		sonuc=sayi1*sayi2;
		printf("Sonuc:%d",sonuc);
		break;
		case 4:
		sonuc=(float)sayi1/sayi2;
		printf("Sonuc:%d",sonuc);
		break;
		default :
			printf("Hatali islem girdiniz!");
		break;

	}	*/		

	/*int islem,bakiye=1000,yatirma,cekme;
	
	printf("Efendim hosgeldinz...\n");
	printf("Lutfen yapmak istediginiz islemi giriniz:\n");
	printf("1)Para cekme\n2)Para yatırma\n3)Kart bakiye sorgulama\n4)Kart iade\n");
	scanf("%d",&islem);

	switch(islem) {


		case 1:
		printf("Lutfen cekmek istediginiz tutari giriniz:");
		scanf("%d",&cekme);
		if(cekme>=islem){
			printf("Hata!\nBakiyeniz yetersiz!\n");
			break;
		}
		else
			bakiye-=cekme;
		printf("yeni Bakiyeniz:%d",bakiye);
		break;
		case 2:
		printf("Lutfen yatırmak istediginiz miktari giriniz:");
		scanf("%d",&yatirma);
		bakiye+=yatirma;
		printf("yeni Bakiyeniz:%d\n",bakiye);
		break;
		case 3:
		printf("yeni Bakiyeniz:%d\n",bakiye);
		break;

		case 4:
		printf("Kartiniz iade ediliyor lutfen bekleyiniz.\n Iyi gunler efendim...");
		break;
		default:
			printf("Hatali giris yaptiniz:");
			break;
	}				*/




	// arkadas sayi 

	/*int i,sayi1,sayi2,toplam1=0,toplam2=0,j;

	printf("Lutfen 2 sayi giriniz");
	scanf("%d%d",&sayi1,&sayi2);


	for(i=1; i<sayi1; i++){

		if(sayi1%i==0){

			toplam1+=i;
		}
}
		for(j=1; j<sayi2; j++){


		if(sayi2%j==0){

			toplam2+=j;
		}


	}
		if(sayi1==toplam2&& sayi2 ==toplam1){

			printf("%d ve %d arkadas sayilardir.",sayi1,sayi2);
		}
		else{
			printf("%d ve %d arkadas sayilar degildir.",sayi1,sayi2);
		}			*/





/*	int faktoriyel,i,sayi;
	int x,j,counter=0;
	int k=1,toplam=0;
	int b=1;
	char islem;
	

	printf("faktoriyel icin:f | Yildiz icin:y | Cift sayi icin:c | Tek sayi icin:t\n");
	printf("Lutfen bir sayi giriniz");
	scanf("%d",&sayi);
	fflush(stdin);
	printf("Yapmak istediginiz islemi secin");
	islem=getchar(); 

	switch(islem){

		case 'f' :	
		case 'F' :
			printf("Faktoriyelini istediginiz sayiyi giriniz:");
			scanf("%d",&sayi);
			

			for(i=1;i<=sayi; i++){
				faktoriyel*=i;
	}	
			printf("%d",faktoriyel);
	   break;
		
	   case 'y' :
	   case 'Y' :

	   		while(sayi>counter){

	   			x=2*counter+1;
	   			j=1;
	   			while(j<sayi-counter){
	   				printf(" ");	
	   				j++;
	   			}
	   			j=1;
	   			while(j<=x){
	   				printf("*");
	   				
	   				toplam+=j;
	   				j++;
	   				
	   			}
	   			printf("\n");
	   			counter++;
	   			
	   		}
	   		
	   	break;
	   	case 't' :
	   	case 'T' :
	   			
	   		while(sayi>=k){
				
	   			if(k%2==1){
	   				printf("%d ",k);
	   				toplam+=k;
	   			}
	   			
	   			k++;
	   		}
	   		printf("toplam: %d",toplam);
	   	break;

	   	case 'c' :
	   	case 'C' :
	   		while(sayi>=b){
				
	   			if(b%2==0){
	   				printf("%d ",b);
	   				toplam+=b;
	   			}
	   			
	   			b++;
	   		}
	   		printf("toplam: %d",toplam);
	   	break;
	   	default :
	   		printf("Hatali islem yaptiniz!");
	   		
}								*/

		
		










	 return 0;
}	