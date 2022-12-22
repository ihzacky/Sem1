#include <stdio.h>

int T;
long long int N, result;

int main(){

    scanf("%d", &T); getchar();
    for (int i = 0; i < T; i++){
        
        scanf("%lld", &N); getchar();

        printf("Case %d: ", i+1);
        for (int j = 0; j < N; j++){
            
            result = (j * (j+1) / 2 + 1);
            printf("%lld", result);

            if (j == N-1){

                printf("\n");                
            } else{
                printf(" ");
            }
        }
    }

    return 0;
}