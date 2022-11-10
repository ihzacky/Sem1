#include <stdio.h>

int T;

double A, B, C;

int main(){

    scanf("%d", &T);
    getchar();

    for (int i = 0; i < T; i++){

        scanf("%lf %lf %lf", &A, &B, &C);
        getchar();

        if ((A <= B <= C) && (A + B > C)){
            
            printf("BISA\n");
            
        } else{

            printf("TIDAK BISA\n");
        }

    }

    return 0;
}