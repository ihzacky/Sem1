#include <stdio.h>

int T;
int X[500];
long int arrayNum[1000][1000];
int sum[1000];

int main(){

    scanf("%d", &T);

    for (int i = 0; i < T; i++){

        scanf("%d", &X[i]);
   
        for (int j = 0; j < X[i]; j++){
            for (int k = 0; k < X[i]; k++){

                scanf("%d", &arrayNum[j][k]);
                
            }
        }
            
        for (int row = 0; row < X[i]; row++){

            sum[row] = 0;
            for (int col = 0; col < X[i]; col++){
                
                sum[row] += arrayNum[col][row];

            }
        }
            
        printf("Case #%d: ", i+1);
        for (int p = 0; p < X[i]; p++){

            printf("%d", sum[p]);
            if(p == X[i]-1){
                printf("\n");
            } else {
                printf(" ");
            }
        }
    }
    
    return 0;
}