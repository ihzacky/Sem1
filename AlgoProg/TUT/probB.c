#include <stdio.h>

int T; 
int N; 
int A[100]; 
int B[100]; 
int sisa[100]; 

int main(){

    scanf("%d", &T); 

    for (int i = 0; i < T; i++){

        scanf("%d", &N);
        for (int j = 0; j < N; j++){ 

            scanf("%d", &A[j]);

        }
        
        for (int k = 0; k < N; k++){ 
           
           scanf("%d", &B[k]);
           
        }

        for (int l = 0; l < N; l++){

            sisa[l] = A[l] - B[l];

        }
        
        printf("Case #%d: ", i+1);
        for (int p = 0; p < N; p++){

            printf("%d", sisa[p]);

            if(p == N-1){
                printf("\n");
            } else {
                printf(" ");
            }

        }

    }

    return 0;
}