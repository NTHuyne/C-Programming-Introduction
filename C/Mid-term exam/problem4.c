#include <stdio.h>
#include <string.h>

typedef struct{
        char data;
        int count;
}mystr;

int isexist(char c,  mystr list[], const int size) {
	for(int i = 0; i < size; i++) {
		if(c == list[i].data) {
			list[i].count++;
			return 0;
		}
	}
	return 1;
}

int main(){
    char str[1000];
    char c;
    int count;
    fflush(stdin);
    scanf("%s", str);
    while(getchar()!= '\n');
    mystr list[1000];
    for (int i=0; i<strlen(str); i++){
        count = 1; 
        if(str[i]== '\0') continue;
        else{
            for (int j=i+1; j<strlen(str); j++){
                if(str[j]==str[i]){
                    count++;
                    str[j]='\0';
                }
            }
        }
        printf("%c : %d\n", str[i], count);
    }
    return 0;
}



