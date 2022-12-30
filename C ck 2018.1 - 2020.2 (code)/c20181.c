#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void frequency();
void fibonacci();
void password();
void date();

//Menu
void loadmenu(){
    int c; char tmp;
    do{
    system("cls");
    printf ("1. Frequency\n");
    printf ("2. Fibonacci\n");
    printf ("3. Password\n");
    printf ("4. Date\n");
    printf ("5. Exit\n");
    printf ("Choose a function number to continue: ");
    scanf ("%d", &c);
    while (c<1 || c>5){
        printf ("Invalid number! Input again: ");
        scanf ("%d", &c);
    }
    system("cls");
    switch (c){
        case 1: frequency();
        break;
        case 2: fibonacci();
        break;
        case 3: password();
        break;
        case 4: date();
        break;
        default: break;
    }
    printf ("Do you want to continue (Y/N)?: ");
    fflush(stdin);
    scanf("%c", &tmp);
    while (tmp != 'Y' && tmp != 'N'){
        printf ("Invalid value! Input again: ");
        scanf ("%c", &tmp);
    }
    }while (tmp == 'Y');
}

//Hàm main
int main(){
    loadmenu();
    return 0;
}

//Bài frequency
void frequency(){
    int a[20], tmp[10000]={0}, n;
    printf ("Input the number of elements in array: ");
    scanf ("%d", &n);
    for (int i=0; i<n; i++){
        scanf ("%d", &a[i]);
        tmp[a[i]]++;
    }
    for (int i=0; i<10000; i++){
        if (tmp[i]!=0)
        printf ("%d %d\n", i, tmp[i]);
    }
}

//Bài Fibinacci
void fibonacci(){
    int n;
    do{
        scanf ("%d", &n);
    }while(n>30 || n<1);
    int a1=0, a2=1, tmp;
    if (n==1)
        printf("%d", a1);
    if (n==2)
        printf("%d", a2);
    while (n>2){
        tmp = a2;
        a2 = a2 + a1;
        a1= tmp;
        n--;
    }
    printf("%d\n", a2);
}

//Bài Password
void password(){
    char pass[20];
    fflush(stdin);
    gets(pass);
    int k=strlen(pass), dem1=0, dem2=0, dem3=0, tong;
    for (int i=0; i<k; i++){
        for (int j= 'a'; j<='z'; j++)
            if (pass[i]==j)
            dem1=1;
        for (int p='A'; p<='Z'; p++)
            if (pass[i]==p)
            dem2=1;
        for (int q='0'; q<='9'; q++)
            if (pass[i]==q)
            dem3=1;
    }
    tong = dem1 + dem2 + dem3;
    if (tong == 3)
        printf("True\n");
        else
        printf ("False\n");
}

//Bài Date
void date(){
    //*Syntax
}

