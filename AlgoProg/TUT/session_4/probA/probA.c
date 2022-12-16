#include <stdio.h>
#include <string.h>

int N;
int T;

struct ax{

    char M[40];
    char P[40];
} read[100];

struct input_test{

    char S[40];
} input[100];

int main(){

    FILE *fp = fopen("testdata.in", "r");

    fscanf(fp, "%d\n", &N);
    for (int i = 0; i < N; i++){

        fscanf(fp, "%[^#]#%[^\n]\n", &read[i].M, &read[i].P);
    }

    fscanf(fp,"%d\n", &T);
    for (int i = 0; i < T; i++){
       
       fscanf(fp, "%s", &input[i].S);
    }
    
    fclose(fp);

    for (int i = 0; i < T; i++){

        printf("Case #%d: ", i+1);

        int found = 0;
        for (int j = 0; j < N; j++){

            if (strcmp(input[i].S, read[j].M) == 0){

                printf("%s\n", read[j].P);
                found = 1;
                break;
            }
        }

        if (found == 0){
            
            printf("N/A\n");
        }
    }

    return 0;
}