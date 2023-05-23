#include<stdio.h>

int main (void){
	
	
	
/*	int i,j,x=0,sayi;
	
	
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	
	for(i=1; i<sayi; i++){	
	
	x+=i;
		for(j=1; j<x; i++){
			
		
		printf("*");
		j++;
}
		
		}
	
		for(j=1; j<i; j++){
			printf(" ");
		}
			printf("\n");		*/
			
		//A	
		/*	int yildizSayisi=3,sutun,satir,bosluk;
			printf("Lutfen yildiz sayisini giriniz:");
			scanf("%d",&yildizSayisi);
			
			for(satir=1;satir<=yildizSayisi;satir++){
				
				for(sutun=1; sutun<=satir; sutun++ ){
					printf("*");
				}
				printf("\n");
			}
			printf("\n");
			
		//B
		
			for(satir=yildizSayisi; satir>=1; satir--)	{
				
				for(sutun=1; sutun<=satir; sutun++){
					printf("*");
				}
				printf("\n");
			}
		//C 
		 for(satir=yildizSayisi; satir>=1; satir--){
		 	
		 	for( bosluk=0; bosluk<yildizSayisi-satir; bosluk++ ){
		 		printf(" ");
			 }
		 	for(sutun=1; sutun<=satir; sutun++){
		 		printf("*");
			 }
		 	printf("\n");
		 }	
		 //D
		  for(satir=1; satir<=yildizSayisi; satir++){
		 	
		 	for(bosluk=0; bosluk<yildizSayisi-satir; bosluk++ ){
		 		printf(" ");
			 }
		 	for(sutun=1; sutun<=satir; sutun++){
		 		printf("*");
			 }
		 	printf("\n");
		 }	*/
													
													
	/*	float pi=0.0,sayi,toplam,i,j
		
		printf("Lutfen bir sayi giriniz:");
		scanf("%d",&sayi);
		
			for(i=1;i<=sayi; i+=4;){
				
				for(j=3; i<=sayi; j+=4)
			}
					*/
					
	/*	double pi =0.0;
		double num = 4.0;
		double payda =1.0;
		
		long int loop;
		long int dogruluk=100;
		
		for(loop=1; loop<=dogruluk; loop++){
			
			if(loop%2!=0){
				pi+=num/payda;		
			}
			if(loop%2==0){
			pi-=num/payda;	
			}
			
				payda+=2.0;
		}
		printf("iterasyon sayiisi:%ld,pi: %f",dogruluk,pi);		*/
		
		
		/*int a,b,c,i,sayi1,sayi2,toplam=0;
		int iterasyon=500;
		printf("lutfen 2 sayi giriniz:");
		scanf("%d%d",&sayi1,&sayi2);
		
		for(i=1; i<=sayi1; i++){
		
			if(toplam<=iterasyon){
			
			toplam=sayi1*sayi1+sayi2*sayi2;
			printf("toplam:%d",toplam);
			break;
		}
		else {
			printf("kareleri toplami 500 ü geçti!");
		}
		
		}			*/
		
		
		/*long int kenar1;
		long int kenar2;
		long int hipotenus;
		long int hipotenusKare;
		long int kenarlarinKaresi;
		long int iterasyom;
		
		printf("bir sayi giriniz:");
		scanf("%ld",&iterasyon);
		
		for(kenar1=1; kenar1<=iterasyon;kenar1++){
			
			
			for(kenar2=1;kenar2<=iterasyon;hipotenus++){
				for(hipotenus=1;hipotenus<=iterasyon;hipotenus++){
					kenarlarinKaresi=kenar1*kenar1+ kenar2*kenar2;
					hipotenusKare=hipotenus*hipotenus;
					
					if(hipotenusKare==kenarlarinKaresi){
						printf("kenar1:%d,kenar2:%d hipotenus:%d\ns")
					}
				}
			}
		}				*/
		
		
		
		
		
		
		
	
			
	
	
	
	
	return 0 ;
}
