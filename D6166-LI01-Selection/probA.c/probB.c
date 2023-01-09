#include <stdio.h>

int T;
long int K, N, M;

int main (){

    scanf("%d", &T); getchar();
    for (int i = 0; i < T; i++){

        scanf("%ld %ld %ld", &K, &N, &M); getchar();

        int temp = K - N;

        printf("Case #%d: ", i+1);
        if (M >= temp){
            
            printf("yes\n");            
        } else if (M < temp){

            printf("no\n");
        }
    }

    return 0;
}