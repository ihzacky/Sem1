#include <stdio.h>

double x, y, z;
double x1, y1, z1;

int main(){

    scanf("%lf %lf %lf", &x, &y, &z);

    x1 = x * 0.2;
    y1 = y * 0.3;
    z1 = z * 0.5;

    printf("%.2lf\n", x1 + y1 + z1);

    return 0;
}   