#include <stdio.h>

int main()
{
    int a=10, p;
    p= (++a) + (a++);
    printf ("%d\n", p);
    return 0;
}