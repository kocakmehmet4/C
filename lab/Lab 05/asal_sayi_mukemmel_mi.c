/*
1-10000 arasi asal sayilarin toplami mukemmel mi?

asal sayi kendisi ve 1 hariç baska sayiya bolunmeyen
orn: 2,3,5,7,11,13,17,19,23...
mukemmel sayi= kendisi tam bolenlerinin toplamina esitse
orn: 6 = 1 + 2 + 3
    28 = 1 + 2 + 4 + 7 + 14
 */

#include <stdio.h>

int main(){
    int i,j,k,toplam=0;

    for(i=2;i<10000;i++){
        int kontrol=0;
        for(j=2;j<i;j++){
                if(i%j==0)
                   kontrol++;
        }
        if(kontrol==0){
            printf("%d ",i);
            toplam=toplam+i;
        }
    }
    printf("toplam= %d",toplam);
// Kontrol et Toplam degiskeni mukemmel sayi mi?
    int sum = 0;
    for(k=1; k<toplam; k++){
        if(toplam%k==0){
            sum = sum + k;
        }
    }
    if(sum == toplam)
        printf("\n\n %d Mukemmel sayi... \n",toplam );
    else
        printf("\n\n %d Mukemmel sayi degil...\n",toplam );

	return 0;
}
