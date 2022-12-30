#include <stdio.h>

void ex1()
{
    printf ("\n");
    printf ("Bai tap 1: \n");
    double a,b;
    double x;
    printf ("Nhap lan luot hai so a va b: ");
    scanf ("%lf %lf", &a, &b);
    if (a>b)
    x=(a+b)/3 + b;
    else if (a=b)
    x=15.172;
    else 
    x=(a-b)/(a*a+b*b);
    printf("Gia tri cua x la: %lf", x);
}
void ex2()
{
    printf ("\n");
    printf ("Bai tap 2: \n");
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
}
int main()
{
    printf("\n 1.Bai tap 1");
    printf("\n 2.Bai tap 2");
    printf("\n 3.Exit");
    printf("\n Chon 1 bai tap hoac Exit: ");
    int number;
    scanf("%d", &number);
    while (number<1|| number>3)
    {
        printf("Khong hop le!\n");
        printf("Nhap lai: ");
        scanf("%d", &number);
    }
    switch (number)
    {
        case 1: ex1(); break;
        case 2: ex2(); break;
        case 3: printf (" Exiting"); break;
    }
    return 0;
}