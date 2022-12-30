#include <stdio.h>

int main()
{
    float a,b;
    char toantu;
    scanf ("%f %c %f", &a, &toantu, &b);
    if (toantu == '+')
        printf ("%g %c %g = %.2f", a, toantu, b, a+b);
    if (toantu == '-')
        printf ("%g %c %g = %.2f", a, toantu, b, a-b);
    if (toantu == '*')
        printf ("%g %c %g = %.2f", a, toantu, b, a*b);
    if (toantu == '/')
        if (b==0)
            printf("MATH ERROR");
        else
            printf("%g %c %g = %.2f", a, toantu, b, a/b);
    return 0;
}