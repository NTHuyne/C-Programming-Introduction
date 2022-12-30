#include <stdio.h>

int main()
{
    double h,m,s, s0;
    printf("Nhap thoi gian theo dinh dang hh/mm/ss: ");
    scanf("%lf/ %lf/ %lf", &h, &m, &s);
    s0= h*3600 + m*60 + s;
    printf("Tong so giay ke tu 00:00:00 la: %f", s0);
    return 0;
}