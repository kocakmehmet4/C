#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int  main(int argc, char const *argv[])
{

	/*int ilkMatris[5][5],i,j,ikinciMatris[5][5],ToplamMatris[5][5],transpozMatrisi[5][5];
	srand(time(NULL));

	printf("Ilk Matris:\n");
	for (i = 0; i <5; ++i){
		for (j = 0; j < 5; ++j){
			ilkMatris[i][j]=rand()%100;
			printf("%d\t",ilkMatris[i][j]);
	
			
		}
		printf("\n");
	}
	printf("Ikinci Matris:\n");
	for (i = 0; i < 5; ++i){
		for (j = 0; j< 5; ++j){
			ikinciMatris[i][j]=rand()%100;
			printf("%d\t",ikinciMatris[i][j]);
		}
		printf("\n");
	}

	/*printf("Toplam Matris:\n");
	for (i = 0; i < 5; ++i){
		for (j = 0; j< 5; ++j){
			ToplamMatris[i][j]=ikinciMatris[i][j]+ilkMatris[i][j];
			printf("%d\t",ToplamMatris[i][j]);
		}
		printf("\n");
	}

	printf("Transpoz Matrisi:\n");
	for (i = 0; i < 5; ++i){
		for(j=0;j<5;j++){
			transpozMatrisi[i][j]=ilkMatris[j][i]; //transpoz demek satir ve sutunlarin yerinin degismesi demek
			printf("%d\t",transpozMatrisi[i][j]);
		}
		printf("\n");
	}   */

	/*int dizi[10],i,j,arananDeger,bulunduMu=0;
	srand(time(NULL));

	for ( i = 0; i <10; ++i){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	printf("Lutfen aranan degeri giriniz:");
	scanf("%d",&arananDeger);

	for ( i = 0; i <10; ++i){
		if(dizi[i]==arananDeger){
			bulunduMu=1;
		}
	}
	if (bulunduMu==1){
		printf("degeriniz bulundu!");
	}
	else{
		printf("degeriniz bulunmadi!");
	} */

	/*int i,j,dizi[10],eleman;
	srand(time(NULL));

	printf("Dizi:\n");
	for (i = 0; i <10; ++i){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	printf("\nSirali Dizi:\n");

	for ( i = 1; i <10; ++i){
		eleman=dizi[i];
		for (j = i-1; j>=0 && eleman<=dizi[j]; j--){
			dizi[j+1]=dizi[j];
		}
		dizi[j+1]=eleman;
	}
	for (i = 0; i <10; ++i){
		printf("%d ",dizi[i]);
	}*/

	/*int i,j,dizi[10],eleman;

	printf("Dizi:\n");
	srand(time(NULL));

	for (int i = 0; i <10; ++i){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	printf("\n\nKabarcik Dizi:\n");

	for (i = 0; i <9; ++i){
		eleman=dizi[i];
		for (j=0;j<9-i;j++){
			if(dizi[j]>dizi[j+1]){
				eleman=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=eleman;
				
			}
			
		}

	}
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ",dizi[i]);
	}										*/


	//MATRISLER CARPIMI

	/*int i,j,ilkDizi[3][3],ikinciDizi[3][3],carpimMatris[3][3],toplam=0;

	srand(time(NULL));
	printf("ilk Dizi:\n");

	for (int i = 0; i <3; ++i){
		for (j = 0; j<3; ++j){
			ilkDizi[i][j]=rand()%10;
			printf("%d ",ilkDizi[i][j]);
		}
		printf("\n");
	}

	printf("\n\nikinci Dizi:\n");
	for (int i = 0; i <3; ++i){
		for (j = 0; j<3; ++j){
			ikinciDizi[i][j]=rand()%10;
			printf("%d ",ikinciDizi[i][j]);
		}
		printf("\n");
	}
	printf("Carpim Matris:\n");

	for (int i = 0; i <3; ++i){
		for (j = 0; j<3; ++j){
			toplam=0;
			for (int k = 0; k < 3; ++k){
				toplam+=ilkDizi[i][k]*ikinciDizi[k][j];
				
			}
			carpimMatris[i][j]=toplam;
			printf("%d ",carpimMatris[i][j]);

		}
		printf("\n");
		
	}		*/

	//TEK BOYUTTA OLAN MATRISI KULLANICIDAN ALINAN SATIR VE SUTUNLA 2 BOYUTLUYA CEVİRME

	/*int i,j,ilkMatris[10],satir,sutun;
	srand(time(NULL));

	for (int i = 0; i <10; ++i){
		ilkMatris[i]=rand()%100;
		printf("%d ",ilkMatris[i]);
	}
	printf("Lutfen satir-sutun degerlerini giriniz:");
	scanf("%d%d",&satir,&sutun);
	int ikiBoyutlu[satir][sutun];

	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			ikiBoyutlu[i][j]=ilkMatris[sutun*i+j];
			printf("%d ",ikiBoyutlu[i][j]);
		}
		printf("\n");
	}*/

	// ---------SIMETRİK DİZİ--------

	/*int ikiboyutluDizi[3][3]={{1,2,3},{2,1,3},{3,3,1}},i,j,islem=0;

	for (int i = 0; i <3; ++i){
		for (int j = 0; j < 3; ++j){
			printf("%d ",ikiboyutluDizi[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i <3; ++i){
		for (int j = 0; j < 3; ++j){
			if(ikiboyutluDizi[i][j]!=ikiboyutluDizi[j][i]){
				islem=1;
				break;
			}
		}
	}
	if (islem){
		printf("Simetrik dizi degildir.");
	}
	else{
		printf("Simetriktir.");
	}							*/

	// ---------SECMELI DIZI---------

	int i,j,enkucukSayi,dizi[i],indexKucukSayi;
	srand(time(NULL));
	printf("Sirasiz dizi:\n");
	for (int i = 0; i <10; ++i){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	
	for (int i = 0; i < 9; ++i){
		enkucukSayi=dizi[9];
		indexKucukSayi=9;
		for (int j = i; j <9; ++j){
			if(dizi[j]<enkucukSayi){
				enkucukSayi=dizi[j];
				indexKucukSayi=j;
			}
			
		}
		printf("\n%d sayisi ile %d sayisi yer degistirdi.",enkucukSayi,dizi[i]);
		dizi[indexKucukSayi]=dizi[i];
		dizi[i]=enkucukSayi;
		
	}
	printf("\nSirali dizi:\n");

	for (int i = 0; i <10; ++i){
		printf("%d ",dizi[i]);
	}
}



/*int i,j,enkucukSayi,dizi[i],indexKucukSayi;
	srand(time(NULL));
	printf("Sirasiz dizi:\n");
	for (int i = 0; i <10; ++i){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	
	for (int i = 0; i < 9; ++i){
		enkucukSayi=dizi[9];
		indexKucukSayi=9;
		for (int j = i; j <9; ++j){
			if(dizi[j]<enkucukSayi){
				enkucukSayi=dizi[j];
				indexKucukSayi=j;
			}
			
		}
		printf("\n%d sayisi ile %d sayisi yer degistirdi.",enkucukSayi,dizi[i]);
		dizi[indexKucukSayi]=dizi[i];
		dizi[i]=enkucukSayi;
		
	}
	printf("\nSirali dizi:\n");

	for (int i = 0; i <10; ++i){
		printf("%d ",dizi[i]);
	}
	int ortanca ,sag,sol,aradiginizSayi,bulunduMu=0;;
	printf("\nLutfen aradiginizSayiyi giriniz:");
	scanf("%d",&aradiginizSayi);
	sol=0;
	sag=9;

	while(sol<=sag){
		ortanca=(sag+sol)/2;
		if(aradiginizSayi==dizi[ortanca]){
			bulunduMu=1;
			break;
		}
		else if(aradiginizSayi>dizi[ortanca]){
			sol=ortanca+1;
		}
		else{
			sag=ortanca-1;
		}
	}
	if(bulunduMu){
		printf("%d sayisi dizi de bulunmustur.",dizi[ortanca]);
	}
	else{
		printf("Sectiginiz sayi dizi de bulunmamistir.");
	}


	return 0;
}*/