#include <stdio.h>
int main()
{
    int n1, n2, minMultiple;
    printf("Ýki pozitif tam sayý girin: ");
    scanf("%d %d", &n1, &n2);

    // n1 ve n2 arasýndaki maksimum sayý minMultiple'de saklanýr
    minMultiple = (n1>n2) ? n1 : n2;

    // Herzaman doðru
    while(1)
    {
        if( minMultiple%n1==0 && minMultiple%n2==0 )
        {
            printf("%d ve %d EKOK'u %d.", n1, n2,minMultiple);
            break;
        }
        ++minMultiple;
    }
    return 0;
}
