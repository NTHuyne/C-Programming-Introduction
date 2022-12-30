#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void problem1();
void problem2();
void problem3();
void problem4();

int main(int argc, char* argv[]) {
  if (argc != 2) {
    printf("Invalid parameters!\n");
    return 0;
  }
  switch (atoi(argv[1])) {
  case 1:
    problem1(); break;
  case 2:
    problem2(); break;
  case 3:
    problem3(); break;
  case 4:
    problem4(); break;
  default:
    printf("Invalid parameters!\n");
    break;
  }
}

void problem1() {
    int m, n;
    scanf ("%d %d", &m, &n);
    if (m*n==0){
        if (m==0 && n!=0) printf ("%d", n);
        if (n==0 && m!=0) printf("%d", m);
        if (m==0 && n==0) printf ("There is no greatest common divisor!\n");
    }
    else{
    while (m!=n){
        if (m>n)
            m -= n;
        else 
            n -= m;
    }
    printf ("%d\n", m);
    }
}

void problem2() {
    int plus_sign=43,
        vertical_line=124,
        dash=45, n, rn;
    scanf ("%d", &n);
    while (n<=0 || n >10){
        printf("Invalid number! Input again: ");
        scanf("%d", &n);
    }
    for (int i=1; i<=n; i++){
    for (int j=0; j<n; j++)
        printf("%c%c%c%c%c%c",plus_sign, dash, dash, dash, dash, dash);
    printf("%c", plus_sign);
    printf("\n");
    for(int k=((i-1)*n); k<(i*n); k++){
        printf("%c%5d",vertical_line,k+1);
    }
    printf("%c", vertical_line);
    printf("\n");
    }
    for(int j=0; j<n; j++)
        printf("%c%c%c%c%c%c",plus_sign, dash, dash, dash, dash, dash);
    printf("%c\n", plus_sign);
}

void problem3() {
    int N;
    double x[1000], sum=0, eps, u, tmp=0;
    scanf ("%d", &N);
    while (N<=1){
        printf("Invalid number! Input again: ");
        scanf("%d", &N);
    }
    for (int i=0; i<N; i++){
        scanf ("%lf", &x[i]);
        sum += x[i];
    }
    u = sum/N;
    for (int i=0; i<N; i++)
        tmp += (x[i]-u)*(x[i]-u);
    eps = sqrt(tmp/N);
    printf("%lf\n", eps);
}

void problem4() {
    char str[1000];
    int count;
    fflush(stdin);
    scanf("%s", str);
    while(getchar()!= '\n');
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
}

