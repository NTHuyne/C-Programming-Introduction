#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    gets(s);
    int i=0, j=0;
    while (s[j]==' ')
    j++;
    while (s[j]!= 0){
    if ((s[j]==' ') && (s[j+1]==' ') || s[j] == 0)
    j++;
    else{
    s[i]=s[j];
    i++;
    j++;
    }
    }
    s[i]=0;
    puts(s);
    return 0;
}