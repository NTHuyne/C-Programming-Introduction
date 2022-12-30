#include <stdio.h>

int main(){
    int n;
    do{
        printf("Insert an interger number greater than 1: ");
        scanf ("%d", &n);
    } while (n<=1);
    int f1=2;
    do{ 
        if (n%f1==0){
            printf ("%d ",f1);
            n /=f1;
        }
        else
            f1++;
    }while (n>1);
    return 0;
}