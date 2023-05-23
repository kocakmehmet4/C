#include<stdio.h>
#include<string.h>
#define boyut 80
int testPalindrome(char array[],int left,int right){
	if(left==right || left>right){
		return 1;
	}
	else if(array[left]!=array[right]){
		return 0;
	}
	else{
		return testPalindrome(array,left+1,right-1);
	}
} 
int main(int argc, char const *argv[])
{
	char c,dizi[boyut],dizi2[boyut];
	int sayi1=0,sayi2,i;
	printf("Lutfen bir string giriniz:");
	
	while((c=getchar())!='\n' && sayi1<boyut){
		dizi[sayi1++]=c;
	}
	dizi[sayi1]='\0';
	for(i=0,sayi2=0;dizi[i]!='\0';i++){
		if(dizi[i]!=' ' ){
			dizi2[sayi2++]=dizi[i];
		}	
	}
	if(testPalindrome(dizi2,0,sayi2-1)){
		printf("\"%s\" palindromdur.",dizi);
	}
	else{
		printf("\"%s\" palindrom degildir.",dizi);
	}


	return 0;
}

