#include <stdio.h>

long int X, Y;

int main(){

    for (int i = 0; i < 4; i++){
        
        scanf("%ld %ld", &X, &Y); getchar();
        printf("%ld\n", X * Y);
    }

    return 0;
}