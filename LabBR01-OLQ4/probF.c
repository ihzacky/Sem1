#include<stdio.h>

int matrixSize[50];
int T, i, j, k;
int a[100][100][100], b[100][100][100],c[100][100][100], tempRes[100][100][100], res[100][100][100];

int main(){

    scanf("%d", &T);

    /*------------INPUT-----------OK*/
    for (int loop = 0; loop < T; loop++){ // looping testcase

        // printf("enter matrix size:\n");
        scanf("%d", &matrixSize[loop]);

        // printf("Enter the elements of Matrix-A:\n");
        for (i = 0; i < matrixSize[loop]; i++) {
            for (j = 0; j < matrixSize[loop]; j++) {
                scanf("%d", & a[loop][i][j]);
            }
        }
        printf("\n");
        // printf("Enter the elements of Matrix-B:\n");
        for (i = 0; i < matrixSize[loop]; i++) {
            for (j = 0; j < matrixSize[loop]; j++) {
                scanf("%d", & b[loop][i][j]);
            }
        }
        printf("\n");
            // printf("Enter the elements of Matrix-C:\n");
        for (i = 0; i < matrixSize[loop]; i++) {
            for (j = 0; j < matrixSize[loop]; j++) {
                scanf("%d", & c[loop][i][j]);
            }
        }
        printf("\n");
    }

    /* ---------PROCESSING 3 MATRIX MULTIPLICATION--------- */
    // tempRes = |a| * |b|
    for (int process = 0; process < T; process++){
        
        for (i = 0; i < matrixSize[process]; i++) {
            for (j = 0; j < matrixSize[process]; j++) {
                tempRes[process][i][j] = 0;
                for (k = 0; k < matrixSize[process]; k++) {
                    tempRes[process][i][j] += a[process][i][k] * b[process][k][j];
                }
            }
        }

        // res = |tempRes| * |c|
        for (i = 0; i < matrixSize[process]; i++) {
            for (j = 0; j < matrixSize[process]; j++) {
                res[process][i][j] = 0;
                for (k = 0; k < matrixSize[process]; k++) {
                    res[process][i][j] += tempRes[process][i][k] * c[process][k][j];
                }
            }
        }
    }
    

    /* ----------OUTPUT--------- */

    // printf("The product of the three matrices is:-\n");
    for (int loop = 0; loop < T; loop++){ // looping based on testcase aka "Case #%d"
        printf("Case #%d:\n", loop+1);

        for (i = 0; i < matrixSize[loop]; i++) {   
            for (j = 0; j < matrixSize[loop]; j++) {
                printf("%d ", res[loop][i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}