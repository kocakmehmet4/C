#include<stdio.h>

/*int recursiveMax(int array[],int size,int max,int index){
	if(index<size){
		if(array[index]>max){
			max=array[index];
		}
		index++;
		return recursiveMax(array,size,max,index);
	}
	return max;
}
int recursiveMin(int array[],int size,int min,int index){
	if(index<size){
		if(array[index]<min){
			min=array[index];
		}
		index++;
		return recursiveMin(array,size,min,index);
	}
	return min;
}

int main(){
	int boyut,i,max,min;
	printf("Lutfen dizinin kac boyutlu olmasini istediginizi giriniz:");
	scanf("%d",&boyut);
	int dizi[boyut];
	for(i=0;i<boyut;i++){
		printf("dizinin %d. elemani:",i+1);
		scanf("%d",&dizi[i]);
	}
	max=dizi[0];
	min=dizi[0];
	int a=1;
	printf("Max:%d\n",recursiveMax(dizi,boyut,max,a));
	printf("Min:%d\n",recursiveMin(dizi,boyut,min,a));
	return 0;
}*/
/*int recursiveReverse(int num,int len){
	if(num!=0){
		return num%10*pow(10,len-1)+recursiveReverse(num/10,len-1);
	}
	return num;
}
int main(){
	int sayi,temp,basamakSayisi=0;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	temp=sayi;
	while(temp!=0){
		basamakSayisi++;
		temp/=10;
	}
	printf("%d",recursiveReverse(sayi,basamakSayisi));
	
	return 0;
}*/
/*int recursivePalindrome(int num,int *a){
	if(num!=0){
		*a*=10;
		*a=*a+num%10;
		return recursivePalindrome(num/10,a);
	}
	return *a;
}
int main(){
	int sayi,temp,x=0;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	/*temp=sayi;
	while(temp!=0){
		x*=10;
		x+=temp%10;
		temp/=10;
	}
	printf("\n",recursivePalindrome(sayi,&x));
	if(x==sayi){
		printf("Girilen Sayi palindromedir");
	}
	else{
		printf("Girilen sayi palindrome degildir.");
	}
}*/

int recursivePalindrome(int num,int len){
	if(num!=0){
		return num%10*pow(10,len-1)+recursivePalindrome(num/10,len-1);
	}
	return num;
}
int main(){
	int sayi,temp,basamak=0;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	temp=sayi;
	while(temp!=0){
		basamak++;
		temp/=10;
	}
	int sonuc=recursivePalindrome(sayi,basamak);
	//printf("sonuc:%d",sonuc);
	if(sonuc==sayi){
		printf("Girilen Sayi palindromedir");
	}
	else{
		printf("Girilen sayi palindrome degildir.");
	}
}





































