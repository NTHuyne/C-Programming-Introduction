#include <stdio.h>
#include <math.h>

int main(){
    int N;
    double x[1000], sum=0, eps, u, tmp=0;
    scanf ("%d", &N);
    while (N<1){
        printf("Invalid number! Input again: ");
        scanf("%d", &N);
    }
    for (int i=0; i<N; i++){
        scanf ("%lf", &x[i]);
        sum += x[i];
    }
    u = sum/N;
    for (int i=0; i<N; i++)
        tmp += (x[i]-u)*(x[i]-u);
    eps = sqrt(tmp/N);
    printf("%lf", eps);
    return 0;
}