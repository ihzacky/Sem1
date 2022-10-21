#include <stdio.h>
#include <string.h>

char X[20];
char Y[20];
char Z[20];

int main(){

    scanf("%[a-z] %[a-z] %[a-z]", &X, &Y, &Z);

    printf("%s %s %s\n", Z, Y, X);

    return 0;
}