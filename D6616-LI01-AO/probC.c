#include <stdio.h>

long int A, B;

int main(){

    scanf("%ld %ld", &A, &B); getchar();
    printf("%ld\n", A % B);

    return 0;
}