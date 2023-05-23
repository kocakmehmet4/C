#include <stdio.h>
#include<math.h>

//OBEB RECURSİVE

// US RECURSİVE

// asal RECURSİVE

//girilen bir ifadedeki alfabetik harfler dışındaki stringleri atma

/*int usRecursive(int sayi,int sayi2){
	if(sayi2!=0){
		return sayi1(sayi1,sayi2);
	}
	return sayi;
	

}*/
/*int asalRecursive(int sayi){
	int i=2;
	if(i!=sayi/2){
		return((sayi/2)%(i++));
	}
	else{
		return 1;
	}
	
	
}


int main(int argc, char const *argv[])
{
	int sayi1,sayi2,sonuc;

	scanf("%d",&sayi1);

	sonuc=asalRecursive(sayi1);
	printf("Sonuc:%d",sonuc);

	return 0;
}*/


// 

/*int main(int argc, char const *argv[])
{
	char string [50];
	printf("Lutfen bir ifadeyi giriniz:");
	scanf("%s",&string);

	while(string!='\0'){
	}



	return 0;
}*/
/*
int maxBul(int dizi[],int max,int elemanSayisi){
	int i;
	if(dizi[0]<dizi[i++]){
		dizi[0]=dizi[i];
		return (dizi,max,elemanSayisi);
	}

}

int main(int argc, char const *argv[])
{
	int sonuc;;
	int max;
	int dizi[50],elemanSayisi,i;
	printf("Lutfen dizinin kac elemanli olmasini istediginizi giriniz:");
	scanf("%d",&elemanSayisi);
	printf("%d elemanli dizi:\n",elemanSayisi);

	for (i = 0; i <elemanSayisi; ++i);
	{
		scanf("%d",&dizi[i]);
	}
	max=dizi[0];
	int min=dizi[0];
	sonuc=maxBul(dizi,max,elemanSayisi);
	printf("%d",sonuc);
	return 0;
}
*/

/*void maxMinBul(int dizi[],int index,int boyut,int enKucuk,int enBuyuk){

	if(index<boyut){
		if(dizi[index]<=enKucuk){
			enKucuk=dizi[index];
		}
		if(dizi[index]>=enBuyuk){
			enBuyuk=dizi[index];
		}
		index++;
		 maxMinBul(dizi,index,boyut,enKucuk,enBuyuk);
	}
	else{
		printf("enBuyuk eleman:%d,en Kucuk eleman:%d",enBuyuk,enKucuk);
	}
	
	
}


int main(int argc, char const *argv[])
{
	int max,min,sonuc;
	int elemanSayisi,i;
	printf("Lutfen dizinin kac elemanli olmasini istediginizi giriniz:");
	scanf("%d",&elemanSayisi);
	int dizi[elemanSayisi];
	printf("%d elemanli dizi:\n",elemanSayisi);

	for (i = 0; i <elemanSayisi; i++)
	{
		scanf("%d",&dizi[i]);

	}
	max=dizi[0];
	min=dizi[0];
	int index=1;
	maxMinBul(dizi,index,elemanSayisi,min,max);
	return 0;
}*/

/*void bubble_short(int dizi[],int elemanSayisi);
int  main(int argc, char const *argv[])
{
	int n,i,count;
	printf("Lutfen dizinin kac elemanli oldugunu giriniz:\n");
	scanf("%d",&n);

	int dizi[n],temp[n];
	for (i = 0; i <n; ++i)
	{
		printf("Dizinin %d. elemanini giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}

	printf("\nOrjinal Dizi:\t\t\t");
  for (i = 0; i < n; i++)
    printf("%d ", dizi[i]);

	for (i = 0; i <n; ++i)
	{
		int j;
		for (j=0;j<count;j++)
		{
			if(temp[j]=dizi[i]){
				break;
			}
		}
		if(j==count){
			temp[count]=dizi[i];
			count++;
		}
	}

	
		printf("\nTekrarsiz Dizi:\t\t\t");
 		for (i = 0; i < count; i++)
    		printf("%d ", temp[i]);
	
 		printf("\nSiralanmis Tekrarsiz Dizi:\t");
  		bubble_short(temp,count);
  		for (i = 0; i < count; i++)
    		printf("%d ", temp[i]);  
	
	return 0;
}

void bubble_short(int dizi[],int elemanSayisi)
{
	int i,temp,j;
	for (i = 0; i <elemanSayisi-1; ++i)
	{
		for (j=0;j<elemanSayisi-1-i; ++j)
		{

			if(dizi[j]>dizi[j+1]){
				temp=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=temp;

			}
		}
	}
}*/

/*int testPalindrome(char dizi[],int left,int right)
{
  if(left==right|| left>right)
  {
    return 1;
  }
  else if(dizi[left]!=dizi[right]){
    return 0;
  }
  else{
    return testPalindrome(dizi,left+1,right-1);
  }
}

int main(int argc, char const *argv[])
{
  char c,metin[50],kopya[50];
  int say=0,kopyaSay=0,i;
  printf("Bir metin giriniz:");
  while((c=getchar() )!='\n' && c<50){
    metin[say]=c;
    say++;
  }
  metin[say]='\0';
  for (i = 0; i <say; ++i)
  {
    if(metin[i]!=' ' && metin[i]!='.'){
      kopya[kopyaSay++]=metin[i];
    }
  }
  if(testPalindrome(kopya,0,kopyaSay-1)){
    printf("%s metni palindrome'dir.",metin);
  }
  else{
    printf("%s Metini palindrome degildir.");
  }
  return 0;
}*/
#include <stdio.h>
#define BOYUT 80

int testPalindrom( char dizi[], int sol, int sag );

int main( void )
{
   char c;
   char metin[ BOYUT ];
   char kopya[ BOYUT ];
   int say = 0;
   int kopyaSay = 0,i;

   printf( "Bir metin giriniz:\n" );

   while (  (  c = getchar()  ) != '\n' && say < BOYUT ) {
      metin[ say ] = c;
	  say++;
   }

   for ( i = 0; i<say; i++ ) {

      if ( metin[ i ] != ' '  && metin[i] != '.') {
         kopya[ kopyaSay++ ] = metin[ i ];
      }

   }

   if ( testPalindrom( kopya, 0, kopyaSay - 1 ) ) {
      printf( "\"%s\" metni palindromdur\n", metin );
   }
   else {
      printf( "\"%s\" metni palindrom degildir\n", metin );
   }

   return 0;
}

int testPalindrom( char dizi[], int sol, int sag )
{

   if ( sol == sag || sol > sag ) {
      return 1;
   }
   else if ( dizi[ sol ] != dizi[ sag ] ) {
      return 0;
   }
   else {
      return testPalindrom( dizi, sol + 1, sag - 1 );
   }

}


