#include <stdio.h>

int main()
{
    double a,b;
    double x;
    printf ("Nhap lan luot hai so a va b: ");
    scanf ("%lf %lf", &a, &b);
    if (a>b)
    x=(a+b)/3 + b;
    else if (a=b)
    x=15.172;
    else 
    x=(a-b)/(a*a+b*b);
    printf("Gia tri cua x la: %lf", x);
    return 0;
}