#include <stdio.h>

int T; // testcase
int matrixSize = 0;
int matrixResult;

int main(){

    scanf("%d", &T); // input testcase matrix

    for (int i = 0; i < T; i++){ // loop testcase   --  INI BARU INPUT  
        
        scanf("%d", &matrixSize); // input size matrixnya

        int matrix01[matrixSize][matrixSize][matrixSize];
        int matrixProd[matrixSize][matrixSize][matrixSize];

        for (int i = 0; i < 3; i++){ // loop buat ambil 3 matrix

            for (int j = 0; j < matrixSize; j++){ // loop buat ambil berapa baris ke bawah atau ordo si matrixnya, tau dari matrixSize karna ini bujur sangkar
               
                for (int k = 0; k < matrixSize; k++){ // ini buat ambil angka buat array dimensi yang kedua

                    scanf("%d", &matrix01[i][j][k]);
                    printf("[%d][%d][%d]\n",i ,j, k); // array address checker
                    // printf("matrixSizelog:%d\n", matrixSize); // ordo check

                }
            }
            printf("new matrix\n");
        }
    }

    // PROCESS



    // for (int i = 0; i < T; i++){
    //     printf("Case #%d:\n", i+1);
        
    //     for (int i = 0; i < matrixSize; i++){
    //         printf("%d ",);

    //     }

    // }
    

    return 0;
}