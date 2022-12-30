#include <stdio.h>
#include <math.h>

int main()
{
    float x1,x2,y1,y2, khoangcach;
    printf ("Nhap toa do diem thu 1: ");
    scanf ("%f; %f", &x1, &y1);
    printf ("Nhap toa do diem thu 2: ");
    scanf ("%f; %f", &x2, &y2);
    khoangcach = sqrt((x1-x2)*(x1-x2)+ (y1-y2)*(y1-y2));
    printf ("Khoang cach giua hai diem la: %f\n", khoangcach);
    return 0;
}