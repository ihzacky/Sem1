#include <stdio.h>

// float N,; // persentase diskon
// float P; // harga setelah didiskon

float A, B;
float C, D;
float E, F;
float G, H;


// float x;

// tujuannya disini untuk menentukan harga sebelum didiskon

int main(){

    // scanf("%f %f", &N, &P);

    scanf("%f %f", &A, &B);
    scanf("%f %f", &C, &D);
    scanf("%f %f", &E, &F);
    scanf("%f %f", &G, &H);


    // x = 100 - N;

    // float S; // harga sebelum diskon; ini yg dicari
    // S = (100 / x) * P;

    // p = (100 / (100 - B)) * A;
    // q = (100 / (100 - D)) * C;
    // r = (100 / (100 - F)) * E;
    // s = (100 / (100 - H)) * G;


    printf("$%.2f\n", (100 / (100 - A)) * B);
    printf("$%.2f\n", (100 / (100 - C)) * D);
    printf("$%.2f\n", (100 / (100 - E)) * F);
    printf("$%.2f\n", (100 / (100 - G)) * H);

    return 0;
}