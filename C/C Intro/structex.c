#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 80
#define MAXN 40
typedef struct studentRec
{
char name[MAXLEN];
int mark;
} Student;
int main()
{
int total, i;
Student stud_list[MAXN];
printf("How many students? ");
scanf("%d", &total);
if (total > MAXN) {
printf("Number is lagre! Not enough memory.\n");
exit(1);
} 
printf("\nInput name and mark:\n");
for (i=0; i < total; i++) {
printf("Student %d: ", i+1);
scanf("%s %d", stud_list[i].name, &(stud_list[i].mark) );
}
printf("\nList of retesters:\n\n");
for (i=0; i < total; i++)
if (stud_list[i].mark < 5) {
printf("Name : %s\n", stud_list[i].name);
printf("Mark: %d\n\n", stud_list[i].mark);
}
return 0;
}
