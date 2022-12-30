#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct{
    char TenSV[20];
    float DiemQT, DiemCK, DiemTK;
    char DiemXL;
} DiemSV;

DiemSV sv[40];
int n;

void nhapdiem(){
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    while (n<1 || n>40){
        printf ("So sinh vien phai nam trong [1,40]! Nhap lai: ");
        scanf ("%d, &n");
    };
    for (int i=0; i<n; i++){
        printf("Nhap thong tin sinh sinh vien so %d\n", i+1);
        printf("Ho va ten sinh vien: "); fflush(stdin); gets(sv[i].TenSV);
        printf("Nhap diem QT: "); scanf("%f", &sv[i].DiemQT);
        while (sv[i].DiemQT <0 || sv[i].DiemQT>10){
            printf("Diem sinh vien nam trong [0,10]! Nhap lai: ");
            scanf("%f", &sv[i].DiemQT);
        }
        printf("Nhap diem CK: "); scanf ("%f", &sv[i].DiemCK);
        while (sv[i].DiemCK <0 || sv[i].DiemCK>10){
            printf("Diem sinh vien nam trong [0,10]! Nhap lai: ");
            scanf("%f", &sv[i].DiemCK);
        }
        sv[i].DiemTK = sv[i].DiemQT*0.4 + sv[i].DiemCK*0.6;
        if (sv[i].DiemTK<4) sv[i].DiemXL='F';
        else if (sv[i].DiemTK>=4 && sv[i].DiemTK<5.5) sv[i].DiemXL='D';
        else if (sv[i].DiemTK>=5.5 && sv[i].DiemTK<7) sv[i].DiemXL='C';
        else if (sv[i].DiemTK>=7 && sv[i].DiemTK<8.5) sv[i].DiemXL='B';
        else sv[i].DiemXL='A';
    }
}
void inbangdiem(){
    printf("%-20s %-10s %-10s %-10s %-10s\n","TenSV", "DiemQT", "DiemCK", "DiemTK", "Xeploai");
    for (int i=0; i<n; i++){
        printf("%-20s %-10.1f %-10.1f %-10.1f %-10c\n", sv[i].TenSV, sv[i].DiemQT, sv[i].DiemCK, sv[i].DiemTK, sv[i].DiemXL);
    }
}
void chenhlechdiem(){
    int m;
    printf("Nhap diem chenh lech: "); scanf("%d", &m);
    while (m<2 || m>5){
        printf("Diem chenh lech nam trong [2.5]! Nhap lai: "); scanf("%d", &m);
    }
    for (int i=0; i<n; i++){
        if (abs(sv[i].DiemQT-sv[i].DiemCK)>=m)
        printf("%-20s %-10.1f %-10.1f %-10.1f %-10c\n", sv[i].TenSV, sv[i].DiemQT, sv[i].DiemCK, sv[i].DiemTK, sv[i].DiemXL);
    }
}
void sapxep(){
    DiemSV tg;
    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++){
            if (sv[i].DiemTK < sv[j].DiemTK){
                tg = sv[i];
                sv[i] = sv[j];
                sv[j] = tg;
            }
            else if (sv[i].DiemTK == sv[j].DiemTK)
                if (sv[i].TenSV[0] > sv[j].TenSV[0]){
                    tg = sv[i];
                    sv[i] = sv[j];
                    sv[j] = tg;
                }
        }
    inbangdiem();
}


int main(){
    int dem;
    system("cls");
    do{
        printf("Chuong Trinh Quan Ly Diem Mon Hoc\n");
        printf("1. Nhap diem\n");
        printf("2. In Bang Diem\n");
        printf("3. Chenh lech diem\n");
        printf("4. Sap xep\n");
        printf("5. Thoat\n");
        printf("Press (1,2,3,4,5) to choose\n");
        scanf("%d", &dem);
        while(dem<1 || dem>5){
            printf("Khong hop le! Nhap lai: ");
            scanf("%d", &dem);
        }
        switch(dem){
            case 1: {
                    system("cls");
                    nhapdiem();
                    break;
                    }
            case 2: {
                    system("cls");
                    inbangdiem();
                    break;
                    }
            case 3: {
                    system("cls");
                    chenhlechdiem();
                    break;
                    }
            case 4: {
                    system("cls");
                    sapxep();
                    break;
                    }
            case 5: break;
        }
    }while (dem != 5);
    return 0;
}

