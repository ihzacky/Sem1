#include <stdio.h>

int A;
int plus;
int minus;


int main(){

    scanf("%d", &A);

    plus = A + A;
    minus = plus - 1;

    printf("%d plus %d is %d\n", A, A, plus);
    
    printf("minus one is %d\n", minus);

    return 0;
}