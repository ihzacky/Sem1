#include <stdio.h>

long long int T; 
long long int N; 
long long int A, B; 
char binary[10001];

long int lightning;

int main(){

    FILE *fp = fopen("testdata.in", "r");

    fscanf(fp, "%lld", &T);
    for (long long int i = 0; i < T; i++){

        fscanf(fp, "%lld %lld %lld", &N, &A, &B);
        fscanf(fp, "%s", &binary);

        int counter, j ,k;
        for (j = 0; j < N; j++){
            
            if (binary[j] == '1'){

                counter = 0; 
                for (k = j; k < N && binary[k] == '1'; k++){
                    
                    counter++;
                }
                if (counter >= A && counter <= B){

                    lightning++;
                }

                j = k;
            }
            
        }

        printf("Case #%lld: %ld\n", i+1, lightning);
    }
    
    fclose(fp);

    return 0;
}