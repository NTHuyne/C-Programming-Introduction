#include <stdio.h>

long factorial(long n){
    long factorial = 1;
    for (int i=1; i<=n; i++)
    factorial *= i;
    return factorial;
}

int main(){
    long n;
    scanf ("%ld", &n);
    printf ("%ld", factorial(2*n+1));
    return 0;
}
