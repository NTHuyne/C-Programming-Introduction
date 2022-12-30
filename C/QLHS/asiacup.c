#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#include<stdlib.h>
#define MAX 20
typedef struct{
    char groupname;
    char teamname[4][MAX];
    int points[4];
    int goals[4];
} GROUP;
GROUP group[8];
int n=0, m;

char continuechoice(){
    char temp;
    printf("Do you want to contine? \n");
    printf("Insert 'Y' to continue, or 'N' to stop: ");
    fflush(stdin);
    scanf("%c", &temp);
    while (temp != 'Y' && temp != 'N'){
        printf("Invalid! Input again: ");
        scanf("%c", &temp);
    }
    return temp;
}

int menuchoice(){
    int num;
    printf("Choose a number of fuction: ");
    scanf("%d", &num);
    while (n<0 && n>6){
        printf("Invalid! Insert again: ");
        scanf("%d", &num);
    }
    return num; 
}

void ingroup(GROUP group[], int *n){
    printf("Input the numbers of groups: ");
    scanf("%d", n);
    while (*n>8 || *n<1){
        printf("Invalid number!\n");
        printf("Input the numbers of groups again: ");
        scanf("%d", n);
    };
    for (int i=0; i<*n; i++){
        here1:
        printf("Input the group name: ");
        fflush(stdin);
        scanf("%c", &group[i].groupname);
        while(!isupper(group[i].groupname)){
            printf("Invalid data!\n");
            printf("Input again: ");
            scanf("%c", &group[i].groupname);
        }
        for (int j=0; j<i; j++){
            if (group[j].groupname==group[i].groupname){
                printf("Duplicated groups'name error! \n");
                goto here1;
            }
        }
        for (int k=0; k<4; k++){
            here2:
            printf("Input the teamname: ");
            fflush(stdin);
            gets(group[i].teamname[k]);
            for(int j=0; j<i; j++)
                for(int m=0; m<4; m++){
                    if(strcmp(group[j].teamname[m],group[i].teamname[k])==0){
                    printf("Duplicated team's name error! \n");
                    goto here2;
                    }
                }
            printf("Input the point of team: ");
            scanf("%d", &group[i].points[k]);
            while (group[i].points[k]<0){
                printf ("The point of team must be positive!\n");
                printf ("Input again: ");
                scanf ("%d", &group[i].points[k]);
            }
            printf("Input the goals' difference of team: ");
            scanf("%d", &group[i].goals[k]);
        } 
    }
}

void addgroup(GROUP group[], int *n, int *m){
    printf("Insert the number of groups to add: ");
    scanf("%d", m);
    while (*m<1||*m>=8){
        printf("Invalid!\n");
        printf("Input again: ");
        scanf("%d", m);
    }
    while ((*m)+(*n)>8){
        printf("The total number of groups is not over 8!\n");
        printf("Input again");
        scanf("%d", m);
    }
    int dem=(*m)+(*n);
    for (int i=(*n); i<dem; i++){
        ++(*n);
        here1:
        printf("Input the group name: ");
        fflush(stdin);
        scanf("%c", &group[i].groupname);
        while(!isupper(group[i].groupname)){
            printf("Invalid data!\n");
            printf("Input again: ");
            scanf("%c", &group[i].groupname);
        }
        for (int j=0; j<i; j++){
            if (group[j].groupname==group[i].groupname){
                printf("Duplicated groups'name error! \n");
                goto here1;
            }
        }
        for (int k=0; k<4; k++){
            here2:
            printf("Input the teamname: ");
            fflush(stdin);
            gets(group[i].teamname[k]);
            for(int j=0; j<i; j++)
                for(int m=0; m<4; m++){
                    if(strcmp(group[j].teamname[m],group[i].teamname[k])==0){
                    printf("Duplicated team's name error! \n");
                    goto here2;
                    }
                }
            printf("Input the point of team: ");
            scanf("%d", &group[i].points[k]);
            while (group[i].points[k]<0){
                printf ("The point of team must be positive!\n");
                printf ("Input again: ");
                scanf ("%d", &group[i].points[k]);
            }
            printf("Input the goals' difference of team: ");
            scanf("%d", &group[i].goals[k]);
        } 
    }    
}

void printgroup(GROUP group[], int *n){
    for (int i=0; i<*n; i++){
        printf("GROUP %c\n", group[i].groupname);
        printf("%-12s %-8s %-10s\n", "Team", "Point", "Goal Difference");
        for (int k=0; k<4; k++)
        printf("%-12s %-8d %-10d\n", group[i].teamname[k], group[i].points[k], group[i].goals[k]);
    }
}

void findteam(GROUP group[], int *n){
    char team[MAX];
    printf("Insert the name of team to find: ");
    fflush(stdin);
    gets(team);
    int dem=0;
    for (int i=0; i<*n ; i++)
        for (int k=0; k<4; k++)
        if (strcmp(group[i].teamname[k], team)==0){
            printf("Group %c, %d Points, %d Goal difference\n", group[i].groupname, group[i].points[k], group[i].goals[k]);
            dem=1;
        }
    if (dem==0){
        printf("No result\n");
    }
}

void updateteam(GROUP group[], int *n){
    char team1[MAX], team2[MAX];
    int pt1, pt2;
    printf("Insert the update information: ");
    scanf("%s %s %d %d", team1, team2, &pt1, &pt2);
    int temp1, temp2, t1, t2;
    for (int i=0; i<*n; i++){
        for (int k=0; k<4; k++){
            if(strcmp(group[i].teamname[k], team1)==0){
                temp1=i;
                t1=k;
            }
            if(strcmp(group[i].teamname[k], team2)==0){
                temp2=i;
                t2=k;
            }
        }
    }
    if (temp1!=temp2)
        printf("Different group!\n");
    else{
        if (pt1>pt2)
        group[temp1].points[t1] += 3;
        else if (pt1<pt2)
        group[temp1].points[t2] +=3;
        else{
        group[temp1].points[t1] += 1;
        group[temp1].points[t2] += 2;
        }
    }
}

void sortteam(GROUP group[], int *n){
    int temp1, temp2;
    char temp[MAX];
    for (int i=0; i<*n; i++)
        for (int k=0; k<3; k++){
            for (int j=k+1;j<4; j++){
                if (group[i].goals[k]<group[i].goals[j]){
                    strcpy(temp, group[i].teamname[k]);
                    strcpy(group[i].teamname[k], group[i].teamname[j]);
                    strcpy(group[i].teamname[j], temp);
                    temp1=group[i].points[k];
                    group[i].points[k]=group[i].points[j];
                    group[i].points[j]=temp1;
                    temp2=group[i].goals[k];
                    group[i].goals[k]=group[i].goals[j];
                    group[i].goals[j]=temp2; 
                }
                else if (group[i].goals[k]==group[i].goals[j])
                    if(group[i].teamname[k][0]>group[i].teamname[j][0]){
                    strcpy(temp, group[i].teamname[k]);
                    strcpy(group[i].teamname[k], group[i].teamname[j]);
                    strcpy(group[i].teamname[j], temp);  
                    temp1=group[i].points[k];
                    group[i].points[k]=group[i].points[j];
                    group[i].points[j]=temp1;             
                    temp2=group[i].goals[k];
                    group[i].goals[k]=group[i].goals[j];
                    group[i].goals[j]=temp2;                                             
                }
            } 
        } 
}

void sortgroup(GROUP group[], int *n){
    GROUP tmp;
    for (int i=0; i<(*n)-1; i++)
        for (int k=i+1; k<*n; k++)
            if (group[i].groupname> group[k].groupname){
            tmp = group[i];
            group[i] = group[k];
            group[k] = tmp;
            }   
}

void loadmenu(){
    int c;
    printf("U23 ASIA CUP MANAGEMENT PROGRAM\n");
    printf("1. ADD GROUPS\n");
    printf("2. PRINT ALL GROUPS\n");
    printf("3. FIND INFORMATION OF A TEAM\n");
    printf("4. UPDATE TEAM's INFORMATION\n");
    printf("5. SORT\n");
    printf("6. EXIT\n");
    c = menuchoice();
    switch(c){
        case 1: { system("cls");
                if (n==0)
                ingroup(group, &n);
                else
                addgroup(group, &n, &m);
                break;
                }
        case 2: { system("cls");
                if (n==0)
                printf("You haven't input any team!\n");
                else
                printgroup(group, &n);
                }
                break;
        case 3: { system("cls");
                if (n==0)
                printf("You haven't input any team!\n");
                else
                findteam(group, &n);
                }
                break;
        case 4: { system("cls");
                if (n==0)
                printf("You haven't input any team!\n");
                else
                updateteam(group, &n);
                }
                break;
        case 5: { system("cls");
                if (n==0)
                printf("You haven't input any team!\n");
                else{
                sortgroup(group, &n);
                sortteam(group, &n);
                printgroup(group, &n);
                }
                }
                break;
        default:
        break;
    }
}

int main(){
    system("cls");
    char tmp;
    do{
        loadmenu();
        tmp=continuechoice();
        system("cls");
    } while(tmp == 'Y');
    return 0;
}
