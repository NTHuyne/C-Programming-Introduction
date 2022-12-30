#include <stdio.h>
#include <math.h>

typedef struct{
    int num;
    int den;
} frac;

frac read_frac(void){
    frac f1;
    printf ("Input the numerator: ");
    scanf ("%d", &f1.num);
    here:
    printf ("Input the denominator (the denominator != 0 ): ");
    scanf ("%d", &f1.den);
    if (f1.den == 0)
    goto here;
    return f1;
}

void write_frac(frac f1){
    if (f1.num==0)
    printf("0\n");
    else
    printf ("%d/%d\n", f1.num, f1.den);
}

int ucln(int a, int b) {
	if(a < 0) {
		a = a*-1;
	}
	if(b < 0) {
		b *= -1;
	}
	while(a != b) {
		if(a > b) {
			a -= b;
		} else {
			b -= a;
		}
	}
	return a;
}

frac compact(frac f1){
    if (f1.num != 0){
        int u=ucln(f1.num, f1.den);
        f1.num /= u;
        f1.den /= u;
    }
    if (f1.num*f1.den >0){
        f1.num = abs(f1.num);
        f1.den = abs(f1.den);
    }
    return f1;
}

frac sum(frac f1, frac f2){
    frac f;
    f.num= f1.num*f2.den + f1.den*f2.num;
    f.den= f1.den*f2.den;
    f = compact(f);
    return f;
}

frac sub(frac f1, frac f2){
    frac f;
    f.num= f1.num*f2.den - f1.den*f2.num;
    f.den= f1.den*f2.den;
    f = compact(f);
    return f;
}

frac mul(frac f1, frac f2){
    frac f;
    f.num= f1.num*f2.num;
    f.den= f1.den*f2.den;
    f = compact(f);
    return f;
}

frac div(frac f1, frac f2){
    frac f;
    f.num= f1.num*f2.den;
    f.den= f1.den*f2.num;
    f = compact(f);
    return f;
}

int main(){
    frac f1=read_frac();
    write_frac(f1);
    frac f2=read_frac();
    write_frac(f2);
    frac tong = sum(f1,f2),
    hieu = sub(f1,f2),
    tich = mul(f1,f2);
    printf("%d/%d + %d/%d = ", f1.num, f1.den, f2.num, f2.den);
    write_frac(tong);
    printf("%d/%d - %d/%d = ", f1.num, f1.den, f2.num, f2.den);
    write_frac(hieu);
    printf("%d/%d * %d/%d = ", f1.num, f1.den, f2.num, f2.den);
    write_frac(tich);
    if (f2.num == 0)
    printf ("There doesn't exist division of two fractions!");
    else{
    frac thuong=div(f1,f2);
    printf("%d/%d : %d/%d = ", f1.num, f1.den, f2.num, f2.den);
    write_frac(thuong);
    }
    return 0;
}



