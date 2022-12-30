#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 50

typedef struct{
    char MaS[MAX];
    char tenS[MAX];
    char tacgia[MAX];
    int namxb;
    float thanhtien, thue, thucthu;
}SACH;

int n;
SACH sach[50];

void nhapsach(SACH sach[], int *n){
    printf("Nhap so luong sach: ");
    scanf ("%d", n); 
    while (n<=0){
        printf("Khong thoa man! Nhap lai: ");
        scanf ("%d", n);
    }
    for (int i=0; i < *n; i++){
        printf ("Nhap ma so sach: ");
        fflush(stdin);
        gets(sach[i].MaS);
        printf("Nhap ten sach: ");
        fflush(stdin);
        gets(sach[i].tenS);
        printf("Nhap tac gia: ");
        fflush(stdin);
        gets(sach[i].tacgia);
        printf("Nhap nam xuat ban: ");
        scanf("%d", &sach[i].namxb);
        while(sach[i].namxb<=0){
            printf("Khong thoa man! Nhap lai ");
            scanf("%d", &sach[i].namxb);
        }
        printf("Nhap thanh tien: ");
        scanf("%f", &sach[i].thanhtien);
        sach[i].thue = sach[i].thanhtien * 0.1;
        sach[i].thucthu = sach[i].thanhtien - sach[i].thue;
    }
}

void xuatsach(SACH sach[], int n){
    printf ("%-10s %-25s %-20s %-14s %-12s %-12s %-12s\n", "Ma Sach", "Ten Sach", "Tac Gia", "Nam xuat ban", "Thanh Tien", "Thue", "Thuc Thu");
    for (int i=0; i<n; i++){
        printf ("%-10s %-25s %-20s %-14d %-12.3f %-12.3f %-12.3f\n", sach[i].MaS, sach[i].tenS, sach[i].tacgia, sach[i].namxb, sach[i].thanhtien, sach[i].thue, sach[i].thucthu);
    }
}

int main(){
    system("cls");
    nhapsach(sach, &n);
    xuatsach(sach, n);
    return 0;
}