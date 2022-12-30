#include <stdio.h>
#define pi 3.1415

int main()
{
    double r, C;
    printf ("Nhap ban kinh duong tron: ");
    scanf ("%lf", &r);
    C = 2*pi*r;
    printf ("Chu vi duong tron la: %f", C);
    return 0;
}