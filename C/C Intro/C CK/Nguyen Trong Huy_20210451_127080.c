#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    long ID;
    int chapter;
    char content[50];
} Question;

Question q[100];
int n, m;

void read();
void search();
void add();
void count();
void check();

void menu(){
    system("cls");
    int tmp;
    do{
    printf ("1. Read\n");
    printf ("2. Search\n");
    printf ("3. Add\n");
    printf ("4. Count\n");
    printf ("5. Check\n");
    printf ("6. Exit\n");
    printf ("Input a number to run the program: ");
    scanf ("%d", &tmp);
    while (tmp<1 || tmp > 6){
        printf ("Invalid! Input again: ");
        scanf ("%d", &tmp);
    }
    switch (tmp){
        case 1:{ 
            if (n==0)
                read();
            else
                printf("You can't back to function 1!\n");
            break;
        }
        case 2: {
            if (n==0)
                printf("You haven't input anything!\n");
            else search();
            break;
        }
        case 3: {
            if (n==0)
                printf("You haven't input anything!\n");
            else   
                add();
            break;
        }
        case 4:{
            if (n==0)
                printf("You haven't input anything!\n");
            else   
                count();
            break;
        }
        case 5:{
            if (n==0)
                printf("You haven't input anything!\n");
            else check();
            break;
        }
        default: break;
    }
    } while (tmp !=6);
}

int main(){
    menu();
    return 0;
}

void read(){
    system("cls");
    printf ("Input the number n: ");
    scanf ("%d", &n);
    while (n<1 || n>100){
        printf("Must be >0 and <=100 ! Again: "); scanf ("%d", &n);
    }
    for (int i=0; i<n; i++){
        q[i].ID = i+1;
        scanf ("%d %[^\n]", &q[i].chapter, q[i].content);
        while (q[i].chapter <1 || q[i].chapter >20){
            printf("Invalid chapter number! Input the chapter's number again: "); scanf("%d", &q[i].chapter);
        }
    }
    printf("%-4s %-10s %-10s\n", "ID", "Chapter", "Content");
    for (int i=0; i<n; i++)
    printf ("%-4ld %-10d %-c%-s%c\n", q[i].ID, q[i].chapter, 34, q[i].content, 34);
}

void search(){
    system("cls");
    long key;
    printf("Enter an ID: "); scanf("%ld", &key);
    if (key <= n && key>0){
    printf("%-4s %-10s %-10s\n", "ID", "Chapter", "Content");    
    printf ("%-4ld %-10d %-c%-s%c\n", q[key -1].ID, q[key -1].chapter, 34, q[key-1].content, 34);
    }
    else 
    printf ("ID not found\n");
}

void add(){
    system("cls");
    printf("Input the number of new questions: "); scanf("%d", &m);
    while ((m+n>100) || m<1){
        printf("Invalid! Input again: "); scanf("%d", &m);
    }
    int tg=n; 
    n += m;
    for (int i=tg; i< n; i++){
        q[i].ID = i+1;
        scanf ("%d %[^\n]", &q[i].chapter, q[i].content);
        while (q[i].chapter <1 || q[i].chapter >20){
            printf("Invalid chapter number! Input the chapter's number again: "); scanf("%d", &q[i].chapter);
        }
    }
    printf("%-4s %-10s %-10s\n", "ID", "Chapter", "Content");
    for (int i=0; i<n; i++)
    printf ("%-4ld %-10d %-c%-s%c\n", q[i].ID, q[i].chapter, 34, q[i].content, 34);    
}

void count(){
    system("cls");
    int a[21] = {0};
    for (int i=0; i<n; i++)
        a[q[i].chapter]++;
    printf ("%-10s %-10s\n", "Chap", "Count");
    for (int i=1; i<=20; i++){
        if (a[i]!=0)
            printf("%-10d %-10d\n", i, a[i]);
    }
}

void check(){
    system("cls");
    int dem=0;
    printf("%-4s %-10s %-10s\n", "ID", "Chapter", "Content");
    for (int i=0; i<n; i++){
        if (q[i].content[0]>=65 && q[i].content[0]<90){
            char *str1 = strstr(q[i].content, "*"); char *str2 = strstr(q[i].content,"\\"); char *str3 = strstr(q[i].content,"$");
            if (str1==NULL && str2==NULL && str3==NULL){
            printf ("%-4ld %-10d %-c%-s%c\n", q[i].ID, q[i].chapter, 34, q[i].content, 34);
            dem ++;
            } 
        }
    }
    if (dem==0){
        printf("No qualified questions! \n");
    }
}