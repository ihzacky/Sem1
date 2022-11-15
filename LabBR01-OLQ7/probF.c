#include <stdio.h>

int N;

int main(){

    scanf("%d", &N);
    getchar();

    int count = 0;

    int A[N*N];
    for (int i = 0; i < N*N; i++){
        
        scanf("%d", &A[i]);
        if (A[i] == 0){

            count++;
        }
        
    }
    
    printf("%d\n", count);

    return 0;
}