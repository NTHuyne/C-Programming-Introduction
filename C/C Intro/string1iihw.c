#include <stdio.h>
#include <string.h>

int main(){
    char s[1000], s1[1000];
    gets(s);
    int k=0;
    int n=strlen(s)-1;
    for (int i=n; s[i]; --i){
    s1[k]=s[i];
    k++;
    }
    puts(s1);
    return 0;
}