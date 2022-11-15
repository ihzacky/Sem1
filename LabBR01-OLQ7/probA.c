#include <stdio.h>

int N; 
int row, col;

int main(){

    scanf("%d", &N);
    getchar();
    int A[N][N];

    for (int i = 0; i < N; i++){

        for (int j = 0; j < N; j++){

            scanf("%d", &A[i][j]);
            getchar();
        }
        
    }

    for (int i = 0; i < N; i++){

        for (int j = 0; j < N; j++){

            if (A[i][j] == A[i][j+1]){

                row++;
            }

            if (A[j][i] == A[j+1][i]){

                col++;
            }
        }
        
    }

    if (row == 0 && col == 0){

        printf("Yay\n");
    } else{

        printf("Nay\n");
    }

    return 0;
}