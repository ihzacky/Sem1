#include <stdio.h>

int ph, m, pu;

int main(){

    scanf("%d %d %d", &ph, &m, &pu); getchar();
    
    double a = ph * 0.2;
    double b = m * 0.3;
    double c = pu * 0.5;

    double res = a + b + c;

    printf("%.2lf\n", res);

    return 0;
}