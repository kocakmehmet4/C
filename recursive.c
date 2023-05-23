#include<stdio.h>


/*void recursiveMaxMin(int dizi[],int max,int min,int size ,int index);

int main(int argc, char const *argv[])
{
	int size,max,min,i;
	printf("Lutfen dizinin kac elemanli olacagini giriniz:");
	scanf("%d",&size);
	int dizi[size];
	for (i = 0; i <size; ++i)
	{
		printf("Dizinin %d. elemani:",i+1);
		scanf("%d",&dizi[i]);
	}
	max=dizi[0];
	min=dizi[0];
	int index=1;
	recursiveMaxMin(dizi,max,min,size,index);
	return 0;
}
void recursiveMaxMin(int dizi[],int max,int min,int size ,int index)
{
	if(index<size){
		if(dizi[index]>max){
			max=dizi[index];
		}
		if(dizi[index]<min){
			min=dizi[index];
		}
		index++;
		recursiveMaxMin(dizi,max,min,size,index);
	}
	else{
		printf("En buyuk eleman:%d,En kucuk eleman:%d",max,min);
	}*/


/*int recursiveMaxBul(int dizi[],int index,int size,int max);
int recursiveMinBul(int dizi[],int index,int size,int min);

int main(int argc, char const *argv[])
{
	int size,max,min,i;
	printf("Lutfen dizinin kac elemanli olacagini giriniz:");
	scanf("%d",&size);
	int dizi[size];
	for (i = 0; i <size; ++i)
	{
		printf("Dizinin %d. elemani:",i+1);
		scanf("%d",&dizi[i]);
	}
	max=dizi[0];
	min=dizi[0];
	int index=1;
	int sonuc1=	recursiveMaxBul(dizi,index,size,max);
	int sonuc2= recursiveMinBul(dizi,index,size,min);

	printf("enBuyukEleman:%d, enKucukEleman:%d\n",sonuc1,sonuc2);

	return 0;
}
int recursiveMaxBul(int dizi[],int index,int size,int max)
{
	if(index<size){
		if(max<dizi[index]){
			max=dizi[index];
		}
		index++;
		return recursiveMaxBul(dizi,index,size,max);
	}
	else{
		return max;
	}

}
int recursiveMinBul(int dizi[],int index,int size,int min)
{
	if(index<size){
		if(dizi[index]<min){
			min=dizi[index];
		}
		index++;
		return recursiveMinBul(dizi,index,size,min);
	}
	else{
		return min;
	}
}*/

//REVERSE NUMBER
/*int recursiveReverse(int num,int len){
	if(len!=0){
		return ((num%10)*pow(10,len-1))+ recursiveReverse(num/10,--len);
	}
	else{
		return num;
	}

}

int main(int argc, char const *argv[])
{      
	int sayi,temp,basamak=0;

	printf("Lutfen tersini istediginiz sayiyi giriniz:");
	scanf("%d",&sayi);
	temp=sayi;
	while(temp>0){
		temp/=10;
		basamak++;
	}
	int sonuc=recursiveReverse(sayi,basamak);
	printf("sonuc:%d",sonuc);

	return 0;
}*/
/*int recursiveFact(int sayi);

int main(int argc, char const *argv[])
{
	int sayi;
	printf("Lutfem faktoriyelini istediginiz sayiyi giriniz:");
	scanf("%d",&sayi);
	int sonuc=recursiveFact(sayi);
	printf("sonuc:%d",sonuc);
	
	return 0;
}
int recursiveFact(int sayi){
	if(sayi==1){
		return 1;
	}
		return sayi*recursiveFact(sayi-1);

}*/

/*int recursiveFibo(int sayi){
		if(sayi==0 || sayi==1){
			return sayi;
		}
		else{
			return recursiveFibo(sayi-2)+recursiveFibo(sayi-1);

		}
		
}

int main(int argc, char const *argv[])
{
	int i,sayi;
	printf("Lutfen kac defa olmasini istediginizi giriniz:");
	scanf("%d",&sayi);
	for (i = 0; i <sayi; ++i)
	{
		printf("%d  ",recursiveFibo(i));
	}
	return 0;
}*/

/*long int recursiveUs(int num,int power){
	if(power==0){
		return 1;
	}
	return num*(recursiveUs(num,power-1));
}

int main(int argc, char const *argv[])
{
	int sayi,us;
	printf("Lutfen sayi giriniz:");
	scanf("%d",&sayi);

	printf("Ussu giriniz:");
	scanf("%d",&us);

	long int sonuc=recursiveUs(sayi,us);
	printf("Sonuc:%d",sonuc);
	return 0;
}*/

/*int recursiveBasamak(int sayi);

int main(int argc, char const *argv[])
{
	int sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);

	int sonuc=recursiveBasamak(sayi);
	printf("%d\n",sonuc);

	return 0;
}
int recursiveBasamak(int sayi){
	static int basamak;
	if(sayi>0){
		basamak++;
		 recursiveBasamak(sayi/10);
	}
	else{
		return basamak;
	}
}*/
/*int recursiveBaseSum(int sayi){
	static int toplam=0;
	if(sayi>0){
		toplam+=sayi%10;
		recursiveBaseSum(sayi/10);

	}
	else{
		return toplam;
	}

}

int main(int argc, char const *argv[])
{
	int sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);

	int sonuc=recursiveBaseSum(sayi);
	printf("%d",sonuc);
	return 0;
}
*/

/*int recursiveEkok(int sayi1,int sayi2){
	return sayi1*sayi2/recursiveEbob(sayi1,sayi2);
}


int recursiveEbob(int sayi1,int sayi2){
	if(sayi2!=0){
		return recursiveEbob(sayi2,sayi1%sayi2);
	}
	else{						      
		return sayi1;
	}


}
int main(int argc, char const *argv[])
{
	int sayi1,sayi2;

	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi1);
	printf("Lutfen ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	int sonuc=recursiveEbob(sayi1,sayi2);
	printf("OBEB:%d",sonuc);
	int sonuc2=recursiveEkok(sayi1,sayi2);
	printf("OKEK:%d",sonuc2);

	return 0;
}*/

/*int RecursiveisPrime(int n,int i){

	if(i==1){
		return 1;
	}
	else{
		if(n%i==0){
			return 0;
		}
		else{
			return RecursiveisPrime(n,i-1);
		}
	}
}

int main(int argc, char const *argv[])
{
	int sayi;

	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	int sonuc=RecursiveisPrime(sayi,sayi/2);
	if(sonuc){
		printf("%d sayisi asal sayidir.",sayi);
	}
	else{
		printf("%d sayisi asal sayi degildir.",sayi);
	}
	return 0;
}*/


int calculateLCM(int num1, int num2)
{
    static int comn = 1;

    if (comn % num1 == 0 && comn % num2 == 0)
        return comn;

    comn++;
    calculateLCM(num1, num2);

    return comn;
}

int main()
{
    int num1 = 0;
    int num2 = 0;

    printf("Enter Number1: ");
    scanf("%d", &num1);

    printf("Enter Number2: ");
    scanf("%d", &num2);

    printf("The Lowest Common Multiple is: %d\n", calculateLCM(num1, num2));

    return 0;
}













