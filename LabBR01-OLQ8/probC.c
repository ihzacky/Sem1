#include <stdio.h>

int N; // ordo

int main(){

    scanf("%d", &N);
    getchar();
    
    char photo[N][N];
    char printed[N][N];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){

            scanf("%c", &photo[i][j]);
        }

        getchar();
    }
    
    for (int i = N - 1; i >= 0; i--){
        for (int j = N - 1; j >= 0; j--){

            printf("%c", photo[i][j]);
        }
        printf("\n");
    }

    return 0;
}