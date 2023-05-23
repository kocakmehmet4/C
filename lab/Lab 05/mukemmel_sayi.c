/* mukemmel sayilari listele 1-10000 arasi
mukemmel sayi= kendisi tam bolenlerinin toplamina esitse
orn: 6 = 1 + 2 + 3
    28 = 1 + 2 + 4 + 7 + 14
 */

#include <stdio.h>

int main(){
    int i,j;

	for (i=1; i <10000 ; i++) {
		int toplam = 0;
		for(j=1; j<i; j++){
			if(i%j==0){
				toplam = toplam + j;
			}
		}
		if(toplam == i){
			printf("%d\n",i );
		}
	}
	return 0;
}
