#include <stdio.h>

int main(){
    long a, sum=0;
    scanf("%ld", &a);
    for (int i=1; i<=a; i++)
        sum += i;
    printf ("%ld", sum);
    return 0;
}