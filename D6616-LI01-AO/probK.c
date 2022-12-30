#include <stdio.h>
#include <math.h>

long int X;
float Y;

double res;

int main(){

    scanf("%ld %f", &X, &Y); getchar();

    res = X * pow((1 + Y / 100), 3);
    printf("%.2lf\n", res);
    
    return 0;
}