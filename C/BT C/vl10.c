#include<stdio.h>
#include<string.h>

int main(){
char n[1001];
scanf("%s",n);
printf("%ld\n",(n[0]=='-')?(strlen(n)-1):strlen(n));
return 0;
}