#include <stdio.h>

int T;
long long int X;

int counter = 0;
int *c = &counter;

void numCheck();
int recursive();
/*
    prime = 2,3,5,7,11,13,...
    square = 2x2
    cubic = 2x2x2

    none

*/
int main(){

    scanf("%d", &T);
    getchar();

    for (int i = 0; i < T; i++){

        scanf("%lld", &X);
        numCheck(X);

    }
    
    return 0;
}

void numCheck(int A){


    if (A == 2 || A % 2 == 1){

        printf("prime\n");
    }else if (A % 3 == 0){

        recursive(A, 3, *c);
        printf("%d", counter);
    }else if (A % 2 == 0){

        recursive(A, 2, *c);
        printf("%d", counter);
    } else{
        
        printf("none\n");
    }
    

}

int recursive(int x, int divider, int *c){

    if (x / divider != 1){

        printf("ashiap\n");
        return recursive(x / divider, divider, *c);
    }
    
    *c++;
}