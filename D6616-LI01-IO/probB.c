#include <stdio.h>

int N;
int M;

int main(){

    scanf("%d %d", &N, &M);

    while(M > 0){
        printf("%d\n", N);
        M--;
        N++;
    }

    return 0;
}