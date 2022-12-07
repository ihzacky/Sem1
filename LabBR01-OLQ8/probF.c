#include <stdio.h>

int N;
int M;
int Q;

int X;
int Y;
int A;

int main(){

    scanf("%d %d %d", &N, &M, &Q); getchar();
    int array[N][M];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){

            array[i][j] = 0;  
        }
    }
    
    for (int i = 0; i < Q; i++){

        scanf("%d %d %d", &X, &Y, &A); getchar();
        array[X][Y] = A;
    }
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){

            printf("%d", array[i][j]);

            if(j == M-1){
                printf("\n");
            } else {
                printf(" ");
            }       
        }
    }

    return 0;
}