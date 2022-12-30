#include <stdio.h>
#include <stdlib.h>

int main(){
    int plus_sign=43,
        vertical_line=124,
        dash=45, n, rn;
    scanf ("%d", &n);
    while (n<=0 || n >10){
        printf("Invalid number! Input again: ");
        scanf("%d", &n);
    }
    for (int i=1; i<=n; i++){
    for (int j=0; j<n; j++)
        printf("%c%c%c%c%c%c",plus_sign, dash, dash, dash, dash, dash);
    printf("%c", plus_sign);
    printf("\n");
    for(int k=((i-1)*n); k<(i*n); k++){
        printf("%c%5d",vertical_line,k+1);
    }
    printf("%c", vertical_line);
    printf("\n");
    }
    for(int j=0; j<n; j++)
        printf("%c%c%c%c%c%c",plus_sign, dash, dash, dash, dash, dash);
    printf("%c", plus_sign);
}