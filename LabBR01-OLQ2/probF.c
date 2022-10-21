#include <stdio.h>

double x;
double y;
double z;

int main(){
    scanf("%lf %lf", &x, &y);

    z = (x / y) * 100;

    printf("%.2lf%%\n", z);

    return 0;
}