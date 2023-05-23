#include<stdio.h>

/*int recursiveMax(int temp[],int size,int buyuk,int boyut){
	
	if(size<boyut){
		if(buyuk<temp[size]){
			buyuk=temp[size];
		}
		size++;
		return recursiveMax(temp,size,buyuk,boyut);
	}
	else{
		return buyuk;
	}	
}
int recursiveMin(int temp[],int size,int kucuk,int boyut){
	if(size<boyut){
		if(kucuk>temp[size]){
			kucuk=temp[size];
		}
		size++;
		return recursiveMin(temp,size,kucuk,boyut);
	}
	else{
		return kucuk;
	}
	
}

int main(){
	int BOYUT;
	printf("Dizinin kac boyutlu olacagini giriniz:");
	scanf("%d",&BOYUT);
	
	int dizi[BOYUT],i,max,min;
	for(i=0;i<BOYUT;i++){
		printf("%d. dizinin elemanini giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}
	max=dizi[0];
	min=dizi[0];
	i=1;
	int sonuc1=recursiveMax(dizi,i,max,BOYUT);
	int sonuc2=recursiveMin(dizi,i,min,BOYUT);
	printf("Max:%d\nMin:%d\n",sonuc1,sonuc2);

	return 0;
}*/

/*int recursiveReverse(int num,int len){
	if(len!=0){
	 return num%10*pow(10,len-1)+recursiveReverse(num/10,len-1);
	}
	return num;
}

int main(){
	
	int sayi,temp,basamak=0;
	printf("Lutfen tersini istediginiz sayiyi giriniz:");
	scanf("%d",&sayi);
	temp=sayi;
	while(temp!=0){
		temp/=10;
		basamak++;
	}
	int sonuc=recursiveReverse(sayi,basamak);
	printf("sonuc:%d",sonuc);
	
	return 0;
}*/

/*int recursiveFact(int fact){
	if(fact==1){
		return 1;
	}
	return fact*recursiveFact(fact-1);
}
int main(){
	
	int fact;
	printf("Lutfen faktoriyelini istediginiz sayiyi giriniz:");
	scanf("%d",&fact);
	int sonuc=recursiveFact(fact);
	printf("sonuc:%d",sonuc);

	
	return 0;
}*/


/*int recursiveFibo(int num){
	if(num==0 || num==1){
		return 1;
	}
	return recursiveFibo(num-1)+recursiveFibo(num-2);
}


int main(){
	int sayi,i;
	
	printf("Lutfen kac defa fibonacci dizisini istediginizi giriniz:");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++){
		printf("%d ",recursiveFibo(i));
	}
	//int sonuc=recursiveFibo(sayi);
	//printf("%d ",sonuc);
}*/


/*int recursiveUs(int num,int power){
	
	if(power==0){
		return 1;
	}
	return num*recursiveUs(num,power-1);
	
}

int main(){
	int sayi,kuvvet;
	
	printf("Lutfen hangi sayiyi ve kacinci kuvveti almak istediginizi giriniz:");
	scanf("%d%d",&sayi,&kuvvet);
	printf("%d",recursiveUs(sayi,kuvvet));
	
	return 0;
}*/

/*int recursiveBasamak(int num){
	static int basamak=0;
	if(num!=0){
		basamak++;
		return recursiveBasamak(num/10);
	}
	return basamak;
}

int main(){
	int sayi;
	printf("Lutfen sayi giriniz:");
	scanf("%d",&sayi);	
	printf("%d",recursiveBasamak(sayi));
	return 0;
}*/

/*int recursiveBaseNum(int num){
	static int toplam=0;
	if(num!=0){
		toplam+=num%10;
		return recursiveBaseNum(num/10);
	}
	return toplam;
	
}

int main(){
	int sayi;
	printf("Lutfen sayi giriniz:");
	scanf("%d",&sayi);	
	printf("%d",recursiveBaseNum(sayi));
	return 0;
}*/
/*int recursiveEBOB(int num1,int num2){
	if(num2!=0){
		return recursiveEBOB(num2,num1%num2);
	}
	return num1;	
}
int EKOK(int num1,int num2){
	return num1*num2/recursiveEBOB(num2,num1%num2);
}

int main(){
	int sayi1,sayi2,i=2;
	printf("Lutfen iki sayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);
	printf("%d ",recursiveEBOB(sayi1,sayi2));
	printf("%d",EKOK(sayi1,sayi2));

	
}*/

/*int recursiveIsPrime(int num,int temp){
	
	if(temp==1){
		return 1;
	}
	else if(num%temp==0){
		return 0;
	}
	else{
		return recursiveIsPrime(num,temp-1);
	}
}
int main(){
	int sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	int sonuc=recursiveIsPrime(sayi,sayi/2);
	if(sonuc){
		printf("%d sayisi asal sayidir.",sayi);
	}
	else{
		printf("%d sayisi asal sayi degildir.",sayi);
	}
}*/

/*int recursiveEKOK(int num1,int num2){
	static int comn=1;
	
	if(comn%num1==0 && comn%num2==0){
		return comn;
	}
	comn++;
	recursiveEKOK(num1,num2);
}

int recursiveEBOB(int num1,int num2){
	if(num2!=0){
		return recursiveEBOB(num2,num1%num2);
	}
	return num1;
}

int main(){
	int sayi1,sayi2;
	printf("Lutfen iki adet sayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);
	printf("%d\n",recursiveEKOK(sayi1,sayi2));
	printf("%d\n",recursiveEBOB(sayi1,sayi2));
}*/


/*int main(){
	
	int dizi[10]={2,21,3};
	int *p1=&dizi[2];
	int *q1=p1+2;
	int i;
	
	*(++q1)=*(--p1);
	*(p1++)=*(++q1)+2;
	(*p1)=*(q1)--;
	*(q1)--=(*p1)++;
	
	for(i=0;i<10;i++){
	
		printf("%d ",dizi[i]);
	}
	
	printf("\n%d %d %d",*dizi,*p1,*q1);
	for(i=5;i<10;i++){
		dizi[i+3]=dizi[i]+1;
	
	}
	
	//printf("%d",++(*p1)); 
	//printf("%d",*(p1)++);
	
	
		return 0;	
}*/
	
	
/*int main(){
	int dizi[10]={2,21,3,6,4,2,6};
	int *p1=&dizi[2];
	int *q1=p1+2;
	int i;

	for(i=0;i<6;i++){
		
	printf("%d ",p1[i]);
	}
	printf("%d",q1);
	printf("\n%d",p1-q1);*/
	
	/*
	*(q1)++=*(p1++);
	*(--p1)=*(q1--)+2;
	(p1)=(q1--);
	*(q1)--=--(*p1);
	*/
	
	
	
	
	//printf("%d %d %d",*dizi,*p1,*q1);
	/*for(i=0;i<10;i++){
		dizi[i+3]=dizi[i+1]+1; 
		printf("\n%d",dizi[i]);
	}*/

	
	//return 0;}

/*int main(){
	
	int dizi[10]={2,21,3};
	int *p1=&dizi[2];
	int *q1=p1+2;
	int i;
	*(++q1)=(*p1)++;
	*(p1++)=*(q1)++;
	*(++p1)=*(++q1);
	*(++q1)=(*p1)++;
	
	printf("%d",(*p1)++);
	printf("%d",(*p1));
	
	*(++q1)=*(--p1);
	*(p1++)=*(++q1)+2;
	(*p1)=*(q1)--;
	*(q1)--=(*p1)++;
	
	
	*(q1)++=*(p1++);
	*(--p1)=*(q1--)+2;
	(p1)=(q1--);
	*(q1)--=--(*p1);
	
	return 0;
}*/
	
	
int main(){
	
	
	int dizi[15]={31,0,69,31};
	int *p1=&dizi[4];
	int *p2=&dizi[14];
	dizi[13]=14;
	int *p3=dizi;
	int i;
	
	for(i=0;i<3;i++){
		*(p1)++=--(*p2);
		p3+=2;
		p2=p3;
	}	
	
	for(i=-3;i<0;i++){
		*(p1)++=*(p3)--;
		*(++p2)=*(--p2);
		dizi[i+4]=i+1;
	}
	for(i=0;i<15;i++){
		printf("%d",dizi[i]);
	}
	printf("\n");
	printf("%d %d %d %d",*dizi,*p1,*p2,*p3);
	return 0;
}
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


/*int recursiveBasamakBul(int num,int *len){
	if(num!=0){
		(*len)++;
		return recursiveBasamakBul(num/10,len); 
	}
	return *len;
}*/

/*int recursiveBasamakBul(int num){
	static int len=0;
	if(num!=0){
		len++;
		return recursiveBasamakBul(num/10); 
	}
	return len;
}*/

/*int main(){
	int sayi,basamak=0;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	//int sonuc=recursiveBasamakBul(sayi);
	int sonuc=recursiveBasamakBul(sayi,&basamak);
	printf("sonuc:%d",sonuc);
}*/

/*int main(){
	
	char kullaniciGirisi[50];
	char dizi[50];
	int elemanSayisi=0,i,index=0,basla=0;
	puts("LUTFEN BIR STRING GIRINIZ:");
	gets(kullaniciGirisi);
	for(i=0;kullaniciGirisi[i]!='\0';i++){
		if(kullaniciGirisi[i]==' '){
			basla=i+1;
		}
		else{
			if(i-basla>elemanSayisi){
				elemanSayisi=i-basla;
				index=i-elemanSayisi;
			}
		}
	}
	for(i=0;i<elemanSayisi+1;i++){
		dizi[i]=kullaniciGirisi[index+i];
	}
	dizi[i]='\0';
	printf("en uzun kelime %d harften olusmaktadir\nkelime:%s",elemanSayisi+1,dizi);
	
	return 0;
}*/

/*typedef struct{
	int pay;
	int payda;
}kesirler;

void kesirTopla(kesirler *p3,kesirler *p4,kesirler *p5){
	p5->pay=p3->pay*p4->payda+p3->payda*p4->pay;
	p5->payda=p3->payda*p4->payda;
}
void kesirSade(kesirler *p5){
	int i;
	for(i=2;i<=p5->pay;i++){
		while(p5->pay%i==0 && p5->payda%i==0){
			p5->payda/=i;
			p5->pay/=i;
		}
	} 
}

int main(int argc, char const *argv[])
{
	int n1,n2,d1,d2;
	printf("Lutfen birinci kesiri pay-payda olarak giriniz:");
	scanf("%d%d",&n1,&d1);
	printf("Lutfen ikinci kesiri pay-payda olarak giriniz:");
	scanf("%d%d",&n2,&d2);
	kesirler k1={n1,d1};
	kesirler k2={n2,d2};
	kesirler *k3=&k1;
	kesirler *k4=&k2;
	kesirler *k5=&k1;
	kesirTopla(k3,k4,k5);
	kesirSade(k5);
	printf("%d/%d",k5->pay,k5->payda);
	return 0;
}*/
	
	
	
	
	
	
	
	
	
	


