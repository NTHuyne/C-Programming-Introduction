#include <stdio.h>
#include <string.h>

void myshow();

int main(){
    myshow();
    myshow();
    myshow();
    return 0;
}

void myshow(){
    static int k=20;
    printf ("%d", k);
    k++;
}