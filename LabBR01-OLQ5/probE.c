#include <stdio.h>

int T;
int N;
int P;  
int Q;  

int main(){

    scanf("%d", &T);    
    for (int i = 0; i < T; i++){

        scanf("%d", &N);    
        int A[10000]; 
        
        for (int j = 0; j < N; j++){
            scanf("%d", &A[j]);    
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

    }

    

    return 0;
}