#include<stdio.h>
#include<math.h>
#define N 100

struct point{double x; double y;};

double distance(struct point *p1, struct point *p2){
    double x = p1->x - p2->x, y= p1->y-p2->y;
    return sqrt(x*x+y*y); 
}

int main(){
    int n, j=0;
    printf("Nhap so n (n <= %d): ", N);
    scanf("%d", &n);
    struct point a[N];
    for (int i=0; i<n; i++){
        printf("Nhap diem thu %d:", i+1);
        scanf("%lf %lf",&a[i].x,&a[i].y);
    }
    struct point p0 = {0,0};
    double min=distance(&p0,&a[0]);
    for (int i=1; i<n; i++){
        double dist=distance(&p0,&a[i]);
        if (min>=dist){
        min=dist;
        j=i;
        }
    }
    printf("Diem gan goc toa do nhat la diem thu %d, khoang cach la %lf", j+1, min);
    return 0;
}