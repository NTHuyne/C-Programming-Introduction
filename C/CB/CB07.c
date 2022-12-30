#include <stdio.h>
#define p 3.14

int main()
{
    double r;
    scanf ("%lf", &r);
    printf ("%.3lf\n", (2*p*r));
    printf ("%.3lf\n", (p*r*r));
    return 0; 
} 
