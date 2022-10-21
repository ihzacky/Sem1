#include <stdio.h>
#include <string.h>

char N[101];
int A[9];
int U[101];

int main(){
    
    scanf("%[^\n]s", &N);
    scanf("%s %s", &A, &U);

    printf("Name: %s\n", N);
    printf("NIS: %s\n", A);
    printf("Age: %s\n", U);

    return 0;
}