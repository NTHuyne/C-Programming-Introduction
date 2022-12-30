#include <stdio.h>
#include <string.h>

int main(){
    char s[1000], s1[1000], s2[1000];
    gets(s);
    char *cpy = s;
    int n=strlen(s)-1, k=0, k1=0;
    for (int i=0; s[i]; i++){
        s1[k]=s[i];
        if (s[i]==' ')
        break;
        k++;
    }
    while (n>=0 && s[n]!=' ') n--;
    strcpy (s2, cpy+n+1);
    puts(s1);
    puts(s2);
    return 0;
}