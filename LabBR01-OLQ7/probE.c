#include <stdio.h>

int N;
int happy;
int nothappy;

int main(){

    scanf("%d", &N);
    getchar();
    int A[N];
    
    for (int i = 0; i < N; i++){

        scanf("%lf", &A[i]);
        getchar();
    }
    
    for (int i = 0; i < N; i++){
        
        for (int j = i + 1; j < N; j++){

            if (A[i] == A[j]){

                nothappy++;
                // printf("[i=%d] == [j=%d]\n", i, j);
            }
            
        }

    }

    happy = N - nothappy;

    // printf("%d\n", N);    
    // printf("%d\n", nothappy);    
    printf("%d\n", happy);    

    return 0;
}