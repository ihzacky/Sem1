#include <stdio.h>

int T, N, M, X;
int doors;

int main(){

    scanf("%d", &T);
        
    for (int i = 0; i < T; i++){
        scanf("%d %d", &N, &M);

        
        int doors[N+1];

        // set semua pintu unlocked (1)
        for (int j = 1; j <= N; j++){
            
            doors[j] = 1;
        }

        for (int j = 1; j <= M; j++){
            scanf("%d", &X);

            for (int k = X; k <= N; k += X){

                doors[k] = !doors[k]; // status lock jadiin 1 ke -1 atau 0 untuk locked atau unlocked
            }
        }

        printf("Case #%d: ", i + 1);

        int numUnlocked = 0;
        for (int j = 1; j <= N; j++){
            if (doors[j] == 1){

                printf("%d", j);
                numUnlocked++;

                if(j == N-1){
                    printf("\n");
                } else {
                    printf(" ");
                }
            }
        }

        if (numUnlocked == 0){

            printf("No room left!\n");
        }
    }

    return 0;
}