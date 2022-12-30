
#include <stdio.h>
#include <string.h>
void f(char *s) {
  s[0] = 'p';
}
int main() {
struct str {
  char *s;
};
char s[] = "abc";
struct str s1 = {s};
struct str s2 = s1;
s[1] = 'B';
s1.s[0] = 'A';
s2.s[2] = 'C';
printf("%s", s2.s);
return 0;
}