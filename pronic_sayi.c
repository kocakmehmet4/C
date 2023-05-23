int main()
{
	int prn_sayi;
	int carpan = 0, carpan_asil = -1;
	printf("Lutfen bir sayi giriniz:\n");
	scanf("%d",&prn_sayi);
	while(carpan * (carpan+1) <= prn_sayi)
	{
		if(carpan * (carpan+1) == prn_sayi)
			carpan_asil = carpan;
		carpan += 1;
	}
	if(carpan_asil != -1)
		printf("%d = %d * %d PRONIC SAYIDIR",prn_sayi, carpan_asil, carpan_asil + 1);
	else
		printf("%d PRONIC SAYI DEGILDIR",prn_sayi);
}
