int ilkSayi=0,ikinciSayi=1,fibSayisi=0,asalKontrol=0,toplamBasamak=0;
	int sayi,i,geciciSayi;
    printf("Pozitif bir sayi girin: ");
    scanf("%d",&sayi);
	printf("---------------------------------\n");
    

	fibSayisi=ilkSayi+ikinciSayi;

    while(fibSayisi<sayi){
    	asalKontrol=0;
        ilkSayi=ikinciSayi;
        ikinciSayi=fibSayisi;
        fibSayisi=ilkSayi+ikinciSayi;
        
    	for(i=2;i<fibSayisi;i++){
    		if(fibSayisi%i==0){
    			asalKontrol=1;
			}
		}
		if(asalKontrol==0){
			printf("Asal olan fibonacci sayilar:%d\n",fibSayisi);
		
		}

		
	
	

}

