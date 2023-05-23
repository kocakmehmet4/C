#include <stdio.h>


int  main(void)
{

	/*
	1 1 2 3 5 8 11 


	*/
	
/*int sayi,a=0,b=1,toplam=0,counter=1;

	
	
 while(sayi>=counter){
  
	printf("%d ",a);
	toplam=a+b;
	a=b;
	b=toplam;
	counter++;

}						*/



	int sayi,x,j,counter=0;

	printf("lutfen bir sayi giriniz");
	scanf("%d",&sayi);

	while(sayi>counter){

		x=2*counter+1;
		j=1;
		while(j<sayi-counter){
			printf(" ");
			j++;
		}
		j=1;
		while(x>=j){

	printf("*");
			j++;
}	
	printf("\n");
	counter++;


	}		
	/*int sayi2,k=1,toplam1=0;
	printf("Lutfen bir sayi giriniz:");
	   		scanf("%d",&sayi2);
	   		while(sayi2>=k){
				
	   			if(k%2==1){
	   				printf("%d ",k);
	   				toplam1+=k;
	   			}
	   			
	   			k++;
	   		}
	   		printf("toplam: %d",toplam1);		*/
	   		








	return 0;
}