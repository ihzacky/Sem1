#include <stdio.h>

int N;
int result = 0;

int jobonacci(int n);

int main (){

    scanf("%d", &N);
    getchar();

    result = jobonacci(N);

    printf("%d\n", result);

    return 0;
}

int jobonacci(int n){

    if (n == 0){

        return 0;
    } else if (n == 1 || n == 2){

        return 1;
    } 

    return jobonacci(n-1) + jobonacci(n-3);
}