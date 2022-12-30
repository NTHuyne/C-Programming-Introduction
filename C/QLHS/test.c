#include <stdio.h>

int main(){
int x = 0;
for (int i = 1; i <= 3; ++i) {
  int x = 0;
  x += i;
}
printf("%d\n", x);
return 0;
}