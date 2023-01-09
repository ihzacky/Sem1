#include <stdio.h>

long long a, b, c, d;

int main (){

    scanf("%lld %lld %lld %lld", &a, &b, &c, &d); getchar();

    int LHS = a * b;
    int RHS = c + d;

    if (LHS > RHS){

        printf("True\n");        
    } else{
        
        printf("False\n");
    }

    return 0;
}