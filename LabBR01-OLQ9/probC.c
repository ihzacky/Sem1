#include <stdio.h>

int T;
long int N;

int main (){

    scanf("%d", &T); getchar();
    for (int i = 0; i < T; i++){

        scanf("%ld", &N); getchar();

        int A[N];
        for (int j = 0; j < N; j++){

            scanf("%d", &A[j]); getchar();
        }
        
        int count = 0;
        int max = A[0];
        for (int p = 1; p < N; p++){

            if (A[p] > max){

                max = A[p];
            } else if (A[p] == max){

                count++;
            }
        }

        printf("Case #%d: %d\n", i+1, count+1);
    }

    return 0;
}