#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int ID;
    char nation[8];
    char name[30];
    float score[3], fr;
} VDV;

VDV vdv[20];
int n=0, m=0;

void nhapthongtin();
void inthongtin();
void thidau();
void timkiem();
void timkiemtheoquocgia();
void timkiemtheovandongvien();
void inketqua();
void sapxep();

void loadmenu(){
    int dem;
    do{
    printf("Chuong trinh Olympic mon nhay xa: \n");
    printf("1. Nhap thong tin\n");
    printf("2. In thong tin\n");
    printf("3. Thi dau\n");
    printf("4. Tim kiem\n");
    printf("\t4.1. Tim kiem theo quoc gia\n");
    printf("\t4.2. Tim kiem theo ten van dong vien\n");
    printf("5. In ket qua\n");
    printf("6. Thoat\n");
    printf("Chon mot chuc nang de thuc hien\n");
    scanf("%d", &dem);
    while (dem <1 || dem >6){
        printf ("Khong hop le! Nhap lai: ");
        scanf("%d", &dem);
    }
    switch (dem){
    case 1: nhapthongtin();
            break;
    case 2: inthongtin();
            break;
    case 3: thidau();
            break;
    case 4: timkiem();
            break;
    case 5: inketqua();
            break;
    default: break;
    } 
    } while (dem !=6);
}

int main(){
    loadmenu();
    return 0;
}

void nhapthongtin(){
    system("cls");
    if (n == 0){
        printf("Nhap so luong VDV: "); scanf("%d", &n);
        while (n<1 ||n >20){
            printf ("Khong hop le! Nhap lai: "); scanf("%d", &n);
        }
        for (int i=0; i<n; i++){
            vdv[i].ID = i+1;
            printf("Nhap thong tin VDV so %d: \n", i+1);
            printf("Quoc gia: "); scanf("%s", vdv[i].nation);
            printf("Ten: "); fflush(stdin); gets(vdv[i].name);
        }
    }
    else 
        printf("Ban khong duoc thay doi thong tin VDV");
}

void inthongtin(){
    system("cls");
    if(n ==0)
        printf ("Ban chua chon chuc nang 1!\n");
    else{
        printf("%-4s %-8s %-30s %-5s %-5s %-5s %-5s\n","ID", "Nation", "Name", "R1", "R2", "R3", "FR");
        for (int i=0; i<n; i++){
            printf("%-4d %-8s %-30s\n", vdv[i].ID, vdv[i].nation, vdv[i].name);
        }
    }
}

void thidau(){
    system("cls");
    if (n==0){
        printf("Ban chua nhap chuc nang 1: \n");
    }
    else{
        if (m==0){
            printf("Nhap diem thi dau cua cac VDV \n");
            for (int i=0; i<3; i++){
                printf("R%d: \n", i+1);
                for (int j=0; j<n; j++){
                    scanf("%f", &vdv[j].score[i]);
                    while (vdv[j].score[i] <0 || vdv[j].score[i] >20){
                        printf("Khong hop le! Nhap lai: "); scanf("%f", &vdv[j].score[i]);
                    }
                }
            }
        }
        else {
            printf("Nhap lai diem thi dau cua cac VDV! \n");
            for (int i=0; i<3; i++){
                printf("R%d: \n", i+1);
                for (int j=0; j<n; j++){
                    scanf("%f", &vdv[j].score[i]);
                    while (vdv[j].score[i] <0 || vdv[j].score[i] >20){
                        printf("Khong hop le! Nhap lai: "); scanf("%f",&vdv[j].score[i]);
                    }
                }
            }
        }
        m=1;
    }
    for (int i=0; i<n; i++){
        vdv[i].fr = vdv[i].score[0];
        for (int j=1; j<3; j++)
            if(vdv[i].fr < vdv[i].score[j])
                vdv[i].fr = vdv[i].score[j];
    }
}

void inketqua(){
    system("cls");
    if (n==0)
        printf("Ban chua nhap chuc nang 1!\n");
    else{
        if (m==0)
            printf("Ban chua nhap chuc nang 3!\n");
        else{
            sapxep();
            printf("%-4s %-8s %-30s %-5s %-5s %-5s %-5s\n","ID", "Nation", "Name", "R1", "R2", "R3", "FR");
            for (int i=0; i<n; i++){
                printf("%-4d %-8s %-30s ", vdv[i].ID, vdv[i].nation, vdv[i].name);
                for (int j=0; j<3; j++){
                    if (vdv[i].score[j] == 0)
                        printf("%-5c ", '-');
                    else
                        printf("%-5.2f ", vdv[i].score[j]);
                }
                printf("%-5.2f\n", vdv[i].fr);
            }
        }
    }
}

void timkiemtheoquocgia(){
    char tmp[8];
    printf("Nhap ten quoc gia muon tim kiem: "); scanf("%s", tmp);
    int dem=0;
    printf("Ket qua tim kiem: \n");
    printf("%-4s %-8s %-30s %-5s %-5s %-5s %-5s\n","ID", "Nation", "Name", "R1", "R2", "R3", "FR");
    for (int i=0; i<n; i++){
        if (strcmp(tmp, vdv[i].nation)==0){
            printf("%-4d %-8s %-30s ", vdv[i].ID, vdv[i].nation, vdv[i].name);
            for (int j=0; j<3; j++){
                if (vdv[i].score[j] ==0 )
                    printf("%-5c ", '-');
                else{
                    printf("%-5.2f ", vdv[i].score[j]);
                }
            }
            printf("%-5.2f\n", vdv[i].fr);
            dem =1;
        }
    }
    if (dem == 0)
        printf("Khong tim thay ket qua\n");
}

void timkiemtheoten(){
    char tmp[30]; int dem=0;
    printf("Nhap ten muon tim kiem: "); fflush(stdin); gets(tmp);
    printf("Ket qua tim kiem: \n");
    printf("%-4s %-8s %-30s %-5s %-5s %-5s %-5s\n","ID", "Nation", "Name", "R1", "R2", "R3", "FR");
    for (int i=0; i<n; i++){
        char *p = strstr(vdv[i].name, tmp);
        if(p){
            printf("%-4d %-8s %-30s ", vdv[i].ID, vdv[i].nation, vdv[i].name);
            for (int j=0; j<3; j++){
                if (vdv[i].score[j] ==0 )
                    printf("%-5c ", '-');
                else{
                    printf("%-5.2f ", vdv[i].score[j]);
                }
            }
            printf("%-5.2f\n", vdv[i].fr);    
            dem =1;        
        }
    }
    if (dem ==0){
        printf("Khong tim thay ket qua\n");
    }
}

void timkiem(){
    system("cls");
    if (n == 0)
        printf ("Ban chua chon chuc nang 1");
    else{
        int tmp;
        do{
        printf("\t4.1. Tim kiem theo quoc gia\n");
        printf("\t4.2. Tim kiem theo ten van dong vien\n");
        printf("Chon 1 de thuc hien 4.1, Chon 2 de thuc hien chuc nang 4.2, Chon 3 de thoat\n");
        scanf("%d", &tmp);
        while (tmp<1 || tmp>3){
            printf("Khong hop le! Nhap lai: ");
            scanf("%d", &tmp);
        }
        switch(tmp){
            case 1: timkiemtheoquocgia();
                    break;
            case 2: timkiemtheoten();
                    break;
            default: break;
        }
        }while (tmp !=3);
    }
}

void sapxep(){
    VDV tg;
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if (vdv[i].fr < vdv[j].fr){
                tg = vdv[i];
                vdv[i] = vdv[j];
                vdv[j] = tg;
            }
        }
    }
}