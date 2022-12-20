#include <stdio.h>

int T;
int n;
int count;

int fib(int n, int* count);

int main() {

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        
        scanf("%d", &n);
        
        count = 0;
        int result = fib(n, &count);

        printf("Case #%d: %d\n", i+1, count);
    }

    return 0;
}

int fib(int n, int* count) {

    (*count)++;

    if (n == 0 || n == 1) {
    
        return n;
    }

    return fib(n-1, count) + fib(n-2, count);
}