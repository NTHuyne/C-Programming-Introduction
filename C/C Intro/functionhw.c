#include <stdio.h>

int a,b,c;

int nhapso(){
    scanf ("%d %d %d", &a, &b, &c);
}

int max (int a, int b){
    if (a>=b)
        return a;
    else 
        return b;
}

int main(){
    nhapso();
    if (max(a,b)>c)
    printf("%d", max (a,b));
    else 
    printf ("%d", c);
    return 0;    
}