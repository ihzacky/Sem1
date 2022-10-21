#include <stdio.h>
#include <string.h>

char N[10]; // ID
char M[100]; // name
int O; // num

int main(){

    char C; // kelas

    scanf("%s", N);
    // N = getchar();

    scanf("%[^\n]s", M);
    // M = getchar();

    scanf("%c", C);
    C = getchar();

    scanf("%d", &O);


    printf("Id    : %s\n", N);
    printf("Name  : %s\n", M);
    printf("Class : %c\n", C);
    printf("Num   : %d\n", O);

    return 0;
}