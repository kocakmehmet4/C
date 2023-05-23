#include <stdio.h>


/*#define SIZE 80

int testPalindrome(char array[],int left,int right);
int main(int argc, char const *argv[]){

	 char c,string[SIZE],copy[SIZE];
	 int count=0,copyCount,i;

	 printf("Lutfen bir cumle giriniz:");
	 while((c=getchar())!='\n'&& count<SIZE){
	 	string[count++]=c;
	 }
	 string[count]='\0';
	 for(copyCount=0,i=0;string[i]!='\0';i++){
	 	if(string[i]!=' '){
	 		copy[copyCount++]=string[i];
	 	}
	 }
	 if(testPalindrome(copy,0,copyCount-1)){
	 	printf("%s palindrom'dur.\n",string);
	 }
	 else{
	 	printf("\"%s\"palindrom degildir",string);

	 }

	return 0;
}
	 int testPalindrome(char array[],int left,int right){
	 	if(left==right || left>right){
	 		return 1;
	 	}
	 	else if(array[left]!= array[right]){	 		
	 		return 0;
	 	}
	 	else{
	 		return testPalindrome(array,left+1,right-1);
	 	}
	 }			*/


/*#define boyut 80

int testPalindrome (char array[],int left,int right);

int main(int argc, char const *argv[]){

	char c,temp[boyut],geciciTemp[boyut];
	int geciciSayi=0,sayi,i;

	printf("Lutfen bir cumle giriniz:");

	while((c=getchar())!='\n' && geciciSayi<boyut){
		temp[geciciSayi++]=c;
	}
	temp[geciciSayi]='\0';

	for(i=0,sayi=0;temp[i]!='\0';i++){
		if(temp[i]!=' '){
			geciciTemp[sayi++]=temp[i];
		}
	}
	if(testPalindrome(geciciTemp,0,sayi-1)){
		printf("\"%s\"palindrom'dur.\n",temp);
	}
	else{
		printf("\"%s\"palindrom degildir.\n",temp);	
	}
	return 0;
}
int testPalindrome(char array[],int left,int right){
	if(left==right || left>right){
		return 1 ;
	}
	else if(array[left]!=array[right]){
		return 0;
	}
	else{
		return (array,left+1,right-1);
	}
}		*/

	//------------------ SMITH SAYI FONKSIYONLAR-------------YAPILACAK LISTESINE EKLENDI!

	/*int basla(int a){
		int b=1;
		printf("\nBaslangic degeri:%d",b);
		return 0 ;
	}
	int  main(int argc, char const *argv[]){
		int a=0,b=0,c=0,d=5;
		c=2;
		b=10;
		printf("%d",c-a);
		c=b+a;
		if(a<=c) 
		a=d;//a=5
		if(b>=d){
			a=c;
			printf(" D buyuktur.");
	}
		if(a==b){
			a+=3;
			basla(b);
		}
		printf("%d %d %d %d",a,b,c,d);
		}		*/

/*#define boyut 80

int testPalindrome (char array[],int left,int right);

int main(int argc, char const *argv[]){

	char c,temp[boyut],geciciTemp[boyut];
	int geciciSayi=0,sayi,i;

	printf("Lutfen bir cumle giriniz:");

	while((c=getchar())!='\n' && geciciSayi<boyut){
		temp[geciciSayi++]=c;
	}
	temp[geciciSayi]='\0';

	for(i=0,sayi=0;temp[i]!='\0';i++){
		if(temp[i]!=' '){
			geciciTemp[sayi++]=temp[i];
		}
	}
	if(testPalindrome(geciciTemp,0,sayi-1)){
		printf("\"%s\"palindrom'dur.\n",temp);
	}
	else{
		printf("\"%s\"palindrom degildir.\n",temp);	
	}
	return 0;
}
int testPalindrome(char array[],int left,int right){
	if(left==right || left>right){
		return 1 ;
	}
	else if(array[left]!=array[right]){
		return 0;
	}
	else{
		return testPalindrome(array,left+1,right-1);
	}
}	*/


	/*int asalKontrol(int x);
	
	int main(){
		
		int temp=0,i,toplam=0,j,a=0;;
			
		
		for(j=1;j<1000;j++){
			toplam=0;
			temp=0;
			a=0;
			for(i=2;i<j;i++){
				
				if(i*i!=j){
					if(j%i==0){
					toplam+=i;
					a=asalKontrol(i);
				}


				}
				temp=asalKontrol(toplam);
				
			}
			if(temp==1 && a==1){
				printf("%d ",j);
			}
			
		}
			
			return 0 ;
	}
			
	int asalKontrol(int x){
		int n;
		for(n=2;n<x;n++){
			if(x%n==0){
				return 0;
			}
		}
		return 1;
	}	*/


///--KapreKar sayilar---

/*int main(int argc, char const *argv[])
{
	int i,j,toplam=0,geciciSayi,temp,x=1,basamak;
	for (i = 1; i <1000; ++i){
		geciciSayi=i*i;
		temp=i;
		basamak=0;
		toplam=0;
		x=1;
		while(temp!=0){
			basamak++;
			temp/=10;
		}
		for(j=1;j<=basamak;j++){
			x*=10;
		}
		while(geciciSayi!=0){
			temp=geciciSayi%x;
			toplam+=temp;
			geciciSayi/=x;
		}
		if(toplam==i){
			printf("%d ",i);
		}
		
	}

	return 0;
}		*/




	
