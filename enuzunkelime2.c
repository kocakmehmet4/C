#include <stdio.h>

int main() {

    char string[100];
    char longest_str[100];
    int index = 0;
    printf("Lutfen metni giriniz:");
    gets(string);
    int i, start = 0, longest = 0, longest_pos = 0;

    for (i = 0; string[i] != '\0'; i++) 
	{
        if (string[i] == ' ') 
		{
            start = i + 1;
        } 
		else 
		{
            if (i - start > longest) 
			{
                longest = i - start;
                longest_pos = start;
                index = i - longest;
            }
        }
    }
    
	for (i = 0; i < longest + 1; i++) 
	{
    	longest_str[i] = string[index+i];
  	}   
  	longest_str[i] = '\0';
     
    printf("Cumle icindeki en uzun kelime %d harften olusmaktadir.\nKelime:'%s'\n", longest+1, longest_str);

    return 0;
}
