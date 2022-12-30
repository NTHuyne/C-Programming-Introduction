#include<stdio.h>
#define max 100

void nhapmatran(int a[][max], int SoDong, int SoCot)
{
   for(int i = 0; i < SoDong; i++)
      for(int j = 0; j < SoCot; j++)
      {
         printf("a[%d][%d] = ", i+1, j+1);
         scanf("%d", &a[i][j]);
      }
}

void sxmang1chieu(int a[], int n){
    int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                int tg;
                tg = a[i];
                a[i]=a[j];
                a[j]=tg;
            }     
        }
    }
}

void sxmang2chieucach1(int a[][max], int SoDong, int SoCot){
	int n = 0;
	int b[max];
	for(int i = 0; i < SoDong; i++)
	{
		for(int j = 0; j < SoCot; j++)
		{
			b[n] = a[i][j];
			n++; 
		}
	}
	sxmang1chieu(b, n);
	n = 0; 
	for(int i = 0; i < SoDong; i++)
	{
		for(int j = 0; j < SoCot; j++)
		{
			a[i][j] = b[n];
			n++;
		}
	}
    for(int i=0; i< SoDong; i++){
        for(int j=0; j< SoCot; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}

void sxmang2chieucach2(int a[][max], int SoDong, int SoCot){
	int n = SoDong * SoCot;
	for(int i = 0; i < n - 1; i++)
		for(int j = i + 1; j < n; j++)
			if(a[i / SoCot][i % SoCot] > a[j / SoCot][j % SoCot]){
                int tg;
                tg = a[i / SoCot][i % SoCot];
                a[i / SoCot][i % SoCot] = a[j / SoCot][j % SoCot];
                a[j / SoCot][j % SoCot] = tg;
            }
    for(int i=0; i< SoDong; i++){
        for(int j=0; j< SoCot; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}

int main(){
    int a[max][max],SoDong, SoCot;
    printf("Nhap vao so dong: ");
    scanf("%d", &SoDong);
    printf("Nhap vao so cot: ");
    scanf("%d", &SoCot);
    nhapmatran(a, SoDong, SoCot);
    printf ("Sap xep mang theo cach 1: \n");
    sxmang2chieucach1(a, SoDong, SoCot);
    printf ("Sap xep mang theo cach 2: \n");
    sxmang2chieucach2(a, SoDong, SoCot);
    return 0;
}



