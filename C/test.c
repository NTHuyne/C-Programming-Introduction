#include <stdio.h>

void f(int *p) {
  *p += 20;
}
int main() {
  int z = 80;
  int *p = &z;
  f(p);
  printf ("%d", *p);
  return 0;
}