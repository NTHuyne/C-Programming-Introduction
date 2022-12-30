#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Inset an integer number lower than 10: ");
        scanf("%d", &n); 
    }
    while (n>9);
    for (int i=1; i<=n;i++)
    {
        for (int j=1; j<=i;j++)
            printf("%d", j);
            printf("\n");
    }
    return 0;
}