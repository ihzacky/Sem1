#include <stdio.h>
#include <string.h>

int T;
char X[101];
int N;

char dest[100];
char swap[100];

int counter[100];

int main(){

    scanf("%d", &T); getchar();
    for (int i = 0; i < T; i++){
        
        scanf("%s", &X); getchar();
        int len = strlen(X);

        scanf("%d", &N); getchar();
        for (int j = 0; j < N; j++){
            
            scanf("%c %c", &dest[0], &swap[0]); getchar();

            for (int k = 0; k < len; k++){

                if (X[k] == dest[0]){

                    X[k] = swap[0];
                    counter[j]++;
                }
            }

            // SISA CARI CARA BIAR KELUAR STRINGNYA BERDASARKAN ALPHABET
            printf("%c %d\n", X[j], counter[j]);
        }

        printf("%s\n", X);
    }

    return 0;
}