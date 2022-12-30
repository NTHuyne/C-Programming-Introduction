// Input a month and a year in "mm:yyyy" format. print out the number of days in that month
#include <stdio.h>

int main()
{
    int m, y;
    printf ("Nhap thang va nam theo dinh dang mm:yyyy: ");
    scanf ("%d:%d", &m, &y);
    while (m>12 || m<1 || y<= 0)
        {
            printf("So thang/nam khong hop le\n");
            printf("Nhap lai: ");
            scanf("%d:%d", &m, &y);
        }
    int a = y%4;
    switch (m)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf ("31 ngay"); break;
        case 2:
            {
                if (a==0)
                printf ("29 ngay");
                else
                printf ("28 ngay");
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf ("30 ngay");
            break;
    }
    return 0;
}