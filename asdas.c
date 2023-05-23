#include<stdio.h>
#include<math.h>

int main (void){
	



/*int binaryNum,temp,total=0,counter=0;
	
	printf("Lutfen binary sayi giriniz:");
	scanf("%d",&binaryNum);

		while(binaryNum!=0){
			
			temp=binaryNum;
			temp%=10;
			total+=temp*pow(2,counter);
			binaryNum/=10;
			counter++;
			printf("%d",temp);
		}
		
		printf("toplam:%d",total);					*/

	//A
	/* int sayi,satir,sutun;

	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);

	for (satir = 1;  satir<=sayi; satir++){

		for (sutun = 1; sutun <= satir; sutun++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	//B

	for(satir=sayi; satir>=1; satir--){

		for(sutun=1; sutun<=satir; sutun++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	//C

	for(satir=sayi; satir>=1; satir--){

		for (int bosluk= 0; bosluk < sayi-satir; bosluk++){
			printf(" ");
}
		for (sutun =1; sutun <=satir; sutun++){
			printf("*");

		}
	
		printf("\n");
	}
	printf("\n");
	//D
	for(satir=1; satir<=sayi; satir++){
		for(int bosluk=sayi; bosluk-satir>0; bosluk--){
			printf(" ");
		}
		for (sutun = 1; sutun <= satir; sutun++){
			printf("*");
		}
		printf("\n");
		
		
		
	}   */

	/*double pi=0.0;
	double num=4.0;
	double alt=1.0;

	long int loop;
	long int iterasyon=1000;

	for (loop=1; loop <=iterasyon; loop++){
		if(loop%2!=0){
			pi+=num/alt;
		}
		if(loop%2==0){
			pi-=num/alt;

		}
		alt+=2.0;
	}
	printf("%ld kez dondugunde sonuc:%f",iterasyon,pi);	*/

/*	long int kenar1;
	long int kenar2;
	long int hipotenus;
	long int hipotenusKare;
	long int kenarlarinKaresi;
	long int loop;

	printf("Lutfen bir sayi giriniz:");
	scanf("%ld",&loop);

	for(kenar1=1; kenar1<=loop; kenar1++){
		for (kenar2 = 1; kenar2 <= loop; kenar2++){
			for(hipotenus=1; hipotenus<=loop; hipotenus++){
				kenarlarinKaresi=kenar1*kenar1+kenar2*kenar2;
				hipotenusKare=hipotenus*hipotenus;

				if(hipotenusKare==kenarlarinKaresi){
					printf("ilk sayi:%ld ikinci sayi:%ld hipotenus:%ld\n",kenar1,kenar2,hipotenus);
				}

			}
	
		}
	}					*/

	/*long int sayi=10000;
	 int a=0,b=1,i=2;
	long int temp,toplam=0;




	while(a<=b){
	toplam=a+b;
		printf("%d ",a);



		a=b;
		while(i<=b){	
		if(a%i==0){
			printf("%d",a);
		}
		else{
			printf("%d*",a);
			
		}
		i++;
	}
		b=toplam;



	
		if(a>=sayi)
		break;
	


}

	return 0;
}	*/


	int main(){

		char string[20]={"one","two","tree"};
		printf(string[1]);
	}

