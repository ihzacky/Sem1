#include <stdio.h>

double a, b, c, d;
double x, y;


int main(){

    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    x = a * b;
    y = c - d;

    if (x == y){

        printf("True\n");
        

    } else {

        printf("False\n");
        

    }

    return 0;
}