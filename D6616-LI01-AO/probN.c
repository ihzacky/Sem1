#include <stdio.h>

long int A, B;

int main(){

    scanf("%ld %ld", &A, &B); getchar();

    double temp = A - B;
    double res = (temp / A) * 100;

    printf("%.2lf%%\n", res); 

    return 0;
}