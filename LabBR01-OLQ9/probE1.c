#include <stdio.h>
#include <string.h>

int main(){
    FILE *FP = fopen("./testdata.in", "r");
    int T;

    fscanf(FP, " %d", &T);

    char SW[T][55], OW[T][55];
    for (int t = 0; t < T; t++){

        fscanf(FP, " %[^#] # %[^\n]", SW[t], OW[t]);
    }

    int TC;
    fscanf(FP, " %d", &TC);
    for (int tc = 0; tc < TC; tc++){

        printf("Case #%d:\n", tc + 1);
        char S[111];
        fscanf(FP, " %[^\n]", S);
        char *SS = strtok(S, " ");

        while (SS){

            char F = 0;
            for (int t = 0; t < T; t++) {

                if (!strcmp(SS, SW[t])) {

                    printf("%s", OW[t]);
                    F = 1;
                    break;
                }
            }
            if (!F) {

                printf("%s", SS);
            }
            if ((SS = strtok(NULL, " "))) {

                printf(" ");
            } else {
                
                printf("\n");
            }
        }
    }
    return 0;
}