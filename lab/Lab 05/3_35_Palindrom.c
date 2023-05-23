/*
3.35.modifiye

Tersten ve düzden okunduğunda aynı okunan kelimelere palindrome denir. Örneğin,
12321, 55555, 45554, 11611, tam sayıları birer palindrome‘dur.
Kullanıcının girdiği beş basamaklı bir sayının palindrome olup olmadığına karar verip
ekrana yazdıran bir program yazdınız.
*/
#include <stdio.h>
int main(){

    int n,kalan,sayi1,sayi2=0;
    printf("Bir sayı giriniz:");
    scanf("%d",&n);
    sayi1=n;

    while(n>0) //n'i ters cevirip sayi2 e yazma
    {
    kalan = n%10;
    sayi2 = (sayi2*10) + kalan;
    n = n/10;
    }

    if(sayi1==sayi2)
        printf("Girdiğiniz sayı palindrom sayıdır. ");
    else
        printf("Girdiğiniz sayı palindrom sayı değildir.");


	return 0;
}
