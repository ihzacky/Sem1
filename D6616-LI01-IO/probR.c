#include <stdio.h>
#include <string.h>

char N[15]; 
char M[105]; 
char C[26];
double O; 

int main(){


    scanf("%s\n", N);
    scanf("%[^\n]s", M);
    scanf("%s", C);
    scanf("%lf", &O);

    printf("Id    : %s\n", N);
    printf("Name  : %s\n", M);
    printf("Class : %s\n", C);
    printf("Num   : %.0lf\n", O);

    return 0;
}