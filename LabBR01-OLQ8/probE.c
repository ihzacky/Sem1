#include <stdio.h>

int X; // berapa baris
int Y; // berapa kolom
int T; // berapa banyak perubahan di grid

int a; // baris ke berapa
int b; // kolom ke berapa
int c; // grid awal mau diubah ke angka berapa

int main(){

    scanf("%d %d", &X, &Y); getchar();
    int grid[X][Y];

    for (int i = 0; i < X; i++){
        for (int j = 0; j < Y; j++){

            scanf("%d", &grid[i][j]);
            getchar();
        }        
    }

    scanf("%d", &T); getchar();
    for (int i = 0; i < T; i++){

        scanf("%d %d %d", &a, &b, &c);
        getchar();
        grid[a-1][b-1] = c;
    }
    
    for (int i = 0; i < X; i++){
        for (int j = 0; j < Y; j++){

            printf("%d", grid[i][j]);

            if(j == Y-1){
                printf("\n");
            } else {
                printf(" ");
            }   
        }
    }
    
    return 0;
}