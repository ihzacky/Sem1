#include <stdio.h>

int T; 
int N[100]; 
int A[100]; 
int B[100]; 
int sisa[100][100]; 

int main(){

    scanf("%d", &T); 

    for (int i = 0; i < T; i++){

        scanf("%d", &N[i]);
        for (int j = 0; j < N[i]; j++){ 

            scanf("%d", &A[j]);

        }
        
        for (int k = 0; k < N[i]; k++){ 
           
           scanf("%d", &B[k]);
           
        }

        for (int l = 0; l < N[i]; l++){

            sisa[i][l] = A[l] - B[l];

        }

    }

    for (int i = 0; i < T; i++){

        printf("Case #%d: ", i+1);
        for (int p = 0; p < N[i]; p++){

            printf("%d", sisa[i][p]);

            if(p == N[i]-1){
                printf("\n");
            } else {
                printf(" ");
            }

        }
    }

    return 0;
}