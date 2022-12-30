#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    char c;
    short s;
    int i;
    unsigned int ui;
    float f;
    double d;
    long long ll;

    //sizeof
    printf("char %d\n", sizeof c);
    printf("short %d\n", sizeof s);
    printf("int %d\n", sizeof i);
    printf("unsigned int %d\n", sizeof ui);
    printf("float %d\n", sizeof f);
    printf("double %d\n", sizeof d);
    printf("long long %d\n", sizeof ll);

    //min_val and max_val of data_type
    printf("char ranges: %d to %d\n", CHAR_MIN, CHAR_MAX); 
    printf("int ranges: %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int ranges: o to %lli\n", UINT_MAX);
}