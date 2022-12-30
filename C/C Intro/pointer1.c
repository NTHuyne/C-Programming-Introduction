#include <stdio.h>

void input(int a[], int *size){
    int n;
    scanf ("%d", &n);
    *size = n;
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}
void output(int a[], int n){
    for (int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}
void add(int a[], int n){
    int *pt;
    int *last = a+n;
    for (pt = a; pt!=last; pt++){
        *pt += 2;
    }
}
int main(){
    int a[1000], n;
    input(a, &n);
    add(a,n);
    output(a,n);
    return 0;
}



