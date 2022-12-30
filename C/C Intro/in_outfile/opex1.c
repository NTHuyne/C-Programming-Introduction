#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int n, m=0; double total;
typedef struct{
    char id[10];
    char name[20];
    double price;
    int quantity;
    int code;
    double money;
} GOODS;
typedef struct{
    char id[10];    
    int tcode;
    int quantity;
} TRANS;
GOODS good[MAX], newgood[MAX]; TRANS tran[MAX], newtran[MAX];
void readgoods(){
    FILE *goods;
    if ((goods = fopen("goods.txt", "r")) == NULL){
        printf("Error! Opening file\n");
        exit(1);
    }
    fscanf(goods, "%d", &n);
    for (int i=0; i<n; i++){
        fscanf(goods, "%s", good[i].id);
        fscanf(goods, "%s", good[i].name);
        fscanf(goods, "%lf", &good[i].price);
        good[i].quantity = 0;
    }
    fclose(goods);
}

void readtrans(){
    FILE *trans;
    if ((trans = fopen("transaction.txt", "r")) == NULL){
        printf("Error! Opening file\n");
        exit(1);
    }  
    while (!feof(trans)){
        fscanf(trans, "%d %s %d", &tran[m].tcode, tran[m].id, &tran[m].quantity);
        m++;
    } 
    fclose(trans);
}

void printgoods(){
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            if (strcmp(good[i].id, tran[j].id)==0)
                good[i].quantity += tran[j].quantity;
    printf("%-10s %-15s %-10s %-10s %-10s\n", "TCode", "Name of good", "Quantity", "Price", "Money");
    for (int i=0; i<n; i++)
    if (good[i].quantity != 0){
        good[i].money = good[i].quantity * good[i].price;
        total += good[i].money;
        printf("%-10s %-15s %-10d %-10.1lf %-10.1lf\n", good[i].id, good[i].name, good[i].quantity, good[i].price, good[i].money);
    }
    printf("%47s: %.1lf\n", "Total", total);
}

void newgoods(){
    freopen("newgood.txt", "w", stdout);
    int n;
    scanf ("%d", &n);
    printf("%d\n", n);
    for (int i=0; i<n; i++){
        scanf("%s", newgood[i].id);
        scanf("%s", newgood[i].name);
        scanf("%lf", &newgood[i].price);
        printf("%s\n", newgood[i].id);
        printf("%s\n", newgood[i].name);
        printf("%lf\n", newgood[i].price);
    }   
}

void newtrans(){
    freopen("newtrans.txt","w", stdout);
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d %s %d", &newtran[i].tcode, newtran[i].id, &newtran[i].quantity);
        printf("%d %s %d\n", newtran[i].tcode, newtran[i].id, newtran[i].quantity);
    }
}

void convert(char *myfile){
    FILE *f;
    f=fopen(myfile, "r");
    
}

int main(){
    return 0;
}
