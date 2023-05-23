#include<stdio.h>
#include<string.h>
 
int main(int argc, char const *argv[])
{
	char kullaniciGirisi1[20];
	char kullaniciGirisi2[20];
	int karakterSayisi1,karakterSayisi2;
	printf("Lutfen birinci string'i giriniz:");
	gets(kullaniciGirisi1);
	printf("Lutfen ikinci string'i giriniz:");
	gets(kullaniciGirisi2);
	fflush(stdin);
	karakterSayisi1=strlen(kullaniciGirisi1);
	
	karakterSayisi2=strlen(kullaniciGirisi2);
	if(karakterSayisi1!=karakterSayisi2){
		printf("Anagram degil.");
	}
	int i,eleman,j,sorgu=1;
		for (i = 1; i <karakterSayisi1; ++i)
		{
			eleman=kullaniciGirisi1[i];
			for(j=i-1;j>=0 && eleman<=kullaniciGirisi1[j];j--){
				kullaniciGirisi1[j+1]=kullaniciGirisi1[j];
			}
				kullaniciGirisi1[j+1]=eleman;
			
		}
			for (i = 1; i <karakterSayisi2; ++i)
		{
			eleman=kullaniciGirisi2[i];
			for(j=i-1;j>=0 && eleman<=kullaniciGirisi2[j];j--){
				kullaniciGirisi2[j+1]=kullaniciGirisi2[j];
			}
				kullaniciGirisi2[j+1]=eleman;
			
		}
		for(i=0;i<karakterSayisi1;i++){
			if(kullaniciGirisi1[i]!=kullaniciGirisi2[i]){
				sorgu=0;
				break;
		}  
		                                    			}
if(sorgu){
			printf("Anagram.");
		}    

	


	return 0;
}



