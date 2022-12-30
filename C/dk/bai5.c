#include <stdio.h>

int main()
{
    float a, b;
    scanf("%d %d", &a , &b);
    if (a==0)
        if (b==0)
            printf ("INF");
        else
            printf ("NO");
    else
    printf("%.2f", -b/a);
    return 0;
}