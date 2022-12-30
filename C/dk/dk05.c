#include <stdio.h>
#include <math.h>

int main(){
    long n;
    scanf("%ld", &n);
    long tmp = sqrt(n);
    if (tmp*tmp==n)
    printf("YES");
    else
    printf("NO");
    return 0;
}