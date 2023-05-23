#include <stdio.h>
#include<time.h>
#include <string.h> 


/*int  main(int argc, char const *argv[])
{
	char kullaniciGirisi[10];
	int i,sum=0;

	for(i=1;i<=4;i++)
	{
		printf("Lutfen integer string giriniz:");
		scanf("%s",kullaniciGirisi);
		sum+=atoi(kullaniciGirisi);
	}
	printf("Total:%d",sum);
	
	return 0;
}*/
int main(int argc, char const *argv[])
{
	char metin[80],ara[20];
	char *arastir;

	printf("Lutfen bir metin giriniz:");
	fgets(metin,80,stdin);
	fflush(stdin);
	printf("Aranacak kelimeyi giriniz:");
	scanf("%s",ara);
	arastir=strstr(metin,ara);

	if(arastir){
		printf("Satirin geri kalaniyla baslayan ilk yazi:%s",arastir);

		arastir=strstr(arastir+1,ara);
		if(arastir){
			printf("Satirin geri kalaniyla baslayan ilk yazi:%s",arastir);
		}
		else{
			printf("Aranacak kelime sadece 1 kez goruntulendi.");
		}

	}
	else{
		printf("\"%s\"bulunamadi.",ara);
	}

	
	return 0;
}
// POINTERLA ANAGRAM

/*#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
char kullaniciGirisi1[50];
char kullaniciGirisi2[50];
char *ptr1,eleman;
char *ptr2,*ptr3;
int karakterSayisi1,karakterSayisi2,i;
puts("Lutfen bir string giriniz:");
gets(kullaniciGirisi1);
puts("Lutfen ikinci stringi giriniz:");
gets(kullaniciGirisi2);
karakterSayisi1=strlen(kullaniciGirisi1);
karakterSayisi2=strlen(kullaniciGirisi2);
ptr1=kullaniciGirisi1;
ptr2=kullaniciGirisi1;
if(karakterSayisi2==karakterSayisi1){
	for(ptr1;*ptr1!='\0';ptr1++){
		for(ptr2=ptr1+1;*ptr2!='\0';ptr2++){
			if(*ptr2<*ptr1){
				eleman=*ptr1;
				*ptr1=*ptr2;
				*ptr2=eleman;
			}
		}
		
	}
	ptr2=kullaniciGirisi2;
	ptr3=kullaniciGirisi2;
	for(ptr3;*ptr3!='\0';ptr3++){
		for(ptr2=ptr3+1;*ptr2!='\0';ptr2++){
			if(*ptr2<*ptr3){
				eleman=*ptr3;
				*ptr3=*ptr2;
				*ptr2=eleman;

			}

		}
	}

	ptr1-=karakterSayisi1;
	for (;*ptr1!='\0'; ptr1++)
	{
	//	printf("%c",*ptr1);
	}
	printf("\n");
	int control=1;
	ptr3-=karakterSayisi2;
	for (;*ptr3!='\0'; ptr3++)
	{
		//printf("%c",*ptr3);
	}
	for (i = 0; kullaniciGirisi2[i]!='\0'; ++i)
	{
		if(kullaniciGirisi1[i]!=kullaniciGirisi2[i]){
			control=0;
		}
	}
	if(control){
		puts("Stringler anagramdir");
	}
	else{
		puts("stringler anagram degildir.");
	}
}
else{
	printf("Anagram degil.\n");
}
	return 0;
}*/