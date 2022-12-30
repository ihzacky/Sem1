#include <stdio.h>

int T, a, b, c, d;
double A, B, C, D;
double res;

int main(){

    scanf("%d", &T);
    for (int i = 0; i < T; i++){

        scanf("%d %d %d %d", &a, &b, &c, &d); getchar();

        A = (a/1) * 2;
        B = (b/2) * 4;
        C = (c/3) * 4;
        D = (d/4) * 2;

        res = A + B + C + D;

        printf("%.2lf\n", res);
    }
    
    return 0;
}