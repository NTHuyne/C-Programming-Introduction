#include <stdio.h>

int main(){
    int a, b, s=0;
    scanf ("%d %d", &a, &b);
    if (a<=b)
    for (int i=1; i<=b; i++)
    if (i%2==0)
    s +=i;
    return s;
}