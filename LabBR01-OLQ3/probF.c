#include <stdio.h>

double buang;
double a, b;
double c, d;
double e, f;

double a1, c1, e1;

int main(){

    scanf("%lf", &buang);
    scanf("%lf %lf", &a, &b);
    scanf("%lf %lf", &c, &d);
    scanf("%lf %lf", &e, &f);

    a1 = a / 100;
    c1 = c / 100;
    e1 = e / 100;

    printf("%.2lf\n", a1 * b);
    printf("%.2lf\n", c1 * d);
    printf("%.2lf\n", e1 * f);

    return 0;
}