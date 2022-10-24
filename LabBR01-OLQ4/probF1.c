#include <stdio.h>

int T, N;

int main(){

    scanf("%d", &T);
    getchar();

    for (int i = 0; i < T; i++){
        
        scanf("%d", &N);
        getchar();

        int res[N][N];
        int matrixA[N][N], matrixB[N][N], matrixC[N][N];
        int tempRes[N][N];

        for (int j = 0; j < N; j++){

            for (int k = 0; k < N; k++){

                scanf("%d", &matrixA[j][k]);
            }
        }

        for (int j = 0; j < N; j++){

            for (int k = 0; k < N; k++){

                scanf("%d", &matrixB[j][k]);
            }
        }

        for (int j = 0; j < N; j++){

            for (int k = 0; k < N; k++){

                scanf("%d", &matrixC[j][k]);
            }
        }

        for (int j = 0; j < N; j++){
            for (int k = 0; k < N; k++){

                tempRes[j][k] = 0;
                for (int l = 0; l < N; l++){
                    tempRes[j][k] += matrixA[j][l] * matrixB[l][k];
                }
            }
        }

        for (int j = 0; j < N; j++){
            for (int k = 0; k < N; k++){

                res[j][k] = 0;
                for (int l = 0; l < N; l++){
                    res[j][k] += tempRes[j][l] * matrixC[l][k];
                }
            }
        }

        printf("Case #%d:\n", i+1);
        for (int j = 0; j < N; j++){

            for (int k = 0; k < N; k++){

                printf("%d", res[j][k]);
                if(k == N-1){

                    printf("\n");
                } else {

                printf(" ");
                
                }
            }
        }
    }
}