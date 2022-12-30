#include <stdio.h>

int main()
{
    int n;
    printf ("Nhap mot so nguyen n: ");
    scanf ("%d", &n);
    switch (n)
    {
        case 0: printf ("Khong\n");
        case 1: printf ("Mot\n");
        case 2: printf ("Hai\n");
        case 3: printf ("Ba\n");
        case 4: printf ("Bon\n");
        default: printf ("Ngoai khoang\n");
    }
    return 0;
}
