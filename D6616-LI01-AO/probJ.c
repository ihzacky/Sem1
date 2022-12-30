#include <stdio.h>

double A, B;
double res;

int main(){

    scanf("%lf %lf", &A, &B); getchar();

    res = (B / A) * 100;
    printf("%.4lf%%\n", res); 

    return 0;
}