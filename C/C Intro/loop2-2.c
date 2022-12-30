#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    do{
        printf ("Insert a number n greater than 1: ");
        scanf ("%d", &n);
    }while (n<=1);
    int f1=n+1;
    while (1){
        bool check = true;
        for (int i=2; i<f1; i++)
        if (f1%i==0){
            check=false;
            break;
        }
        if(check){
            printf("The first prime number greater than n is: %d", f1);
            break;
        }
        f1++;
    }
    return 0; 
}