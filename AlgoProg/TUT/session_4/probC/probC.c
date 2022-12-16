#include <stdio.h>

long int A;
long int B;

int main(){

    FILE *fp = fopen("testdata.in", "r");

    fscanf(fp, "%d %d", &A, &B);
    printf("%d\n", A + B);

    return 0;
}