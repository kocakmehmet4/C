#include<stdio.h>
#include<math.h>
#include<time.h>


	
	/*double ucretiHesapla(double saat);


int main (void){
	
	
	double parkSuresi;
	double parkUcreti;
	double toplamUcret;
	double toplamSure;
	int i;
	
	printf("3 araba icin park suresini giriniz:");
	
	for( i =1;i<=3;i++){
		scanf("%lf",&parkSuresi);
		
		if(i==1){
			printf("%5s%15s%15s","Araba","Sure","Ucret");
		}
		parkUcreti=ucretiHesapla(parkSuresi);
		printf("%5d%15.1f%15.1f\n",i,parkSuresi,parkUcreti);
	}
	printf("%5d%15.1f%15.1f\n","TOPLAM",toplamSure,toplamUcret);
	
	return 0 ;
}

	double ucretiHesapla(double saat){
	
	double ucret;
	if(saat<3.0){
		ucret=2.0;
	}
	else if(saat<19.0){
		ucret=2.0+ ((saat-3.0)*0.5);	
	}
	else{
		ucret=10;
	}
	return ucret;
	
}  */

	/*void yuvarla(void);

	int main(){
		
		yuvarla();
		
		return 0 ;
	}
	void yuvarla(void){
		
		double sayi;
		double yuvarlanmisSayi;
		int i ;
		
		printf("Sayi giriniz:");
		for(i=1;i<=3;i++){
			scanf("%lf",&sayi);
			yuvarlanmisSayi=floor(sayi+0.5);
			printf("Yuvarlanmis Sayi:%lf\n",yuvarlanmisSayi);
		}
		
	} */
	
	void carpimIslemi (void);
	
	int main(void){
		
		srand(time(NULL));
		
		
		carpimIslemi();
		
		return 0 ;
	}
	
	void carpimIslemi (void){
	
		int sayi=0;
		int a,b;
		printf("Cikmak icin (-1)");
		while(sayi!=-1)
		 a =rand()%10;
		 b =rand()%10;
		
		printf("%d kere %d kactir",a,b);
		scanf("%d",&sayi);
		
		if(sayi!=-1 && sayi==a*b){
			printf("Dogru bildiniz!");
		}
		while(sayi!=-1 && sayi!=a*b){
			printf("Yanlis girdiniz! Lutfen tekrar giriniz.\n");
			scanf("%d",&sayi);
		}
		if(sayi!=-1){
			printf("Cevabiniz Dogru!\n");
		}
		
	
		
	}
	
	



	
