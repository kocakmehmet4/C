#include <stdio.h>
#include <string.h>

int  main(int argc, char const *argv[]){

	/*
	STRLEN: Gonderdiginiz string'in karakter uzunlugunu size doner

	STRCPY:Gonderdiginiz 2. stringi ilkine kopyalar

	STRCAT:Gonderdiginiz 2. stringi,birincisinin sonuna ekler

	STRCMP:Gonderdiginiz 2 stringi karsilastirir:
		BIRBIRLERIYLE TAMAMEN AYNILARSA 0;
		ILKI IKINCISINDEN ALFABETIK OLARAK SONRA GELIYORSA 0'DAN BUYUK;
		ILKI IKINCISINDEN ALFABETIK OLARAK ONCE GELIYORSA 0'DAN KUCUK;			*/

	//------STRLEN----- NULL KAREKTERI DIKKATE ALINMAZ.
	/*char isim[20];
	char isim2[20];
	puts("Lutfen bir isim giriniz:");
	gets(isim);
	puts("Lutfen bir isim giriniz:");
	gets(isim2);
	//strcpy(isim2,isim); ikinci gonderilen stringi birinciye kopyalar.
	strcat(isim2,isim);
	int karakterSayisi=strlen(isim2);
	printf("%s stringi %d adet karakter icermektedir",isim2,karakterSayisi );	

	int karsilastirmaSonucu=strcmp(isim,isim2);
	if (karsilastirmaSonucu==0){
		printf("Ikı string tamamen aynidir.");
	}
	else if(karsilastirmaSonucu>0){
		printf("Ilk string alfabetik olarak ikincisinden sonra gelmektedir.");
	}
	else{
		printf("Ilk string alfabetik olarak ikincisinden once gelmektedir.");
	}*/


	/*char isim[20];
	int karakterSayisi=0;
	puts("Lutfen bir isim giriniz:");
	gets(isim);
	//for (karakterSayisi=0;isim[karakterSayisi]!='\0';karakterSayisi++);
	while(isim[karakterSayisi]!='\0'){
		karakterSayisi+=1;				///STRLEN FONKS.
		
	}
	printf("%d adet karakter bulunmaktadir",karakterSayisi);*/

	/*char isim[20],isim2[20];
	int karakterSayisi=0;
	puts("Lutfen bir isim giriniz:");
	gets(isim);

	while(isim[karakterSayisi]!='\0'){
		karakterSayisi++;	
	}
	for (int i = 0; i < karakterSayisi; ++i){
		isim2[i]=isim[i];
	}
	puts(isim2);			*/			///STRCPY FONKS.

	/*char isim[20],isim2[20];
	int karakterSayisi=0,i;
	int karakterSayisi2;
	puts("Lutfen bir isim giriniz:");
	gets(isim);
	gets(isim2);

	for (karakterSayisi2=0;isim2[karakterSayisi2]!='\0';karakterSayisi2++);
	while(isim[karakterSayisi]!='\0'){
		karakterSayisi+=1;		
	}
	for ( i = 0; i < karakterSayisi2; ++i){
		isim[karakterSayisi+i]=isim2[i];					////STRCAT
	}
	isim[karakterSayisi+i]='\0';
	puts(isim);			*/



	/*char isim[20],isim2[20];
	int karakterSayisi=0,i=0;
	int karakterSayisi2;
	puts("Lutfen bir isim giriniz:");
	gets(isim);
	gets(isim2);

	for (karakterSayisi2=0;isim2[karakterSayisi2]!='\0';karakterSayisi2++);
	while(isim[karakterSayisi]!='\0'){
		karakterSayisi+=1;		
	}
	int esitlik=1;
	while(isim[i]!='\0' && isim2[i]!='\0'){
		if(isim[i]>isim2[i]){
			printf("%s kelimesi %s kelimesinden alfabetik olarak daha once gelmektedir",isim2,isim );
			esitlik=0;
			break;
		}
		else if(isim[i]<isim2[i]){
			printf("%s kelimesi %s kelimesinden alfabetik olarak daha sonra	gelmektedir",isim2,isim );
			esitlik=0;
			break;
		}												///STRCMP FONK.
		i++;
	}
	if(esitlik){
			if (karakterSayisi2==karakterSayisi){
				printf("girdiginiz string tamamen aynidir.");
			}
			else if (karakterSayisi>karakterSayisi2){
				printf("%s kelimesi %s kelimesinden alfabetik olarak daha sonra	gelmektedir",isim,isim2 );

			}
			else{
				printf("%s kelimesi %s kelimesinden alfabetik olarak daha sonra gelmektedir",isim2,isim );

			}
		}		*/


	/*char kullaniciGirisi[20];
	int karakterSayisi,i;
	char geciciKarakter;
	puts("Lutfen tersine cevirmek istediginiz ifadeyi giriniz:");
	gets(kullaniciGirisi);
	karakterSayisi=strlen(kullaniciGirisi);

	for (i = 0; i < karakterSayisi/2; ++i){
		geciciKarakter=kullaniciGirisi[i];
		kullaniciGirisi[i]=kullaniciGirisi[karakterSayisi-i-1];
		kullaniciGirisi[karakterSayisi-i-1]=geciciKarakter;

	}
	puts(kullaniciGirisi);			*/		//BIR IFADEYI TERSINE CEVIRME//


	/*char ilkString[20];
	char ikinciString[20];
	int karakterSayisi,karakterSayisi2,i;
	int karakterSorgusu=1;
	puts("iki adet string'i sirayla giriniz:");
	gets(ilkString);
	gets(ikinciString);
	karakterSayisi=strlen(ilkString);
	karakterSayisi2=strlen(ikinciString);
	if(karakterSayisi!=karakterSayisi2){
		printf("Girilen iki string birbirinden farklidir");
	}
	else{
		for (int i = 0; i < karakterSayisi; ++i){
			if ((tolower(ilkString[i]))!=(tolower(ikinciString[i]))){
				karakterSorgusu=0;
				break;
			}			
		}
		if (karakterSorgusu){
		puts("Girilen iki string birbirinin aynisidir");

	}
	else{
		puts("Girilen iki string birbirinden farklidir");
	}
}				*/

	/*char cumle[50];
	int kelimeSayisi=0,harfSayisi=0,i=0;
	puts("Lutfen hesaplanacak olan string'i giriniz:");
	gets(cumle);

	while(cumle[i]!='\0'){
		if(cumle[i]==' '){
			kelimeSayisi+=1;
		}
		i++;
		harfSayisi+=1;
	}
	kelimeSayisi+=1;
	printf("Girdiginiz sayi %d adet harf icermektedir.\n",harfSayisi);
	printf("Girdiginiz sayi %d adet kelime icermektedir.\n",kelimeSayisi);
	printf("Girdiginiz string ifadede bir kelime yaklasik olarak %d harf icermektedir",harfSayisi/kelimeSayisi);	*/


		/*	KULLANICININ GIRDIGI STRINGTE HARF DEGISIMI
	char kullaniciGirisi[20];
	char degistirilecekKarakter,degisecekKarakter;
	int i=0,karakterSayisi=0;

	puts("Lutfen girmek istediginiz stringi yaziniz:");
	gets(kullaniciGirisi);
	puts("hangi harfi degistirmek istiyorsunuz:");
	scanf("%c",&degisecekKarakter);
	puts("Hangi harf ile degistirmek istiyorsunuz");
	fflush(stdin);
	scanf("%c",&degistirilecekKarakter);
	

	while(kullaniciGirisi[i]!='\0'){
		if(kullaniciGirisi[i]==degisecekKarakter){
			karakterSayisi++;
			kullaniciGirisi[i]=degistirilecekKarakter;
		}
		i++;
	}
	puts(kullaniciGirisi);
	printf("%d adet %c karakteri, %c ile degistirildi.",karakterSayisi,degisecekKarakter,degistirilecekKarakter);		*/

	/*char kullaniciGirisi[20];
	int karakterSayisi,i;
	int sorguPalindrom=1;
	puts("Lutfen sorgulanacak stringi giriniz:");
	gets(kullaniciGirisi);
	karakterSayisi=strlen(kullaniciGirisi);

	for ( i = 0; i < karakterSayisi/2; ++i){
		if (kullaniciGirisi[i]!=kullaniciGirisi[karakterSayisi-i-1]){
			sorguPalindrom=0;
			break;
			
		}
	}
	if(sorguPalindrom){
		puts("Girdiginiz string bir Palindrome string'tir");
	}
	else{
		puts("Girdiginiz string bir Palindrome string degildir");
	}*/

	/*char kullaniciGirisi[20];
	int i=0;

	puts("Lutfen donusum yapilacakstring'i yaziniz:");
	gets(kullaniciGirisi);
	while(kullaniciGirisi[i]!='\0'){
		if(islower(kullaniciGirisi[i])){
			kullaniciGirisi[i]=toupper(kullaniciGirisi[i]);
		}
		else{
			kullaniciGirisi[i]=tolower(kullaniciGirisi[i]);
		}
		i++;
	}
	puts(kullaniciGirisi);*/





	/*int i=0,j,sorgu=0,devamEdilecekIndeks=0;
	char kullaniciGirisi[20];
	char kullaniciGirisi2[20];
	puts("Lutfen ilk stringi giriniz:");
	gets(kullaniciGirisi);
	puts("Lutfen ikinci stringi giriniz:");
	gets(kullaniciGirisi2);

	while(kullaniciGirisi[i]!='\0'){
		i=devamEdilecekIndeks;
		j=0;
		sorgu=1;
		while(kullaniciGirisi2[j]!='\0'){
			if(kullaniciGirisi[i]!=kullaniciGirisi2[j]){
				sorgu=0;
				break;
			}
			i++;
			j++;

		}
		if(sorgu){
			printf("Girdiginiz string ilkinde var!");
			break;
		}
		devamEdilecekIndeks++;
	}*/

	/*char kullaniciGirisi[25],kullaniciGirisi2[25];
	int i,j,eleman,sorgu=1;
	int karakterSayisi,karakterSayisi2;
	puts("Lutfen ilk stringi giriniz:");
	gets(kullaniciGirisi);
	puts("Lutfen ikinci stringi giriniz");
	gets(kullaniciGirisi2);

	karakterSayisi=strlen(kullaniciGirisi);
	karakterSayisi2=strlen(kullaniciGirisi2);
	if(karakterSayisi!=karakterSayisi2){
		puts("anagram degiller.");
	}
	else{
		for(i=1;i<karakterSayisi;i++){
			eleman=kullaniciGirisi[i];
			for (j = i-1; j>=0 && eleman<=kullaniciGirisi[j];j--)
			{
				kullaniciGirisi[j+1]=kullaniciGirisi[j];
			}
			kullaniciGirisi[j+1]=eleman;
		}
		for(i=1;i<karakterSayisi2;i++){
			eleman=kullaniciGirisi2[i];
			for (j = i-1; j>=0 && eleman<=kullaniciGirisi2[j];j--)
			{
				kullaniciGirisi2[j+1]=kullaniciGirisi2[j];
			}
			kullaniciGirisi2[j+1]=eleman;
		}
		for (int i = 0; i <karakterSayisi; ++i)
		{
			if(kullaniciGirisi[i]!=kullaniciGirisi2[i]){
				sorgu=0;
				break;
			}
		}
		if(sorgu){
			puts("anagram.");
		}
		else{
			puts("anagram degil.");
		}

	}*/


	char dizi[10]={'a','e','i','o','u','A','E','I','U','O'};
	char kullaniciGirisi[50];
	int i=0,eleman,j=0;
	printf("Lutfen bir string giriniz:");
	gets(kullaniciGirisi);

	for(j=0;kullaniciGirisi[j]!='\n';j++){
		i=0;
		while(i<10){
			if(kullaniciGirisi[j]==dizi[i]){
				kullaniciGirisi[j]='*';
			}
				
				i++;
		}	
		
}
puts(kullaniciGirisi);





	return 0;
} 