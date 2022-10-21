#include <stdio.h>
#include <string.h>

char N[10]; 
char M[100]; 
char C;

int O;

int main(){

    scanf("%s\n", N);
    scanf("%[^\n]s\n", M);
    scanf("%c", &C);
    scanf("%d", &O);

    printf("Id    : %s\n", N);
    printf("Name  : %s\n", M);
    printf("Class : %c", C);
    printf("Num   : %d\n", O);

    return 0;
}
