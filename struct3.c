#include <stdio.h>

/*typedef struct
{
	int saat;
	int dakika;
	float saniye;
	
}saatBilgileri;

saatBilgileri saatBilgileriBul(double kullaniciGirisi){
	int tamKisim;
	double ondalikliKisim;
	saatBilgileri sonuc;
	tamKisim=(int)kullaniciGirisi;
	ondalikliKisim=kullaniciGirisi-tamKisim;
	sonuc.saat=tamKisim/3600;
	sonuc.dakika=(tamKisim%3600)/60;
	sonuc.saniye=(tamKisim%3600)%60+ondalikliKisim;
	return sonuc;

}

int main(int argc, char const *argv[])
{
	double kullaniciGirisi;
	saatBilgileri saatAyir;
	printf("Lutfen istediginiz saat bilgilerini saniye olarak giriniz:");
	scanf("%lf",&kullaniciGirisi);
	saatAyir=saatBilgileriBul(kullaniciGirisi);
	printf("%d:%d:%.2f",saatAyir.saat,saatAyir.dakika,saatAyir.saniye);

	return 0;
}*/


/*typedef struct 
{
	char sembol[3];
	char tamAdi[20];
	int atomNumarasi;
}elementBilgileri;

void element(elementBilgileri dizi[],char *arananSembol,int index){
	int i,bulunduMu=0;
	for (i = 0; i <index; ++i)
	{
		if(strcmp(dizi[i].sembol,arananSembol)==0){
			printf("Element Adi:%s\nElement Sembolu:%s\nAtom Numarasi:%d\n",dizi[i].tamAdi,dizi[i].sembol,dizi[i].atomNumarasi);
			bulunduMu=1;
			break;
		} 
		
	}
	if(!bulunduMu){
			printf("Aradiginiz element listede bulunmadi!\n");
		}

}


int main(int argc, char const *argv[])
{
	elementBilgileri kullaniciGirisi[]={{"H","Hidrojen",1},{"He","Helyum",2},{"N","Azot",7},{"F","Flor",9},{"Al","Aliminium",13},{"Ca","Kalsium",20}};
	char kullaniciArama[5];

	while(1){
		printf("lutfen aramak istediginiz elementin sembolunu giriniz:");
		scanf("%s",&kullaniciArama);
		if(strcmp(kullaniciArama,"Q")==0){
			break;
		}
		element(kullaniciGirisi,kullaniciArama,6);
	}
	
	return 0;
}*/


typedef struct
{
	int reel;
	int imaginal;
}karmasikSayi;

/*karmasikSayi karmasikTopla(karmasikSayi sayi1,karmasikSayi sayi2){

karmasikSayi sonuc;
sonuc.reel=sayi1.reel+sayi2.reel;
sonuc.imaginal=sayi1.imaginal+sayi2.imaginal;
return sonuc;
}*/

/*void karmasikSayiTopla(karmasikSayi n1,karmasikSayi n2,karmasikSayi *sonuc){
	sonuc->reel=n1.reel+n2.reel;
	sonuc->imaginal=n1.imaginal+n2.imaginal;
}*/

//int main(int argc, char const *argv[]){
	/*int a,b,c,d;
	printf("Lutfen ilk karmasik Sayiyi reel-imaginal olarak giriniz:");
	scanf("%d%d",&a,&b);
	printf("Lutfen ikinci karmasik Sayiyi reel-imaginal olarak giriniz:");
	scanf("%d%d",&c,&d);
	karmasikSayi karmasik;
	karmasik.reel=a+c;
	karmasik.imaginal=b+d;
	printf("%d+%di",karmasik.reel,karmasik.imaginal);
	return 0;*/

	/*karmasikSayi n1,n2,sonuc;
	printf("Lutfen ilk karmasik Sayiyi reel-imaginal olarak giriniz:");
	scanf("%d%d",&n1.reel,&n1.imaginal);
	printf("Lutfen ikinci karmasik Sayiyi reel-imaginal olarak giriniz:");
	scanf("%d%d",&n2.reel,&n2.imaginal);
	//sonuc=karmasikTopla(n1,n2);
	karmasikSayiTopla(n1,n2,&sonuc);
	printf("%d+%di",sonuc.reel,sonuc.imaginal);

	return 0;

}*/

/*typedef struct{
	int dakika;
	int saat;
	float saniye;
}saatBilgileri;

saatBilgileri saatFarkiBul(saatBilgileri n1,saatBilgileri n2){
	double doubleSaat1=n1.saat*3600+n1.dakika*60+n1.saniye;
	double doubleSaat2=n2.saat*3600+n2.dakika*60+n2.saniye;
	saatBilgileri sonuc;
	if(doubleSaat1>=doubleSaat2){
		if(n2.dakika>n1.dakika){
			n1.saat-=1;
			n1.dakika+=60;
		}
		if(n2.saniye>n1.saniye){
			n1.dakika-=1;
			n1.saniye+=60;
		}
		sonuc.saat=n1.saat-n2.saat;
		sonuc.dakika=n1.dakika-n2.dakika;
		sonuc.saniye=n1.saniye-n2.saniye;

	}
	else{
		if(n2.dakika<n1.dakika){
			n2.saat-=1;
			n2.dakika+=60;
		}
		if(n2.saniye<n1.saniye){
			n2.dakika-=1;
			n2.saniye+=60;
		}
		sonuc.saat=n2.saat-n1.saat;
		sonuc.dakika=n2.dakika-n1.dakika;
		sonuc.saniye=n2.saniye-n1.saniye;
	}
	return sonuc;
}

int main(int argc, char const *argv[])
{
	saatBilgileri n1,n2;
	printf("Lutfen ilk saat bilgilerini saat dakika saniye olarak giriniz:");
	scanf("%d:%d:%f",&n1.saat,&n1.dakika,&n1.saniye);
	printf("Lutfen ikinci saat bilgilerini saat dakika saniye olarak giriniz:");
	scanf("%d:%d:%f",&n2.saat,&n2.dakika,&n2.saniye);
	saatBilgileri sonuc=saatFarkiBul(n1,n2);
	printf("%d:%d:%.2f",sonuc.saat,sonuc.dakika,sonuc.saniye);

	return 0;
}*/

/*int main(int argc, char const *argv[])
{
	int x,y;
	printf("Lutfen iki sayi giriniz:");
	scanf("%d%d",&x,&y);

	printf("%d",-(-x-y));
	printf("%d",x-(-y));
	printf("%d",x-(~y)-1);
	printf("%d",abs(-x-y));



	
	return 0;
}*/

/*int recursiveEnBuyuk(int dizi[],int max,int size,int n){
	if(n<size){
		if(max<dizi[n]){
			max=dizi[n];
		}
		n++;
		return recursiveEnBuyuk(dizi,max,size,n);
	}
	return max;
}

int recursiveEnKucuk(int dizi[],int min,int size,int n){
	if(n<size){
		if(dizi[n]<min){
			min=dizi[n];
		}
		n++;
		return recursiveEnKucuk(dizi,min,size,n);
	}
	return min;
}

int main(int argc, char const *argv[])
{
	int boyut;
	printf("Lutfen kaclik dizi oldugunu istediginizi giriniz:");
	scanf("%d",&boyut);
	int dizi[boyut];
	int i,min,max;
	for (i = 0; i <boyut; ++i)
	{
		printf("Lutfen dizinin %d. elemanini giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}
	min=dizi[0];
	max=dizi[0];
	int sonuc1=recursiveEnBuyuk(dizi,max,boyut,1);
	int sonuc2=recursiveEnKucuk(dizi,min,boyut,1);
	printf("Max:%d\nMin:%d\n",sonuc1,sonuc2);

	return 0;
}*/


/*int recursiveReverse(int num,int len){
	if(len!=0){
		return num%10*pow(10,len-1)+recursiveReverse(num/10,len-1);
	}
	else{
		return num;
	}
}

int main(int argc, char const *argv[])
{
	int basamak,temp,sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	temp=sayi;
	while(temp!=0){
		basamak++;
		temp/=10;
	}
	int sonuc=recursiveReverse(sayi,basamak);
	printf("%d",sonuc);
	return 0;
}*/

/*int recursiveFact(int num){
	if(num==1){
		return 1;
	}
	return num*recursiveFact(num-1);
}
int main(int argc, char const *argv[])
{
	int sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	printf("sonuc:%d\n",recursiveFact(sayi));	

	return 0;
}*/
/*int recursiveFibo(int num){
	if(num==0 || num==1){
		return 1;
	}
	return recursiveFibo(num-1)+recursiveFibo(num-2);

}
int main(int argc, char const *argv[])
{
	int sayi,i;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	for (int i = 0; i <=sayi; ++i)
	{
		printf("%d ",recursiveFibo(i));
	}	
	return 0;
}*/

/*int recursiveUs(int a,int b){

	if(b==0){
		return 1;
	}
	return a*recursiveUs(a,b-1);
}
int main(int argc, char const *argv[])
{
	int sayi,sayi2;
	printf("Lutfen bir sayi ve ussunu giriniz:");
	scanf("%d%d",&sayi,&sayi2);
	printf("Sonuc:%d",recursiveUs(sayi,sayi2));
	return 0;
}*/

/*int recursiveBasamak(int num){
	static int basamak;
	if(num==0){
		return basamak;
	}
	basamak++;
	return recursiveBasamak(num/10);


}
int main(int argc, char const *argv[])
{
	int sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	printf("%d",recursiveBasamak(sayi));
	
	return 0;
}*/

/*int recursiveBaseSum(int num){
	static int toplam=0;
	if(num!=0){
		toplam+=num%10;
		return recursiveBaseSum(num/10);
	}
	return toplam;

}
int main(int argc, char const *argv[])
{
	int sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	printf("%d",recursiveBaseSum(sayi));
	
	return 0;
}*/

/*int recursiveEKOK(int num1,int num2){
	static int comn=1;
	if(comn%num1==0 && comn%num2==0){
		return comn;
	}
	comn++;
	return recursiveEKOK(num1,num2);

}

int recursiveEBOB(int num1,int num2){
	if(num2==0){
		return num1;
	}
	return recursiveEBOB(num2,num1%num2);
}
int main(int argc, char const *argv[])
{
	int sayi1,sayi2;
	printf("Lutfen iki sayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);
	printf("EBOB:%d\n",recursiveEBOB(sayi1,sayi2));
	printf("EKOK:%d\n",recursiveEKOK(sayi1,sayi2));
	
	return 0;
}*/

int recursiveIsPrime(int num1,int num2){
	if(num2==1){
		return 1;
	}
	else if(num1%num2==0){
		return 0;
	}
	else{
		return recursiveIsPrime(num1,num2-1);
	}

}
int main(int argc, char const *argv[])
{
	int sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	if(recursiveIsPrime(sayi,sayi/2)){
		printf("%d sayisi asal sayidir.",sayi);
	}
	else{
		printf("%d sayisi asal sayi degildir.",sayi);
	}
	

	return 0;
}

