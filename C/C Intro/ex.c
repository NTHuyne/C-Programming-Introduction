#include <stdio.h>

int main()
{
    int m;
    printf("Nhap so thang: ");
    scanf("%d", &m);
    while (m>12 || m<1)
    {
        printf("Khong hop le!; nhap lai so thang: ");
        scanf("%d", &m);
    }
    if (m==1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        printf("31 days");
    else if (m == 2)
        printf("28 days or 29 days");
    else    
        printf("30 days");
    return 0;
}