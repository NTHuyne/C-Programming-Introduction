#include <stdio.h>

int Enter_Number_Element(int a[]){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        printf("Enter element value: ", i+1);
        scanf("%d", &a[i]);
    }
    return n;
}

int Find_max(int a[], int n){
    int max=a[0];
    for (int i=1; i<n; i++){
        max=(a[i]>max?a[i]:max); 
    }
    return max;
}

int main(){
int n, m, a[1000], b[1000], Enter_Number_Element(), Find_max();
n = Enter_Number_Element(a);
m = Enter_Number_Element(b);
printf("The max value of two arrays is: %d",(Find_max(a,n)>Find_max(b,m)?Find_max(a,n):Find_max(b,m)));
return 0;
}