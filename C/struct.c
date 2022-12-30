#include <stdio.h>
#include <math.h>

typedef struct{
    float x;
    float y;
} point;

void nhap(point p[], int n){
    for (int i=0; i<n; i++){
        printf("Nhap diem thu %d\n", i+1);
        printf("Toa do x: ");
        scanf ("%f", &p[i].x);
        printf("Toa do y: " );
        scanf ("%f", &p[i].y);
    }
}

void xuat(point p[], int n){
    for (int i=0; i<n; i++){
        printf("Toa do diem thu %d: (%.3f ; %.3f)\n", i+1, p[i].x, p[i].y);
    }
}

float distance(point *p1, point *p2){
    float x0=p1->x - p2->x,
    y0=p1->y - p2->y;
    return sqrt(x0*x0 + y0*y0);
}

void sosanh(point p[], int n){
    point p0={0,0};
    int index;
    float min = distance(&p[0], &p0);
    for (int i=0; i<n; i++){
        float d = distance(&p[i], &p0);
        if (d<min){
        min = d;
        index = i+1;
        }
    };
    printf ("Diem gan goc toa do nhat la diem thu %d, khoang cach la: %.3f", index, min);
}

int main(){
    point a[1000];
    int n; 
    printf ("Nhap so diem: ");
    scanf ("%d", &n);
    nhap (a, n);
    sosanh (a, n);
    return 0;
}