#include<stdio.h>


/*void PrintArray(int a [], int boyut){
	for (int i = 0; i < boyut; ++i){
		printf("%d",a[i]);
	}
	printf("\n");
}



int main(int argc, char const *argv[]){

	int boyut,i,j,a[10],sayi,temp;

	printf("Lutfen dondurme dizisinin boyutunu giriniz:");
	scanf("%d",&boyut);
	printf("Lutfen rakamlari giriniz giriniz:");
	for (int i = 0; i <boyut; ++i){
		scanf("%d",&a[i]);
	}
	printf("Lutfen kac kez saga kayacagini giriniz:");
	scanf("%d",&sayi);
	for(i=0;i<sayi;i++){
		temp=a[boyut-1]; 3       
		for (j=boyut-1;j>0; j--){
			a[j]=a[j-1];2
			
		}
		a[j]=temp;3
	}
	printf("Dizideki elemanlarin son hali:");
	PrintArray(a,boyut);

																								
	return 0;
}		*/
	
/* int faktoriyelYazdir(int sayi);


int  main(int argc, char const *argv[])
{
	printf("%d ",faktoriyelYazdir(5));
	
	return 0;
}


 int faktoriyelYazdir(int sayi){

 	if(sayi==0 || sayi==1){
 		return 1 ;
 	}
 	 int sonuc=sayi*faktoriyelYazdir(sayi-1);
 	return sonuc;
 }  */


/*void GirisUcreti(int,float);
int main(int argc, char const *argv[])
{	
	int saat,ucret=0,araba,toplamGiris=0;
	
	
	printf("Lutfen kac adet araba girmek istiyorsaniz giriniz(durmak icin 0 )");
	while(saat!=0){
	printf("\nLutfen saati giriniz:");
	scanf("%d",&saat);
	if(saat!=0){
	GirisUcreti(saat,ucret);
	}
	toplamGiris+=saat;
	
		
	}
	printf("%d\n",toplamGiris);


	return 0;
}

void GirisUcreti(int saat,float ucret){
	float temp=0;
	int kontrol=0;
	float toplamUcret;
	ucret=0;
	
	if(saat<=3){
		ucret+=2;
	}
	else if(saat>3 || saat<=20){
		for (int i=saat-3;i>0;i--){
			kontrol++;
		}
		temp+=kontrol*0.5;
		ucret+=temp+2;	
	}
	if(saat>20){
		ucret=10;
	}
	//printf("%.2f",ucret);
	toplamUcret+=ucret;
	printf("%.2f",toplamUcret);
	
}		*/


/*void girisUcreti(int,float);
void ucret1(int saat,float ucret);
int  main(int argc, char const *argv[])
{
	int saat,ucret;
	float toplamUcret=0;

	printf("Lutfen ilk arabanin kac saat park edeceğini giriniz:");
	scanf("%d",&saat);
	girisUcreti(saat,ucret); 
	printf("\nLutfen ikinci arabanin kac saat park edeceğini giriniz:");
	scanf("%d",&saat);
	girisUcreti(saat,ucret); 
	printf("\nLutfen ucuncu arabanin kac saat park edeceğini giriniz:");
	scanf("%d",&saat);
	girisUcreti(saat,ucret); 	
	ucret1(saat,ucret);
	return 0;
}

void girisUcreti(int saat,float ucret){

	float temp=0;
	int kontrol=0;
	ucret=0;
	if(saat<=3){
		ucret+=2;
	}
	else if(saat>3 || saat<=20){
		for (int i=saat-3;i>0;i--){
			kontrol++;
		}
		temp+=kontrol*0.5;
		ucret+=temp+2;	
	}
	if(saat>20){
		ucret=10;
	}
	printf("%.2f",ucret);
}	*/


/*int aralardakiAsallar(int x){
	int i,j,bayrak=0;

	for (i = 2; i <x/2; ++i){
		if(x%i==0){
			bayrak=1;
			break;

		}
	}
	return bayrak;

}

int main(int argc, char const *argv[]){
	int i,bayrak,sayi1,sayi2,temp;
	printf("Lutfen iki sayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);

	if(sayi1>sayi2){
		temp=sayi1;
		sayi1=sayi2;
		sayi2=temp;
	}
	printf("%d ve %d aralarindaki asal sayilar:\n",sayi1,sayi2);
	for (i=sayi1+1; i<sayi2; ++i){
		bayrak=aralardakiAsallar(i);
		if(bayrak==0){
			printf("%d ",i);
		}
	}	
	return 0;
}		*/

/*void ortalamaHesapla(float A[],float n);
int main(int argc, char const *argv[]){

	int n;
	float A[100];
	printf("Lutfen kac adet sayinin ortalamasinin hesaplanmasini istediginizi giriniz:");
	scanf("%d",&n);
	ortalamaHesapla(A,n);
	
	return 0;
}
void ortalamaHesapla(float A[100],float n){

	int i;
	float toplam=0,ortalama;
	printf("Lutfen sayilari giriniz:");
	for (int i = 0; i <n; ++i){
		scanf("%f",&A[i]);
		toplam+=A[i];
	}
	ortalama=toplam/n;
	printf("%.2f",ortalama);

}*/
//MUKEMMEL SAYİLAR

/*int mukemmelSayi(int deger){
	int toplam=1,i,j;


	for(i=2;i<=deger;i++){
		toplam=1;
		for(j=2;j<i;j++){
			if(i%j==0){
				toplam+=j;
			}

		}
		if(i==toplam){
			printf("%d ",i);
		}
	}
}	

int main(int argc, char const *argv[]){
	int deger =100;
	mukemmelSayi(deger);

	return 0;  
}			*/
/*int mukemmelSayi(int deger);

int main(int argc, char const *argv[]){
	int j;

	for (j=2;j<=1000; j++){
		if(mukemmelSayi(j)){
			printf("%d\n",j);
		}
	}

	return 0;
}
int mukemmelSayi(int deger){

	int toplam=1,i;

	for ( i = 2; i <deger; ++i){
		if(deger%i==0){
			toplam+=i;
		}
	}
	if(toplam==deger){
		return 1;
	}
	else{
		return 0 ;
	}	

}	*/

#define SIZE 80

int testPalindrome(char array[], int left,int right);

int main(int argc, char const *argv[]){

	char c,string[SIZE],copy [SIZE];
	int count=0,copyCount,i;
	printf("Lutfen bir cumle giriniz:");
	while((c=getchar())!='\n' && count<SIZE){
		string[count++]=c;
	}
	string[count]='\0';
	for(copyCount=0,i=0; string[i]!='\0';i++){
		if(string[i]!=' '){
			copy[copyCount++]=string[i];
		}
		
	}
	if(testPalindrome(copy,0,copyCount-1)){
		printf("%s palindrom'dur.\n",string);
	}
	else{
		printf("\"%s\"palindrom degildir.\n",string);

	}	
	
	return 0;
}
int testPalindrome(char array[],int left,int right){
	if(left==right || left>right){
		return 1;
	}
	else if (array[left]!=array[right]){
		return 0;
	}
	else{
		return testPalindrome(array,left+1,right-1);
	}
}





