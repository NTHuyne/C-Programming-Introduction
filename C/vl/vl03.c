#include <stdio.h>

int main(){
    int a;
    long sum;
    scanf("%d", &a);
    sum = 2*a;
    for (int i=2; i<=a; i++)
        sum+=i;
    printf ("%ld", sum);
    return 0;
}