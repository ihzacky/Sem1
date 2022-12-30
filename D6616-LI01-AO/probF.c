#include <stdio.h>

long int A, B;

int main(){

    for (int i = 0; i < 3; i++){
        
        scanf("%ld + %ld =", &A, &B);

        printf("%ld\n", A+B);
    }

    return 0;
}