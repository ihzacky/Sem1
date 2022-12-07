#include <stdio.h>

int N;
char S[100];

int main(){

    for (int i = 0; i < 3; i++){

        scanf("%d %s", &N, &S);
        getchar();

        printf("%c%c\n", S[N-1], S[0]);
        
    }
    
    return 0;
}