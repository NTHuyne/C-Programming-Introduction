#include <stdio.h>
#include <stdlib.h>

int plus_sign=43,
    vertical_line=124,
    dash=45;
void horizontal(int n,int rn){
    for(int i=1; i<=n; i++){
        printf("%c%c%c%c%c",plus_sign, dash, dash, dash, dash);
    };
    printf("%c", plus_sign);
    printf("\n");
    for(int i=1; i<=n; i++){
        rn=rand()%1000;
        printf("%c%-4d",vertical_line,rn);
    };
    printf("%c", vertical_line);
    printf("\n");
}
int main(){
    int m, n, rn;
    do{
    printf("Insert the number of rows (a value lower than 10): ");
    scanf("%d", &m);
    printf("Insert the number of columns (a value lower than 10): ");
    scanf("%d", &n);
    }while(m>10 || n>10 || n<1 || m<1);
    for (int i=1; i<= m; i++)
    horizontal(n, rn);
    for(int i=1; i<=n; i++){
        printf("%c%c%c%c%c",plus_sign, dash, dash, dash, dash);
    };
    printf("%c", plus_sign);
    return 0;
}