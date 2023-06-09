/* Exercise 6.15 Solution
(Duplicate Elimination) Use a single-subscripted array to solve the following problem.
Read in 20 numbers, each of which is between 10 and 100, inclusive. As each number is read, print
it only if it�s not a duplicate of a number already read. Provide for the �worst case� in which all 20
numbers are different. Use the smallest possible array to solve this problem.
--------------------------------------------------------------------------------------------------------------------
Tek boyutlu bir dizi kullanarak �u problemi ��z�n: Kullan�c� 10�la 100 aras�nda belirledi�iniz kadar(BOYUT) say� girsin.
Her say� klavyeden al�nd���nda, e�er daha �nce ayn� say� girilmediyse bu say� ekrana yazd�r�ls�n.
*/
#include <stdio.h>
#define BOYUT 5

int main( void )
{
    int dizi[BOYUT]={};
    int i,j,sayac;

    for(i=0;i<=BOYUT-1;i++){
        printf("%d. sayiyi girin: ", i+1);
        scanf("%d", &dizi[i]);
    }
    printf("\nYinelenmeyen(nonduplicate) sayilar :");
    for(i=0;i<=BOYUT-1;i++){
        sayac=0;
        for(j=0;j<=BOYUT-1;j++){
            if(dizi[i]==dizi[j])
                sayac++;
        }
        if(sayac<2)
            printf("%d ", dizi[i]);
    }
    printf("\n");
    return 0;
}
