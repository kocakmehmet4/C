#include <stdio.h>
int rakam_toplami(int x);
int main()
{

	int i, sayi=1;
	for(sayi=1;sayi<=1000;sayi++)
	{
		int toplam=0, sayi_temp=0;
		sayi_temp = sayi;
		for(i=2;i<=sayi/2;i++)
		{
			if(sayi_temp % i == 0)
			{
				toplam += rakam_toplami(i);
				sayi_temp /= i;
				i--; 
			}
		}
		if(toplam == rakam_toplami(sayi))
		{
			printf("%d \n",sayi);
		}
	}
}

int rakam_toplami(int x)
{
	int toplam = 0;
	while(x > 0)
	{
		toplam += x % 10;
		x = x /10;
	}
	return toplam;
}
