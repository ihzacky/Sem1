#include<stdio.h>

int N;
int i;
int A[1000];

int main(){
       
    scanf("%d", &N);
    for (i = 0; i < N; i++){

        scanf("%d", &A[i]);
    }

    for (i = 0; i < N-1; i++){

        if (A[i+1] == 1){ //Check if the next item is 1, then print the current item
        
            printf("%d ",  A[i]);
        }
    }

    printf("%d\n", A[i]); // Print the last item
    
}