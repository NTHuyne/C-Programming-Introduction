#include <stdio.h>

int main()
{
    long a, b, hieu;
    scanf ("%ld %ld", &a, &b);
    if (a>=0 & b>=0)
        if (a>=b)
            hieu = a-b;
        else
            hieu = b-a;
    if (a<=0 & b>=0)
        if (b>=(-a))
            hieu=b+a;
        else
            hieu=-b-a;
    if (a>=0 & b<=0)
        if (a>=(-b))
            hieu=a+b;
        else 
            hieu=-a-b;
    printf ("%ld", hieu);
    return 0;
}