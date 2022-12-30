#include <stdio.h>

int main()
{
    int dd, mm, y;
    printf ("Nhap mot ngay theo dinh dang d/m/y: ");
    scanf ("%d / %d / %d", &dd, &mm, &y);
    printf ("Ngay: %d Thang: %d Nam: %d\n", dd, mm, y);
    return 0;
}