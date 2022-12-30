#include <stdio.h>
#include <string.h>

char *my_strcpy(char *dest, char *source){
    char *p=dest;
    while (*source){
        *p=*source;
        ++p;
        ++source;
    }
    *p=0;
    return dest;
}

char *my_strcat(char *dest, char *source){
    char *start=dest;
    while (*start!=0)
    start ++;
    while (*source!=0){
        *start=*source;
        start++;
        source++;
    }
    *start=0;
    return dest;
}

int my_strlen(char *s){
    int len = 0;
    while (*s!=0){
        s++;
        len++;
    }
    return len;
}

int my_strcmp(char *s1, char *s2){
    while(1){
        if(*s1>*s2)
        return 1;
        else if (*s1<*s2)
        return -1;
        else if (*s1==0)
        break;
        s1++;
        s2++;
    }
    return 0;
}




