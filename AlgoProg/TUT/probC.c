#include <stdio.h>

int N; // barang yang mau dibeli
int Q; // berapa kali perubahan harga
int C[100]; // harga awal
int B[100][100]; // harga akhir

int main(){

    scanf("%d", &N);
    for (int i = 0; i < N; i++){ // input harga2 barang yg mau dibeli
        
        scanf("%d", &C[i]);

    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            B[i][j] = C[j];
        }
    }
    
    // /* input array test */
    // printf("Case #1: "); 
    // for (int j = 0; j < N; j++){
        
    //     printf("%d", C[j]);

    //     if(j == N-1){
    //         printf("\n");
    //     } else {
    //         printf(" ");
    //     }

    // }
    

    int x; // harga ke berapa yang mau diubah
    int y; // harga yg baru
    scanf("%d", &Q);
    for (int i = 0; i < Q; i++){
        
        scanf("%d %d", &x, &y);

        B[i][x-1] = y;

        for (int col = 0; col < N; col++){

            B[i+1][col] = B[i][col];
        }

    }
    
    
    // /*  ouput test  */
    // printf("Case #1: "); 
    // for (int j = 0; j < N; j++){
        
    //     printf("%d", B[3][j]);

    //     if(j == N-1){
    //         printf("\n");
    //     } else {
    //         printf(" ");
    //     }

    // }

    

    

    /*----- OUTPUT -----*/
    for (int i = 0; i < Q; i++){
        
        printf("Case #%d: ", i+1);
        for (int j = 0; j < N; j++){
            
            // printf("%d", C[j]);
            printf("%d", B[i][j]);

            if(j == N-1){
                printf("\n");
            } else {
                printf(" ");
            }

        }
        
    }
    

    return 0;
}