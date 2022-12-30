#include <stdio.h>

int main()
{
    int a,b;
    scanf ("%d %d", &a, &b);
    printf ("%d\n", a+b);
    printf ("%d\n", a-b);
    printf ("%d\n", a*b);
    if (b!=0)
    printf ("%.2f\n", a*1.0/b);
    else 
    printf ("INF");
    return 0;
}