#include <stdio.h>

int T;
int X[500];
long int arrayNum[1000][1000];
int sum[1000][1000];

int main(){

    scanf("%d", &T); // input testcase loop

    /*------ TESTCASE LOOP ------*/
    for (int i = 0; i < T; i++){

        /*-------- INPUT --------*/
        scanf("%d", &X[i]);

        for (int j = 0; j < X[i]; j++){
            for (int k = 0; k < X[i]; k++){

                scanf("%d", &arrayNum[j][k]);
                
            }
        }

        /*------- PROCESS -------*/
        for (int col = 0; col < X[i]; col++){

            sum[i][col] = 0;
            for (int row = 0; row < X[i]; row++){
                
                sum[i][col] += arrayNum[row][col];
                
            }
        }
        
    }
    
    /*-------- OUTPUT --------*/
    for (int i = 0; i < T; i++){

        printf("Case #%d: ", i+1);
        for (int p = 0; p < X[i]; p++){

            printf("%d", sum[i][p]);
            if(p == X[i]-1){
                printf("\n");
            } else {
                printf(" ");
            }
        }

    }

    return 0;
}