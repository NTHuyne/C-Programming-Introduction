#include <stdio.h>

typedef union {long l; double d;} gtype;

gtype sum_d(gtype g1, gtype g2){
    return (gtype){.d = g1.d + g2.d};
}

gtype sum_l(gtype g1, gtype g2){
    return (gtype){.l = g1.l + g2.l};
}

int main(){
    gtype g1, g2;
    printf("Nhap vao hai so nguyen: ");
    scanf("%ld %ld", &g1.l, &g2.l);
    printf("%ld + %ld = %ld", g1.l , g2.l , sum_l(g1, g2));
    printf("\nNhap vao hai so thuc: ");
    scanf("%lf %lf", &g1.d, &g2.d);
    printf("%.3lf + %.3lf = %.3lf", g1.d , g2.d , sum_d(g1, g2));
    return 0; 
}
