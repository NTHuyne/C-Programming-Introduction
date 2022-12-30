#include <stdio.h>

int main(){
int a[5][5], c[5], D, Dx, Dy;
float x,y;
printf ("a11*x + a12*y = c1\n");
printf ("a12*x + a12*y = c2\n");
for (int i=1; i<=2; i++){
    printf ("Nhap he so cua phuong trinh thu %d: \n", i);
    for (int j=1; j<=2; j++){
        scanf ("%d", &a[i][j]);
    }
}
for (int i=1; i<=2; i++){
    printf ("Nhap he so tu do cua phuong trinh thu %d: ", i);
    scanf ("%d", &c[i]);
}
D = a[1][1]*a[2][2] - a[1][2]*a[2][1];
Dx = a[1][2]*c[2] - c[1]*a[2][2];
Dy = a[1][1]*c[2] - a[2][1]*c[1];
if (D==0)
    if(Dx==Dy)
        printf("Phuong trinh co vo so nghiem\n");
    else
        printf("Phuong trinh vo nghiem\n");
else{
    x = Dx/D;
    y = Dy/D;
    printf("Nghiem cua he phuong trinh la %.2f va %.2f\n ", x, y);
}
return 0;
}