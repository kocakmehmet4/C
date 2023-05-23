#include<stdio.h>

	int main(void){
		
	
 
 int bitDuzeyi,sayi,geciciSayi,basamakSayisi=0;

	printf("Lutfen bir sayi giriniz");
	scanf("%d",&sayi);

	geciciSayi=sayi;
 
  while(sayi !=0){

  		
  		bitDuzeyi= geciciSayi*i;
  		i*=10;
		sayi/=2;
		basamakSayisi++;
	 
	printf("%d\n",bitDuzeyi);	
	}
	
	 

	printf("\nbasamakSayisi:%d\n",basamakSayisi);


		return 0 ;
}
