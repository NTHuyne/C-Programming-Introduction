#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

typedef struct{
    char id[10];
    char name[20];
    double price;
    int quantity;
    double money;
} GOODS;

typedef struct{
    char id[10];    
    int tcode;
    int quantity;
} TRANS;

int main(){
    GOODS good[MAX];
    TRANS tran[MAX];
    char line[100];
    int n, m=0;
    float total = 0;
    FILE *goods, *trans;
    goods = fopen("goods.txt", "r");
    trans = fopen("transaction.txt", "r");
    fscanf(goods, "%d", &n);
    for (int i=0; i<n; i++){
        fscanf(goods, "%s", good[i].id);
        fscanf(goods, "%s", good[i].name);
        fscanf(goods, "%lf", &good[i].price);
        good[i].quantity = 0;
    }
    while (!feof(trans)){
        fscanf(trans, "%d %s %d", &tran[m].tcode, tran[m].id, &tran[m].quantity);
        m++;
    }
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
    fclose(goods);
    fclose(trans);
    return 0;
}