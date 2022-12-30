#include <stdio.h>

int N, M;

int main(){

    scanf("%d %d", &N, &M); getchar();

    for (int i = 0; i <= M; i++){

        printf("%d\n", N);
        N++;
    }
    

    return 0;
}