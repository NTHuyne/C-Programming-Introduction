#include <stdio.h>
#include <math.h>

int fac(int *n){
    int s=1;
    for (int i=1; i<=*n; i++)
    s *= i;
    return s;
}

double sum(double x, int n){
    double s=x;
    for (int i=2; i<=n; i++)
    s += pow(x,i)/fac(&i);
    return s;
}

int main(){
    int n;
    double x;
    scanf("%lf %d", &x, &n);
    printf("%.2lf", sum(x,n));
    return 0;
}

