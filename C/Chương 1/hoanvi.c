#include <stdio.h>

int main()
{
    int temp, a, b;
    printf ("Nhap vao so nguyen a: ");
    scanf ("%d", &a);
    printf ("Nhap vao so nguyen b: ");
    scanf ("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf ("Hoan vi hai so nguyen a va b la: %d %d ", a, b);
    return 0;
}