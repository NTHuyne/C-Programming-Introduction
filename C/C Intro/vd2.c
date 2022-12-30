#include <stdio.h>

int main()
{
    int n;
    printf ("Nhap vao mot so nguyen tu 1 den 10: ");
    scanf ("%d", &n);
    while (n>10 || n<1)
    {
        printf ("Khong hop le!\n");
        printf ("Nhap lai: ");
        scanf ("%d", &n);
    }
    switch (n)
    {
        case 1: printf("Mot"); break;
        case 2: printf("Hai"); break;
        case 3: printf("Ba"); break;
        case 4: printf("Bon"); break;
        case 5: printf("Nam"); break;
        case 6: printf("Sau"); break;
        case 7: printf("Bay"); break;
        case 8: printf("Tam"); break;
        case 9: printf("Chin"); break;
        case 10: printf("Muoi"); break;
    }
    return 0;
}