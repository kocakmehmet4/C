#include<stdio.h>

int main(){
	FILE *dosya= fopen("deneme.txt","w");
	if(dosya!='\0'){
		printf("Dosyaniz basariyla olusturuldu.\n");
	}
	else{
		printf("Dosya olusturulurken bir hata meydana geldi.\n");
	}
	int kapandiMi;
	kapandiMi=fclose(dosya); //kapandiysa 0 kapanmadiysa 0dan farkli deger donuyor.
	if(kapandiMi==0){
		printf("Dosya basarili bir sekilde kapatildi.");
	}
	else{
		printf("Dosya basarili bir sekilde kapatildi.");
	}
	return 0;
}
