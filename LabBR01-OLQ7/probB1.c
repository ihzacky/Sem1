#include <stdio.h>

int T;
long long int X;

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

        printf("Case #%d : ", i+1);
        int prime = 1;
        for (int j = 2; j <= X / 2; ++j){

            if (X % j == 0) {
                prime = 0;
                break;
            }
        }

        if (prime == 1){

            printf("prime\n");

        }else if (X % 3 == 0){
            
            int a;
            for (a = 0; X != 1; a++){
                // printf("before divided%d\n", X);
                X /= 3;
                // printf("after divided%d\n", X);
            }
            
            if (a == 2){

                printf("square\n");
            }else if (a == 3){

                printf("cubic\n");
            }else if (a == 6 ){

                printf("square cubic\n");
            }else{

                printf("none\n");
            }
            
        }else if (X % 2 == 0){

            int a;
            for (a = 0; X != 1; a++){
                
                X /= 2;
            }
            
            if (a == 2){

                printf("square\n");
            }else if (a == 3){

                printf("cubic\n");
            }else if (a == 6 ){

                printf("square cubic\n");
            }else{

                printf("none\n");
            }

        }

    }
    
    return 0;
}

