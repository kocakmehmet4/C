#include <stdio.h>
int main()
{
    int n1, n2, minMultiple;
    printf("�ki pozitif tam say� girin: ");
    scanf("%d %d", &n1, &n2);

    // n1 ve n2 aras�ndaki maksimum say� minMultiple'de saklan�r
    minMultiple = (n1>n2) ? n1 : n2;

    // Herzaman do�ru
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
