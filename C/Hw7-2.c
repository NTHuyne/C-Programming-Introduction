#include <stdio.h>
#include <math.h>

unsigned char horizontal_line = 196,
              vertical_line = 179,
              upper_left_corner = 218,
              upper_right_corner = 191,
              lower_left_corner = 192,
              lower_right_corner = 217,
              vertical_right = 195,
              vertical_left = 180,
              horizontal_down = 194,
              horizontal_up = 193,
              cross = 197;

void first_line(int n)
{
    printf("%c", upper_left_corner);
    for (int i = 1; i <= n - 1; ++i)
    {
        printf("%c%c%c%c", horizontal_line, horizontal_line, horizontal_line, horizontal_down);
    }
    printf("%c%c%c", horizontal_line, horizontal_line, horizontal_line);
    printf("%c\n", upper_right_corner);
}

void last_line(int n)
{
    printf("%c", lower_left_corner);
    for (int i = 1; i <= n - 1; ++i)
    {
        printf("%c%c%c%c", horizontal_line, horizontal_line, horizontal_line, horizontal_up);
    }
    printf("%c%c%c", horizontal_line, horizontal_line, horizontal_line);
    printf("%c\n", lower_right_corner);
}

void vertical(int n)
{
    for (int i = 0; i <= n; ++i)
    {
        printf("%c   ", vertical_line);
    }
    printf("\n");
}

void box(int m, int n)
{
    vertical(n);
    printf("%c", vertical_right);
    for (int i = 1; i <= n - 1; ++i)
    {
        printf("%c%c%c%c", horizontal_line, horizontal_line, horizontal_line, cross);
    }
    printf("%c%c%c", horizontal_line, horizontal_line, horizontal_line);
    printf("%c\n", vertical_left);
}

int main()
{
    int m, n;
    do
    {
        printf("Number of rows: ");
        scanf("%d", &m);
        printf("Number of columns: ");
        scanf("%d", &n);
        if (m < 1 || n < 1)
        {
            printf("Unavailable. Do it again!!!\n");
        }
    } while (m < 1 || n < 1);
    first_line(n);
    for (int i = 1; i <= m - 1; ++i)
    {
        box(m, n);
    }
    vertical(n);
    last_line(n);
    return 0;
}