#include <stdio.h>

int main(){
    long long n;
    scanf("%Ld", &n);
    if (n<=0)
        printf ("NO");
    else{
        int s=0;
        for (int i=1; i<= n/2; i++)
            if (n % i ==0)
            s += i;
        printf ((n==s)?"YES":"NO");
    }
    return 0;
}