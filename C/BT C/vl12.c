#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf ("%d", &n);
    if (n == 0)
        printf ("INF");
    else{
    for (int i=abs(n); i>=1; --i)
    if (n%i==0)
    printf ("%d ", i);
    }
    return 0;
}