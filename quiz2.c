#include <stdio.h>
int main() {
  int t1 = 0, t2 = 1, nextTerm = 0, n;
  int bayrak, i,temp, toplam = 0;
  printf("Pozitif bir sayi girin: ");
  scanf("%d", &n);

  // displays the first two terms which is always 0 and 1
  nextTerm = t1 + t2;

  while (nextTerm <= n) {
    bayrak = 0;
    for(i=2;i<=nextTerm/2;i++)
    {
        if(nextTerm % i == 0)
            bayrak = 1;
    }
    if(bayrak == 0 && nextTerm > 1)
    {
        temp = nextTerm;
        while(temp>0)
        {
            toplam = toplam + temp % 10;
            temp = temp / 10;
        }
        printf("%d\n", nextTerm);
    }
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
  printf("Rakamlar toplami = %d\n", toplam);
  return 0;
}
