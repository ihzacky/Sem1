#include <stdio.h>

int T;
int N;
long long int X;
long long int Y;

long long int result = 0;

long long int jojonacci (int n, long long int x, long long int y);

int main(){

    scanf("%d", &T);
    getchar ();

    for (int i = 0; i < T; i++){
      
        scanf("%d %lld %lld", &N, &X, &Y);
        getchar();

        result = jojonacci(N, X, Y);

        printf("Case #%d: %lld\n", i+1, result);
    }
    
    return 0;
}

long long int jojonacci (int n, long long int x, long long int y){

    if (n == 0){

        return x;
    } else if (n == 1){

        return y;
    }

    return jojonacci(n-1, y, y-x);
}