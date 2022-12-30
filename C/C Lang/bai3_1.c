#include <stdio.h>

int main()
{
    double a,b;
    printf ("Nhap lan luot hai so a va b");
    scanf ("%lf %lf", &a, &b);
    printf ("Tich hai so thuc a va b la: %7lf", a*b);
    return 0;
}