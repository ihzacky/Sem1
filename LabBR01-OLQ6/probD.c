#include <stdio.h>

int T;
int N;
int A, B, C, D;

// ini disuruh cari fpb dari 4 angka

int main(){

    scanf("%d", &T);
    int result[T];

    for (int i = 0; i < T; i++){
       
        scanf("%d", &N);
        getchar();

        scanf("%d %d %d %d", &A, &B, &C, &D);
        getchar();

        int count = 0;
        for (int j = 1; j <= N; j++){
        
        if (j%A == 0 || j%B == 0 || j%C == 0 || j%D == 0){

            count++;
        }

       }
       
        result[i] = count;
    }
    
    for (int i = 0; i < T; i++){

        printf("Case #%d: %d\n", i+1, result[i]);
    }

    return 0;
}