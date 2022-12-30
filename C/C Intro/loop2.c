#include <stdio.h>

int main()
{
    long double x1,x2, tmp;
    x1=1; x2=2;
    for (int i=1; i<=100;i++)
    {
        printf ("%.0Lf ", x1);
        tmp=x1+x2;
        x1=x2;
        x2=tmp;
    }
    return 0;
}