#include<stdio.h>

int T;
int N;

int main(){

    scanf("%d", &T);
    for (int r = 0; r < T; r++){

        scanf("%d", &N);
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                if
                (   i == 1 || i == N ||
                    j == 1 || j == N ||
                    i == j || j == (N - i + 1)
                ){
                    printf("*");
                } else{
                    printf(" ");
                }
            }

            printf("\n");
        }
    }
    
    return 0;
}

