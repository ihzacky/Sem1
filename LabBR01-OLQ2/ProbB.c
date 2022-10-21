#include <stdio.h>

double A, B;
double C, D;
double E, F;
double G, H;

double p, q, r, s;


int main(){

    scanf("%lf %lf", &A, &B);
    scanf("%lf %lf", &C, &D);
    scanf("%lf %lf", &E, &F);
    scanf("%lf %lf", &G, &H);

    p = (100 / (100 - A)) * B;
    q = (100 / (100 - C)) * D;
    r = (100 / (100 - E)) * F;
    s = (100 / (100 - G)) * H;

    printf("$%.2lf\n", p);
    printf("$%.2lf\n", q);
    printf("$%.2lf\n", r);
    printf("$%.2lf\n", s);

    return 0;
}