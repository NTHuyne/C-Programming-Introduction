#include <stdio.h>
#include <math.h>

int main(){
    long long n;
    scanf ("%Ld", &n);
    if(n < 2)
        printf("NO");
    else if(n==2)
        printf("YES");
    else{
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            count++;
    }
    if(count == 0)
        printf("YES");
    else
        printf("NO");
    }
}