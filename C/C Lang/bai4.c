#include<stdio.h>

int main()
{
    int a= 10,
        b, r;
    printf("Nhap so: ");
    scanf("%d", &b);
    r = b%a;
    printf("So su khi chia cho 10 la %d", r);
    return 0;
}