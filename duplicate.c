#include <stdio.h>
void bubble_sort(int [], int);

int main()
{
  int n, i, count = 0;
  printf("Lutfen sayi dizisinin boyutunu giriniz: ");
  scanf("%d", &n);
  int arr[n], temp[n];
  for (i = 0; i < n; i++)
  {
  	printf("%d. sayiyi giriniz:\t",i+1);
    scanf("%d", &arr[i]);
  }

  printf("\nOrjinal Dizi:\t\t\t");
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);

  for (i = 0; i < n; i++)
  {
    int j;
    for (j = 0; j < count; j++)
    {
      if (arr[i] == temp[j])
        break;
    }
    if (j == count)
    {
      temp[count] = arr[i];
      count++;
    }
  }

  printf("\nTekrarsiz Dizi:\t\t\t");
  for (i = 0; i < count; i++)
    printf("%d ", temp[i]);

  printf("\nSiralanmis Tekrarsiz Dizi:\t");
  bubble_sort(temp,count);
  for (i = 0; i < count; i++)
    printf("%d ", temp[i]);  
  return 0;
}

void bubble_sort(int list[], int n)
{
  long c, d, t;
 
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (list[d] > list[d+1])
      {
        t         = list[d];
        list[d]   = list[d+1];
        list[d+1] = t;
      }
    }
  }
}
