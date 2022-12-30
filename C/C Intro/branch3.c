//Exercises 2 3 4 in the slide 
#include <stdio.h>
#include <math.h>

//Exercise 2: Write a program to get three numbers from input and print out the maximum of those
void ex2()
{
    double a,b,c,max;
    printf ("Nhap vao 3 so: ");
    scanf ("%lf %lf %lf", &a, &b, &c);
    if (a>=b)
        max = a;
    if (c>=max)
        max = c;
    printf ("Gia tri lon nhat trong ba so la: %lf", max);
}

//Exercise 3: Write a program to solve ax2 + bx + c = 0
void ex3()
{
    double a,b,c;
    printf("Nhap cac he so cua phuong trinh bac 2: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    while (a==0)
    {
        printf ("Khong phai la phuong trinh bac 2!\n");
        printf ("Nhap lai: ");
        scanf("%lf %lf %lf", &a, &b, &c);
    }
    double delta;
    double x1, x2;
    delta = b*b - 4*a*c;
    if (delta < 0)
        printf ("Phuong trinh vo nghiem");
    else if (delta == 0)
        printf ("Phuong trinh co nghiem kep: %lf ", -b/(2*a));
    else
        {
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            printf ("Phuong trinh co hai nghiem la %lf %lf", x1, x2);
        }
}

//Exercise 4
void ex4()
{
    double y,x,a,b;
    printf ("Nhap vao hai so a va b: ");
    scanf ("%lf %lf", &a, &b);
    if (a<b)
        x = (a+b)/3 + b;
    else if (a==b)
        x = 15.172;
    else   
        x = (a-b)/(a*a + b*b);
    y=15*x*x + x + 12;
    printf ("Gia tri cua y la: %lf", y);    
}

// menu
int main()
{
    int n;
    printf ("\nChon mot bai tap 2 3 4 o slide");
    printf ("\n Chon so 1: EXIT\n");
    printf (" Chon so 2. Exercise 2\n");
    printf (" Chon so 3. Exercise 3\n");
    printf (" Chon so 4. Exercise 4\n"); 
    printf ("\n Chon mot so tu 1 den 4: ");
    scanf ("%d", &n);
    while (n<1 || n>4)
    {
        printf ("So khong hop le!\n");
        printf ("Nhap lai: ");
        scanf ("%d", &n);
    }
    switch (n)
    {
        case 1: printf ("..."); break;
        case 2: ex2(); break;
        case 3: ex3(); break;
        case 4: ex4(); break;
    }
    return 0;
}