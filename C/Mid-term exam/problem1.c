#include <stdio.h>

int main(){
    int m, n;
    scanf ("%d %d", &m, &n);
    if (m*n==0){
        if (m==0 && n!=0) printf ("%d", n);
        if (n==0 && m!=0) printf("%d", m);
        if (m==0 && n==0) printf ("There is no greatest common divisor!\n");
    }
    else{
    while (m!=n){
        if (m>n)
            m -= n;
        else 
            n -= m;
    }
    printf ("%d", m);
    }
    return 0;
}