#include <stdio.h>
#include <stdbool.h>

bool checkyear(int year){
    if(year<=0 || year>100000)
    return true;
    return false;
}

bool checkmonth(int month){
    if(month>12 || month <1)
    return true;
    return false;
}

int namnhuan(int month, int year){
    if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
    return 29;
    else
    return 28;
}

int main(){
    int month, year;
    scanf("%d %d",&month, &year);
    if(checkyear(year)||checkmonth(month))
    printf("INVALID");
    else{
    switch(month){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    printf("31");
    break;
    case 4: case 6: case 9: case 11:
    printf("30");
    break;
    case 2:
    printf("%d", namnhuan(month, year));
    break;
    }
    }
    return 0;
}