#include <stdio.h>
#include <math.h>

int main(){
    int n;
    double pi=1;
    do{
        printf("Insert n greater than 2: ");
        scanf("%d", &n);
    }while(n<=2);
    for (int i=1; i<=n; i++)
    pi += (pow(-1,i))/(2*i+1);
    printf ("The approximate value of pi is: %.10lf", pi*4);
    return 0;
}