#include <stdio.h>

double N;
double M;
double X[100000]; // bibi's weapon attack power
double Y[100000]; // dragon's weapon attack power

int main(){

    scanf("%lf %lf", &N, &M);

    for (int i = 0; i < N; i++){    // loop bibi's weapon power input
        scanf("%lf", &X[i]);
        getchar();
    }
    
    for (int i = 0; i < M; i++){    // loop dragon's weapon power input
        scanf("%lf", &Y[i]);
        getchar();
    }
    
    int xMax = X[0];
    for (int i = 0; i < N; i++){ 
        
        if(X[i] > xMax){
            xMax = X[i];
        }

    }

    int yMax = Y[0];
    for (int i = 0; i < M; i++){ 
        
        if(Y[i] > yMax){
            yMax = Y[i];
        }

    }

    // if (xMax > yMax){
    //     printf("The dark secret was true\n");
    // } else if (yMax > xMax){
    //     printf("Secret debunked\n");
    // }

    if (xMax > yMax){
        printf("The dark secret was true\n");
    } else {
        printf("Secret debunked\n");
    }


    // printf("xMax: %d\n", xMax);
    // for (int i = 0; i < N; i++)
    // {
    //     printf("N%d=%d\n", i, X[i]);
    // }
    
    // printf("yMax: %d\n", yMax);
    // for (int i = 0; i < M; i++)
    // {
    //     printf("Y%d=%d\n", i, Y[i]);
    // }

    return 0;
}
