#include <stdio.h>
#include <string.h>

int T;
char X[101];
int N;

int main(){

    FILE *fp = fopen("testdata.in", "r");

    fscanf(fp, "%d", &T);
    for (int i = 0; i < T; i++){
        
        fscanf(fp, "%s", &X);
        int len = strlen(X);

        fscanf(fp, "%d\n", &N);
        char dest[N+1];
        char swap[N+1];
        int counter[N+1];

        for (int j = 0; j < N; j++){
            
            counter[j] = 0;
            fscanf(fp, "%c %c\n", &dest[j], &swap[j]);

            for (int k = 0; k < len; k++){

                if (X[k] == dest[j]){

                    X[k] = swap[j];
                    counter[j]++;
                }
            }

            // SISA CARI CARA BIAR KELUAR STRINGNYA BERDASARKAN ALPHABET
            // printf("%c %d\n", X[j], counter[j]);
        }

        for (int j = 0; j < N; j++){
            
            printf("%c %d\n", swap[j], counter[j]);
        }

        
        // printf("%s\n", X);
    }

    return 0;
}