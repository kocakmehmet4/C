#include <stdio.h>

/*int main(int argc, char const *argv[])
{
	char string[100];
	char longest_str[100];
	int index=0;
	printf("Lutfen metin giriniz:");
	gets(string);
	int i,start=0,longest=0,longest_post=0;
	for (i=0;string[i]!='\0'; ++i)
	{
		if(string[i]==' ')
		{
			start=i+1;
		}
		else
		{
			if(i-start>longest)
			{
				longest=i-start; 
				longest_post=start;     
				index=i-longest;     
			}
		}
	}
	for (i = 0; i < longest+1; ++i)
	{
		longest_str[i]=string[index+i];
	}
	longest_str[i]='\0';
	printf("Cumledeki en uzun kelime %d harften olusmaktadir.\n kelime:'%s'\n",longest+1,longest_str);
	
	return 0;
}*/


/*#include <stdio.h>
void bubble_sort(int [], int);

int main()
{
  int n, i, count = 0;
  printf("Lutfen sayi dizisinin boyutunu giriniz: ");
  scanf("%d", &n);
  int arr[n], temp[n];
  for (i = 0; i < n; i++)
  {
  	printf("%d. sayiyi giriniz:\t",i+1);
    scanf("%d", &arr[i]);
  }

  printf("\nOrjinal Dizi:\t\t\t");
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);

  for (i = 0; i < n; i++)
  {
    int j;
    for (j = 0; j < count; j++)
    {
      if (arr[i] == temp[j])
        break;
    }
    if (j == count)
    {
      temp[count] = arr[i];
      count++;
    }
  }

  printf("\nTekrarsiz Dizi:\t\t\t");
  for (i = 0; i < count; i++)
    printf("%d ", temp[i]);

  printf("\nSiralanmis Tekrarsiz Dizi:\t");
  bubble_sort(temp,count);
  for (i = 0; i < count; i++)
    printf("%d ", temp[i]);  
  return 0;
}

void bubble_sort(int list[], int n)
{
  long c, d, t;
 
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (list[d] > list[d+1])
      {
        t         = list[d];
        list[d]   = list[d+1];
        list[d+1] = t;
      }
    }
  }
}*/

/*int main(int argc, char const *argv[])
{
  char kullaniciGirisi1[50];
  char kullaniciGirisi2[50];
  char *p1,*p2,*p3;
  int karakterSayisi1,karakterSayisi2,temp,i;
  puts("Lutfen bir kelime giriniz:");
  gets(kullaniciGirisi1);
  puts("Lutfen ikinci kelimeyi giriniz:");
  gets(kullaniciGirisi2);
  p1=kullaniciGirisi1;
  p2=kullaniciGirisi1;
  karakterSayisi1=strlen(kullaniciGirisi1);
  karakterSayisi2=strlen(kullaniciGirisi2);
  if(karakterSayisi2==karakterSayisi1)
  {
    for(p1;*p1!='\0';p1++)
    {
      for(p2=p1+1;*p2!='\0';p2++)
      {
        if(*p2<*p1)
        {
          temp=*p1;
          *p1=*p2;
          *p2=temp;
        }

      }
    }
    p2=kullaniciGirisi2;
    p3=kullaniciGirisi2;

    for(p2;*p2!='\0';p2++)
    {
      for(p3=p2+1;*p3!='\0';p3++)
      {
        if(*p3<*p2)
        {
          temp=*p2;
          *p2=*p3;
          *p3=temp;
        }

      }
    }
    int kontrol=1;
    for (i = 0; kullaniciGirisi2[i]!='\0'; ++i)
        {
          if (kullaniciGirisi2[i]!=kullaniciGirisi1[i])
          {
            kontrol=0;
          }
        }   
    if(kontrol){
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


/*void MystrCpy(char *str,char *str2)
{
  char *p1=str;
  char *p2=str2;

  while(*p2!='\0'){
    *p1=*p2;
    p1++;
    p2++;
  }
  *p1='\0';
}
void MystrLen(char *str,int *karakterSayisi){
  char *p1=str;

  while(*p1){
    p1++;
    *karakterSayisi+=1;
  }
}

int myStrCmp(char *str, char *str2){
  char *p1=str;
  char *p2=str2;
  while(*p1!='\0' && *p2!='\0'){
    if(*p1==*p2){
      p1++;
      p2++;
    }
    else if(*p1>*p2){
      return 1;
    }
    else{
      return 2;
    }
  }
  if(strlen(p1)==strlen(p2)){
    return 0;
  }
  else if(strlen(p1)>strlen(p2)){
    return 1;
  }
  else{
    return 2;
  }

}
void myStrCat(char *str,char *str2){
  char *p1=str;
  char *p2=str2;
  while(*p1!='\0'){
    p1++;
  }
  while(*p2!='\0'){
    *p1=*p2;
      p1++;
      p2++;
  }
  p1='\0';
}

int main(int argc, char const *argv[])
{
  char kullaniciGirisi1[20],kullaniciGirisi2[20];
  int karakterSayisi=0;
  printf("Lutfen birinci stringi giriniz:\n");
  scanf("%s",kullaniciGirisi1);
  printf("Lutfen ikinci stringi giriniz");
  scanf("%s",kullaniciGirisi2);
  //MystrCpy(kullaniciGirisi1,kullaniciGirisi2);
  printf("%s ve %s\n",kullaniciGirisi2,kullaniciGirisi1);
  MystrLen(kullaniciGirisi1,&karakterSayisi);
  printf("%s stringi %d adet karakter icermektedir.\n",kullaniciGirisi1,karakterSayisi);
  int sonuc=myStrCmp(kullaniciGirisi1,kullaniciGirisi2);
  if(sonuc==0){
    printf("Girilen stringler birbirlerinin aynisidir.\n");
  }
  else{
    printf("Girilen stringler birbirlerinden farklidir.\n");
  }
  myStrCat(kullaniciGirisi1,kullaniciGirisi2);
  printf("%s",kullaniciGirisi1);
  return 0;
}*/

/*#define BOYUT 80
int testPalindrome(char dizi[],int left,int right)
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
  char c,metin[BOYUT],kopya[BOYUT];
  int say=0,kopyaSay=0,i;
  printf("Bir metin giriniz:\n"); 

  while (  (  c = getchar()  ) != '\n' && say < BOYUT ) {
      metin[ say ] = c;
    say++;
   }
  for (i = 0; i<say; ++i)
  {
    if(metin[i]!=' ' && metin[i]!='.'){
      kopya[kopyaSay++]=metin[i];
    }
  }
  if(testPalindrome(kopya,0,kopyaSay-1)){
  printf( "\"%s\" metni palindromdur\n", metin ); 
   }
   else {
      printf( "\"%s\" metni palindrom degildir\n", metin );
   }
  return 0;
}*/



#include<stdio.h>
void multiply(int mat1[12][12],int mat2[12][12],int ,int ,int );

void main()
{
    int mat1[12][12],mat2[12][12];
    int i,j,k,m,n,p;
    printf("Enter the number of rows and columns for 1st matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the 1st matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    //no of col of 1st mat = no of rows of 2nd mat
    printf("Enter the number of columns for 2nd matrix\n"); 
    scanf("%d",&p);
    printf("Enter the elements of the 2nd matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    
    printf("The 1st matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }
    printf("The 2nd matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }
    multiply(mat1,mat2,m,n,p);
}

void multiply(int mat1[12][12],int mat2[12][12],int m,int n,int p)
{
    int mul[12][12],i,j,k;
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            mul[i][j]=0;
            for(k=0;k<n;k++)
            {
                mul[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }

    printf("The resultant matrix formed on multiplying the two matrices\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
}