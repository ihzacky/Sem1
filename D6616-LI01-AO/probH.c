#include <stdio.h>

int a, b, c, d;
double A, B, C, D;
double res;

int main(){

    for (int i = 0; i < 3; i++){

        scanf("%d %d %d %d", &a, &b, &c, &d); getchar();

        A = (a/1) * 2;
        B = (b/2) * 4;
        C = (c/3) * 6;
        D = (d/4) * 4;

        res = A + B + C + D;

        printf("%.2lf\n", res);
    }
    
    return 0;
}