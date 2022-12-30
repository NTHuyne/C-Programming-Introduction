#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    float delta;
    delta = b*b-4*a*c;
    if(a==0)
        if (b==0)
            if (c==0)
            printf("INF");
            else 
            printf("NO");
        else
            printf("%.2f", -c/b);
    else{
        if (delta < 0)
        printf("NO");
        else if(delta == 0){
        float x = -b/(2*a);
        printf("%.2f", x);
        }
        else
        printf("%.2f %.2f", (-b-sqrt(delta))/(2*a), (-b+sqrt(delta))/(2*a));
    }
    return 0;
}