#include <stdio.h>
#include <math.h>

int prime, cube, square, temp;

int isSquare();
int isCube();
int isPrime();

int main(){

    int T, A, none;

    scanf("%d",&T);
    getchar();

    for (int i = 0;i < T; i++){
        
        scanf("%d",&A);
        getchar();

        printf("Case #%d :",i+1);

        none = 1;
        if (isSquare(A)){

            printf(" square");
            none = 0;
        }
        if (isCube(A)){

            printf(" cubic");
            none = 0;
        }
        if (isPrime(A)){

            printf(" prime");
            none = 0;
        }
        if (none == 1){

            printf(" none");
        }
        printf("\n");
    }

    return 0;
}

int isSquare(int x){

    temp = sqrt(x);
    if (pow(temp,2) == x){

        square = 1;
        return 1;
    }else {

        square = 0;
        return 0;
    }
}

int isCube(int x){

    temp = cbrt(x);
    if(pow(temp, 3) == x){

        cube = 1;
        return cube;
    } else{

        cube =0;
        return cube;
    }
}

int isPrime(int x){

    if (x <= 1){

        prime = 0;
        return prime;
    }

    for(int i = 2;i <= x; i++){

        if (x == i){

            prime = 1;
            return prime;
        }
        if (x % i == 0){

            prime =0;
            return prime;
        }
    }
}