#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100
int n=0, m;
float dtb;
typedef struct{
    char name[30];
    char id[12];
    char hometown[30];
    float gpa;
} SV;
SV sv[MAX];

void nhapsv(SV sv[], int *n){
    printf("Nhap so luong sinh vien: ");
    scanf("%d", n);
    while(n<=0){
    printf("Yeu cau nhap lai: ");
    scanf("%d", n);
    }
    for (int i=0; i<*n; i++){
        printf("Sinh vien %d \n", i+1);
        printf("Name: ");
        fflush(stdin);
        gets(sv[i].name);
        printf("Id: ");
        fflush(stdin);
        gets(sv[i].id);
        printf("Home_town: ");
        fflush(stdin);
        gets(sv[i].hometown);
        printf("GPA: ");
        scanf("%f", &sv[i].gpa);
        while (sv[i].gpa<0||sv[i].gpa>4){
            printf("Nhap sai! Yeu cau nhap lai: ");
            scanf("%f", &sv[i].gpa);
        }
    }
    printf ("Nhap thanh cong!\n");
}

void xuatsv(SV sv[], int *n, float *dtb){
    float sum=0;
    printf("%-4s %-27s %-12s %-18s %-4s\n","STT", "Ten", "MSSV", "QueQuan", "GPA");
    for (int i=0; i<*n; i++){
        sum+=sv[i].gpa;
        printf("%-4d %-27s %-12s %-18s %-4.3f\n",i+1, sv[i].name, sv[i].id, sv[i].hometown, sv[i].gpa);
    }
    *dtb = sum/(*n);
    printf("Diem GPA trung binh tat ca sinh vien: %.3f\n", *dtb);
}

void timkiemmssv(SV sv[], int *n){
    char mssv[12];
    printf("MSSV: ");
    fflush(stdin);
    gets(mssv);
    int dem=0;
    for (int i=0; i<*n; i++){
        if (strcmp(sv[i].id,mssv)==0){
            printf("%-4d %-27s %-12s %-18s %-4.3f\n",i+1, sv[i].name, sv[i].id, sv[i].hometown, sv[i].gpa);
            dem++;
        }
    }
    if (dem==0){
        printf("Khong tim thay!");
    }
}

void timkiemquequan(SV sv[], int *n, float *dtb){
    char quequan[30];
    printf("Nhap que quan: ");
    fflush(stdin);
    gets(quequan);
    char ch1[30];
    strcpy(ch1,quequan);
    int dem=0;
    for (int i=0; i<*n; i++){
        char ch2[30];
        strcpy (ch2,sv[i].hometown);
        if (strcmp(strlwr(ch1),strlwr(ch2))==0 && sv[i].gpa>*dtb){
            printf("%-4d %-27s %-12s %-18s %-4.3f\n",i+1, sv[i].name, sv[i].id, sv[i].hometown, sv[i].gpa);
            dem++;
        }
    }
    if (dem==0){
        printf("Khong tim thay!");
    }    
}

int chonchucnang(){
    int choice;
    printf ("Chon mot chuc nang de tiep tuc: ");
    scanf ("%d", &choice);
    while (getchar()!= '\n');
    while (choice<1 || choice>6){
        printf("Khong hop le! Nhap lai: ");
        scanf ("%d", &choice);
        while (getchar()!= '\n');
    }
    return choice;
}

char chontieptuc(){
    char choice;
    printf("Ban co muon tiep tuc: ?\n");
    printf("Chon 'Y' de tiep tuc; Chon 'N' de ket thuc: ");
    fflush(stdin);
    scanf ("%c", &choice);
    while (getchar()!='\n');
    while (choice != 'Y' && choice!= 'N'){
        printf("Khong thoa man! Nhap lai: ");
        fflush(stdin);
        scanf ("%c", &choice);
        while(getchar()!='\n');
    }
    return choice;
}

void themsv(SV sv[], int *n, int *m){
    printf("Ban co muon nhap them sinh vien?\n");
    char tmp;
    printf("Chon 'Y': Dong y, Chon 'N' khong dong y!: \n");
    fflush(stdin);
    scanf("%c", &tmp);
    while(getchar()!='\n');
    while (tmp != 'Y' && tmp != 'N'){
        printf("Khong thoa man! Nhap lai: ");
        fflush(stdin);
        scanf ("%c", &tmp);
        while(getchar()!='\n');
    }
    if(tmp == 'Y'){
    printf("Nhap them: ");
    scanf("%d", m);
    int dem=(*n)+(*m);
    for (int i=*n; i<dem; i++){
        ++*n;
        printf("Sinh vien %d \n", i+1);
        printf("Name: ");
        fflush(stdin);
        gets(sv[i].name);
        printf("Id: ");
        fflush(stdin);
        gets(sv[i].id);
        printf("Home_town: ");
        fflush(stdin);
        gets(sv[i].hometown);
        printf("GPA: ");
        scanf("%f", &sv[i].gpa);
        while (sv[i].gpa<0||sv[i].gpa>4){
        printf("Nhap sai! Yeu cau nhap lai: ");
        scanf("%f", &sv[i].gpa);
        }
    }
    }
}

void sapxepsv(SV sv[], int *n){
    SV tg;
    for(int i = 0; i < *n - 1; i++){
    for(int j = i + 1; j < *n; j++){
        if(sv[i].gpa < sv[j].gpa){
            tg = sv[i];
            sv[i] = sv[j];
            sv[j] = tg;        
            }
        }
    }
    printf("%-4s %-27s %-12s %-18s %-4s\n","STT", "Ten", "MSSV", "QueQuan", "GPA");
    for (int i=0; i<*n; i++)
        printf("%-4d %-27s %-12s %-18s %-4.3f\n",i+1, sv[i].name, sv[i].id, sv[i].hometown, sv[i].gpa);
}

void loadmenu(){
    int c;
    printf("CHUONG TRINH QUAN LY SINH VIEN\n");
    printf("1. Nhap thong tin sinh vien\n");
    printf("2. In thong tin cac sinh vien\n");
    printf("3. Tim kiem theo ma so sinh vien\n");
    printf("4. Tim kiem theo GPA va Que Quan\n");
    printf("5. Sap xep\n");
    printf("6. Thoat\n");
    c = chonchucnang();
    switch(c){
        case 1: {
                    system("cls");
                    if (n==0)
                    nhapsv(sv, &n);
                    else
                    themsv(sv, &n, &m);
                }
                break;
        case 2: {   system("cls");
                    if (n==0)
                    printf ("Ban chua nhap sinh vien nao!\n");
                    else
                    xuatsv(sv, &n, &dtb);
                }
                break;
        case 3: {   system("cls");
                    if(n==0)
                    printf("Ban chua nhap sinh vien nao!\n");
                    else
                    timkiemmssv(sv, &n);
                }
                break;
        case 4: {   system("cls");
                    if (n==0)
                    printf("Ban chua nhap sinh vien nao!\n");
                    else
                    timkiemquequan(sv, &n, &dtb);
                }
                break;
        case 5: {
                    system("cls");
                    if (n==0)
                    printf("Ban chua nhap sinh vien nao!\n");
                    else
                    sapxepsv(sv, &n);
                }
        default:
                break;
    }
}

int main(){
    system("cls");
    char tmp;
    do{
        loadmenu();
        tmp=chontieptuc();
        system("cls");
    }while(tmp=='Y');
    return 0;
}

