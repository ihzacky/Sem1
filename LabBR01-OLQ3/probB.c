#include <stdio.h>

double x, y, z; 
double x1, y1, z1; 
double x2, y2, z2; 
double x3, y3, z3; 

int buang;

int main(){

    scanf("%lf", &buang);    
    scanf("%lf", &x);
    scanf("%lf", &y);
    scanf("%lf", &z);


    x1 = (0.8) * x;
    y1 = (0.8) * y;
    z1 = (0.8) * z;

    y2 = (1.8) * y + 32;
    z2 = (1.8) * z + 32;
    x2 = (1.8) * x + 32;

    x3 = x + 273;
    y3 = y + 273;
    z3 = z + 273;

    printf("%.2lf %.2lf %.2lf\n", x1, x2, x3);
    printf("%.2lf %.2lf %.2lf\n", y1, y2, y3);
    printf("%.2lf %.2lf %.2lf\n", z1, z2, z3);

    return 0;
}