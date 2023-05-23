#include <stdio.h>
#include <stdlib.h>
struct SAYAC{
       int kelime;
       int satir;
       int bosluk;
       int cumle;
       int nonalpha;
       struct SAYAC *next;
};
int main(int argc, char *argv[])
{
	FILE *deneme;
	struct SAYAC *p;
	struct SAYAC say={0,0,0,0,0,NULL};
	p=&say;
	int paragraf,i,x,topcumle=0,topkelime=0,topsatir=0;
	p->satir=0;
	p->cumle=0;
	p->bosluk=0;
	int karakter;
	deneme=fopen("giris.txt","r");
	if(deneme==NULL)
	{                 printf("Dosya acýlýrken hata olustu!!\n Programdan cikiliyor!!");
	                 exit(1);
	}
	
	putchar(karakter=getc(deneme));                   
	while(!feof(deneme))
	{
        if(karakter=='.'){
         	    p->cumle++;
        } 
        if(karakter==' '){
           p->bosluk++;
        } 
        if(karakter=='\n'){
		   paragraf++;
        if(paragraf==2)
         {
         p->next=(struct SAYAC*)calloc(1,sizeof(struct SAYAC));
         p=p->next;
                                   p->satir=0;
                                   p->cumle=0;
                                   p->kelime=0;
                                   p->bosluk=0;
                    
                    } 
                    else
                    { 
                                       p->satir++;
                    }
                    } 
                    else{
                                      paragraf=0;
                    } 
                                        
                    putchar(karakter=getc(deneme));
}
p=&say;
printf("\n\n1. paragraf \n");
p->bosluk=p->bosluk+p->satir-1;
p->kelime=p->bosluk+1;
topsatir=p->satir;
topcumle=p->cumle;
topkelime=p->kelime;
 printf("\nSatir: %d",p->satir);
              printf("\nKelime sayisi: %d\n",p->kelime);
              printf("Cumle sayisi: %d\n\n",p->cumle);
x=2;
p=p->next;
while(p!='\0')
{             printf("%d. paragraf\n",x);
              p->bosluk=p->bosluk+p->satir;
              p->kelime=p->bosluk;
              topsatir=p->satir+topsatir;
              topcumle=p->cumle+topcumle;
              topkelime=p->kelime+topkelime;
              printf("\nSatir: %d",p->satir);
              printf("\nKelime sayisi: %d\n",p->kelime);
              printf("Cumle sayisi: %d\n\n",p->cumle);
              p=p->next;
              x++;
}
printf("TOPLAM\nSatir: %d\nKelime: %d\nCumle: %d\n",topsatir,topkelime,topcumle);
fclose(deneme);
system("PAUSE");  
  return 0;
}
