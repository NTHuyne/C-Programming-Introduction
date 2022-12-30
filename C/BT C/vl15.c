#include <stdio.h>
#include <math.h>

int ucln(int a, int b){
    if (a<0) a = a*(-1);
    if (b<0) b = b*(-1);
    while (a!=b)
        if (a>b)
        a = a-b;
        else
        b = b-a;
    return a;
}

void rutgon(int a, int b){
    if (b==0)
        printf("INVALID");
    else{
        if (a==0)
            printf ("0");
        else{
            int temp = ucln (a,b);
            a = a/temp;
            b = b/temp;
            if (abs(b)==1)
                printf ("%d", a/b);
            else{
    		    if (a*b>0){
        		    a = abs(a);
        		    b = abs(b);
                    printf ("%d %d", a, b);
                }
                if (a*b<0){
                    if (b<0){
                        a=-a;
                        b=-b;
                        printf ("%d %d",a, b);
                    }
                    else
                        printf ("%d %d",a, b);
                }
            }
    	}
            
	}
}

int main(){
    int a,b;
    scanf ("%d %d", &a, &b);
    rutgon(a,b);
    return 0;
}