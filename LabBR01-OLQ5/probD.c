#include <stdio.h>

int N;
int A[1000];
int steps;

int main(){

    scanf("%d", &N);
    getchar();

    for (int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }
    
    int max = A[0]; 
    for (int i = 0; i < N; i++){ 
        
        if(A[i] > max){ 
            max = A[i];

        }
        if (A[i+1] == 1){
            printf("%d ", max);
            max = 0;

        }
        
    }
    
    printf("%d\n", A[N-1]);
    
    return 0;
}