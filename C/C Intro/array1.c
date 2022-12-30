#include <stdio.h>
#define N 100

int main(){
int n;
float a[N], sum=0;
printf ("Insert the number of elements in the array: ");
scanf ("%d", &n);
for (int i=0; i<n; i++){
    printf("Insert the number a[%d]: ", i+1);
    scanf("%f", &a[i]);
    sum=sum+a[i];
}
printf ("The sum is: %.3f\n", sum);
float max=a[0], min=a[0];
for (int i=0; i<n; i++){
    if (a[i]>max)
    max=a[i];
    if (a[i]<min)
    min=a[i];
}
printf ("The maximum value is: %.3f\n", max);
printf ("The minimum value is: %.3f", min);
return 0;
}