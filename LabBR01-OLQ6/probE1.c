#include <stdio.h>
#include <string.h>

int T;
int N;

// ini soal minta kita buat ubah decimal jadi binary
// caranya dengan bagi aja angkanya teros pake angka 2 sisa dari angkanya jadi binary deh
// pake modulo

int tempDiv[100];
int tempMod[100];

char modRes[100];
int len;

int main(){

    scanf("%d", &T);
    getchar();
    for (int i = 0; i < T; i++){
    
        scanf("%d", &N);
        getchar();

        tempDiv[0] = N / 2;
        for (int j = 0; tempDiv[j] != 0; j++){ // the fuck wrong with this
            
            tempDiv[j+1] = tempDiv[j] / 2;
            tempMod[j] = tempDiv[j] % 2;

        }

        // int j = 0;
        // while (N / 2 != 0){
            
        //     tempDiv[j] = N / 2;
        //     tempMod[j] = tempDiv[j] % 2;
        //     j++;
 
        // }
        // strcpy(modRes, tempMod);

        // len = strlen(tempMod);
        // printf("%d\n", len);

        // printf("Case #%d: ", i+1);
        // for (int k = 0; k < len ; k++){
        //     printf("R");
        //     printf("%c", tempMod[k]);
        // }


        int k = 0;
        while (tempMod[k] != '\0'){

            printf("R");
            printf("%d", tempMod[k]);
            k++;
        }
        
        printf("OUT");

        printf("\n");
    }

    
    

    return 0;
}