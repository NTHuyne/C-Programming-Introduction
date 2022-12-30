#include <stdio.h>
#include <math.h>

struct point {double x; double y;};

double distance(struct point *p1, struct point *p2){
    double x = p1->x - p2->x, y= p1->y-p2->y;
    return sqrt(x*x+y*y); 
}

int main(){
    struct point p1, p2;
    printf("Nhap toa do diem thu nhat: ");
    scanf("%lf%lf",&p1.x, &p1.y);
    printf("Nhap toa do diem thu hai: ");
    scanf("%lf%lf",&p2.x, &p2.y);
    printf("Khoang cach Euclide giua hai diem tren la: %lf", distance(&p1,&p2));
    return 0; 
}



