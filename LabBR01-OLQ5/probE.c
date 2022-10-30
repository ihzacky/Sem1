#include <stdio.h>

int T;
int N;
double A[100]; // number inputted
int P;  // bibi's index
int Q;  // lili's index

int main(){

    scanf("%d", &T);    // testcase
    for (int i = 0; i < T; i++){

        scanf("%d", &N);    // how many number inputted
        for (int j = 0; j < N; j++){
            scanf("%lf", &A[j]);    // input the number
        }
        
        scanf("%d %d", &P, &Q);

        P -= 1;
        Q -= 1;
        printf("Case #%d : ", i+1);
        if (A[P] > A[Q]){
            printf("Bibi\n");
        } else if (A[Q] > A[P]){
            printf("Lili\n");
        } else if (A[P] == A[Q]){
            printf("Draw\n");
        }
        // printf("bibi= %.0lf\n", A[P]);
        // printf("lili= %.0lf\n", A[Q]);
    }

    

    return 0;
}