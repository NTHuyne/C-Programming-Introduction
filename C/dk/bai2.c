#include <stdio.h>

int main()
{
    long a, b, c,max;
    scanf ("%ld %ld %ld", &a, &b, &c);
    max = a;
    if (b>= max)
        max = b;
    if (c>= max)
        max =c;
    printf ("%ld", max);
    return 0;
}