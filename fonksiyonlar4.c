#include<stdio.h>


/*int asalMi(int sayi);
void smithSayi(int sayi);

int main(int argc, char const *argv[]){

	int sayac=2,kontrol;
	while(sayac<100){
		kontrol=asalMi(sayac);
		if(kontrol==0){
			smithSayi(sayac);
		}
		sayac++;

	}

	return 0;
}

int asalMi(int sayi){

	int i;
	for (i = 2; i <sayi; ++i){
		if(sayi%i==0){
			return 0;
		}
	}
	return 1;
}
void smithSayi(int sayi){
	int temp,geciciSayi,i,sayiBasamakTop=0,bolenBasamakTop=0,a;
	geciciSayi=sayi;
	temp=sayi;
	while(geciciSayi!=0){
		sayiBasamakTop+=geciciSayi%10;
		geciciSayi/=10;
	}
	for (i = 2; 1 <temp ; ++i){
		while(temp%i==0){
			a=i;
			while(a!=0){
				bolenBasamakTop+=a%10;
				a/=10;
			}
			temp/=i;
		}
	}
	if (bolenBasamakTop==sayiBasamakTop){
		printf("%d ",sayi);
	}

}  */

/*int asalMi(int sayi);
int toplamAsal(int sayi);

int main(int argc, char const *argv[])
{
	int sayac,kontrol,sonuc=0;
	for(sayac=2;sayac<=100;sayac++){
		kontrol=0;
		for (int i = 2; i <sayac; ++i){
			if(sayac%i==0){
				kontrol=1;
				break;
			}
		}
		if(kontrol){
			if(toplamAsal(sayac)!=0){
				sonuc=asalMi(toplamAsal(sayac));
			if(sonuc==1){
				printf("%d ",sayac);
			}
			}
			
		}
		
	}

	return 0;
}

int asalMi(int sayi){
	int i;
	for (i = 2; i <sayi; ++i){
		if(sayi%i==0){
			return 0;
		}
	}
	return 1;
}

int toplamAsal(int temp){
	int i,toplam=0,b,kontrol=0,a;

	for (i = 2; i<=temp; ++i){
		if(temp%(i*i)==0){
			kontrol=1;
			break;
		}
		while(temp%i==0){
			toplam+=i;
			temp/=i;
		}

	}
	if(kontrol==0){
			return toplam;
		}
		return 0;
}				*/

/*



while(sayac<100){
		kontrol=asalMi(sayac);

		if(kontrol==0){
			sonuc=asalMi(toplamAsal(sayac));

		}
		
		if(sonuc==1){
			printf("%d ",sayac);
		}
		sayac++;

	}

/*
 int asalMi(int sayi);
int toplamAsal(int sayi);
int main(){
	int sayac=1,kontrol=1,sonuc=0;
	while(sayac<100){
		kontrol=0;
		kontrol=asalMi(sayac);
		if(kontrol==0){
			if(toplamAsal(sayac)!=0){
				sonuc=asalMi(toplamAsal(sayac));
				if(sonuc==1){
					printf("%d ",sayac);
				}
			}
			
		}
		sayac++;
	}
	return 0;
}

int asalMi(int sayi){
	int i;

	for (i = 2; i <sayi; ++i){
		if(sayi%i==0){
			return 0;
		}
	}
	return 1;
}

int toplamAsal(int sayi){
	int i,toplam=0,kontrol=0;
	for (i = 2; i <=sayi; ++i){
		if(sayi%(i*i)==0){
			kontrol=1;
			break;
		}
		while(sayi%i==0){
			toplam+=i;
			sayi/=i;
		}
	}
	if(kontrol==0){
		return toplam;
		}
	return 0;
}	*/

/*int yalanciAsalSayi(int sayi);
int asalMi(int sayi);
int main(int argc, char const *argv[])
{
	int sayac=1,sonuc;
	while(sayac<800){
		sonuc=asalMi(sayac);
		if(sonuc==0){
			if(yalanciAsalSayi(sayac)){
				printf("%d ",sayac);
							
			}
		}
		sayac++;
	}
	
	return 0;
}

int asalMi(int sayi){
	int i;
	for (i = 2; i <sayi; ++i){
		if(sayi%i==0){
			return 0;
		}
	}
	return 1;
}


int yalanciAsalSayi(int sayi){
	int temp,kontrol=0;
	while(sayi!=0){
		temp=sayi%10;
		if(temp==0){
			break;
		}
		
		kontrol=asalMi(temp);
		if(kontrol==0){
			break;
		}
		sayi/=10;
	}
return kontrol;
	
}		*/



						// ***KUVETLI SAYI *** FONKSIYONLA YAPILACAK!!!//

/*int main(int argc, char const *argv[])
{
	int i=2,temp,geciciSayi,j,toplam,a,kontrol=0,kontrol2;
	for (j = 1; j <=100; ++j)
	{
		kontrol=1;
		kontrol2=0;
		a=j;
		for (i = 2; i <=j; ++i){
			while(a%i==0){
				kontrol2=1;
				temp=i;		//98  7 2
				if(j%(temp*temp)!=0){
					kontrol=0;
				}
				if(a%(temp)==0){
					kontrol2=1;
				}
				a/=i;
			//printf("%d ",toplam);
			}
		}
		if(kontrol2==1 && kontrol==1){

			printf("%d ",j);
		}
	}

		
	return 0;
}		*/

/*int main(int argc, char const *argv[])
{
	int i,j,toplam=0,geciciSayi,temp,kontrol,a,x;

	for(i=1;i<1000;i++)
	{
		temp=i;
		toplam=0;
		geciciSayi=i*i;
		kontrol=0;
		x=1;
		while(temp!=0)
		{
			kontrol++;
			temp/=10;
		}
		for (j=1;j<=kontrol; ++j)
		{
			x*=10;
		}
		while(geciciSayi!=0)
		{
			a=geciciSayi%x;
			toplam+=a;
			geciciSayi/=x;
		}
		if(toplam==i){
			printf("%d ",i);
		}
	}

	return 0;
}		*/

/*int kapreKarSayi(int sayi);
int main(int argc, char const *argv[])
{
	int sayac=1,a=0;
	while(sayac<100)
	{
		a=kapreKarSayi(sayac);
		if(a==1){
			printf("%d ",sayac);
		}
		

		sayac++;
	}
	return 0;
}
int kapreKarSayi(int sayi)
{
	int i,toplam=0,kontrol=0,x=1,temp,geciciSayi;
	temp=sayi;
	geciciSayi=sayi*sayi;
	while(temp!=0)
	{
		kontrol++;
		temp/=10;
	}
	for (i = 1; i <=kontrol; ++i)
	{
		x*=10;
	}
	while(geciciSayi!=0)
	{
		temp=geciciSayi%x;
		toplam+=temp;
		geciciSayi/=x;
	}
	if(toplam==sayi){
		return 1;
	}

}		*/

// ****ZENGIN SAYI****//
/*
int zenginSayi(int sayi);
int main(int argc, char const *argv[])
{
	int sayac=1,a;
	while(sayac<100){

		a=zenginSayi(sayac);
		if(a){
			printf("%d ",sayac);
		}



		sayac++;
	}
	return 0;
}

int zenginSayi(int sayi)
{
	int i,toplam=0;
	for (i = 2; i <sayi; ++i)
	{
		if (sayi%i==0)
		{
			toplam+=i;
		}
		
	}
	if(sayi<toplam){
		return 1;
	}
	return 0;

}	*/

// ****YARI MUKEMMEL SAYI****//

/*#define SIZE 100

int yariMukemmelSayi(int sayi[],int size);

int main(int argc, char const *argv[])
{
	int sayac=1,a,sayi[SIZE];
	while(sayac<100)
	{
		a=yariMukemmelSayi(sayi,sayac);
		if(a==sayac){
			printf("%d ", sayac);
		}
		sayac++;
	}
	return 0;
}

int yariMukemmelSayi(int sayi[],int size)
{	int i,j=0,toplam=0;
	for(i=2;i<size;i++){
		if(size%i==0){
			sayi[j++]=i;
		}
	}
	for (i = j-3; i <j; ++i)
	{
		toplam+=sayi[i];	
	}
	return toplam;
}*/

/*int main(int argc, char const *argv[])
{
	int sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	for (int i = 1; i <=sayi; ++i)
	{
		for (int j = 1; j <=sayi; ++j)

		{
			if(i==1 || sayi==i ||i==j){
				printf("*");	
			}		//1 4   2  3    3  2   4  1
			else{
				if(j==1 || j==sayi || (j==sayi-i+1)){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
			
		}
		printf("\n");
	}
	return 0;
}*/



/*int main(int argc, char const *argv[])
{
	int sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	for (int i = 1; i <=sayi; ++i)
	{
		for (int j = 1; j <=sayi; ++j)

		{
			if(i==1 || j==1 ||j==sayi || sayi==i ||i==j ||j==sayi-i+1){
				printf("*");	
			}		//1 4   2  3    3  2   4  1
			else{
				printf(" ");
			}
			
		}
		printf("\n");
	}
	return 0;
}		*/


int main(int argc, char const *argv[])
{
	int sayi,a=0;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	int x=sayi*2-1;
	for (int i = 1; i <=sayi; ++i)
	{	
		for (int j = 1; j <=x; ++j)
		{
			if(i==1 || sayi==i ||j==1 || j==x){
				printf("*");	
			}
			else if( j==sayi-a+1 || j==sayi+a-1 ){

				for (j=sayi-a;j<sayi+a-1;j++)
				{
					printf("*");
				}
			}
			else{
				printf(" ");
			}
			
		}
		a++;
		printf("\n");

	}

	return 0;
}		






