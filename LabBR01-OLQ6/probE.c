#include <stdio.h>

int T;
long long int N;

// ini soal minta kita buat ubah decimal jadi binary
// caranya dengan bagi aja angkanya teros pake angka 2, sisa dari angkanya jadi binary deh
// pake modulo

long long int tempDiv[100];
long long int tempMod[100];

int main(){

    scanf("%d", &T);
    getchar();
    for (int i = 0; i < T; i++){
    
        scanf("%lld", &N);
        getchar();

        int j;
        tempDiv[0] = N;
        for (j = 0; tempDiv[j] != 0; j++){

            tempDiv[j+1] = tempDiv[j] / 2;
            tempMod[j] = tempDiv[j] % 2;
        }

        printf("Case #%d: ", i+1);
        for (int k = 0; k < j; k++){

            // hasil mod dibaca dari belakang                
            printf("%lld", tempMod[(j - 1) - k]);
        }

        printf("\n");
    }

    return 0;
}