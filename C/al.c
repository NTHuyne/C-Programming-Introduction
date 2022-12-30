#include <stdio.h>

int main(){
    int a[]={1,7,5,6,9,12};
    sort(a,a+5);
    for (int i=0; i<6; i++){
        printf("%d ", a[i]);
    }
    return 0;
}