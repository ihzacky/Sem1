#include <stdio.h>

double L, B, H;

int main(){

    scanf("%lf %lf %lf", &L, &B, &H); getchar();

    double lsegitiga = 0.5 * B * H;
    double lalas = (B * L) * 3;
    double res = (lsegitiga * 2) + lalas;

    printf("%.3lf\n", res);

    return 0;
}