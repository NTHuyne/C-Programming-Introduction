#include <stdio.h>
#include <math.h>
long factorial(long n){
    long factorial = 1;
    for (int i=1; i<=n; i++)
    factorial *= i;
    return factorial;
}

int main(){
    long double d, e;
    printf ("Insert the angle value(in degree): ");
    scanf("%Lf", &d);
    long double x = d*M_PI/180;
    printf ("Insert the prescision epsilon (The value must be small): ");
    scanf("%Lf", &e);
    long double sin=0;
    long n=0; 
    int sign;
    long double tmp;
    do{
        if (n%2==0)
        sign = 1;
        else
        sign = -1;
        tmp = (pow(x,2*n+1))/(factorial(2*n+1));
        sin += (sign*pow(x,2*n+1))/(factorial(2*n+1));
        n=n+1;
    } while( tmp > e);
    printf ("The approximate of sin(%Lf) is: %Lf",d,sin);
    return 0;
}