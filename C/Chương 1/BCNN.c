#include<stdio.h>

int main()
{
    int a, b, temp1, temp2;
    printf("\nNhap a: ");
    scanf("%d", &a);
    temp1=a;
    printf("\nNhap b: ");
    scanf("%d", &b);
    temp2=b;
    printf("\nBCNN cua %d va %d la: ", a, b);
    while(a != b)
    {
        if(a > b)
            a = a - b;
        else
            b = b - a;
    }
    long BCNN=temp2*temp1/a;
    printf("%ld", BCNN);

    return 0;
}