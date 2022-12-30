#include <stdio.h>

int giaithua(int n){
    int s=1;
    for (int i=1; i<=n; i++)
    s *= i;
    return s;
}

int main(){
    int n,k;
    scanf ("%d %d", &n, &k);
    if (k>=0 && k<=n && n<=25)
    if (k==0 || k==n)
        return 1;
    else if (k==1)
        return n;
    else
        printf ("%d", giaithua(n)/(giaithua(k)*giaithua(n-k)));
    return 0;
}