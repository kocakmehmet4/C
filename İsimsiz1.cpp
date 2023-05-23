
	int faktoriyel,i,sayi;
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
	   		
}	
