#include <stdio.h>

long int A; // declare integer A
long int B; // declare integer B

int main(){

    FILE *fp = fopen("testdata.in", "r");   // open file

    fscanf(fp, "%ld %ld", &A, &B);    // read angka dari file dan simpan di variable A dan B
    printf("%ld\n", A + B);  // print hasil dari penjumlahan A dan B

    fclose(fp); // close file

    return 0;
}