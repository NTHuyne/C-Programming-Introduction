#include <stdio.h>

int main()
{
    int a;
    double b;
    printf ("Nhap so do chieu dai theo inch: ");
    scanf ("%d", &a);
    b = 2.54*a;
    printf ("So do chieu dai theo cm la: %f", b);
    return 0;
}