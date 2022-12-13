#include <stdio.h>

int T; // testcase
int N; // jumlah kamar
int M; // ada berapa patternnya

int main(){

    scanf("%d", &T); getchar();  // input testcase
    for (int i = 0; i < T; i++){

        /*INPUT*/
        scanf("%d %d", &N, &M); // input jml kamar dan jml patter

        int roomNum[N];
        int roomFlag[N]; // track which door are unlocked/locked
        for (int i = 0; i < N; i++){
            
            roomNum[i] = i+1; // ngasih angka dalem array dari 1 s.d jumlah kamar
            roomFlag[i] =  1; // ngasih angka 1 ke semua array flag
        }
        
        int X; // pattern
        for (int inputM = 1; inputM <= M; inputM++){

            scanf("%d", &X); // input patternnya
            getchar();

            for (int j = X; j <= N; j += X){

                roomFlag[j] = !roomFlag[j];
            }
        }
        
        /*PROCESSING*/
        
        printf("\n");
        for (int i = 0; i < N; i++){ // roomNum array checker

            printf("%d ", roomNum[i]);
        }
        printf("\n");

        // for (int i = 0; i < M; i++){
        //     for (int j = X[i]; j <= N; j += X[i]){
                
        //         // if (roomFslag[j] == 1){

        //         //     roomFlag[j] = 0;
        //         // }else if (roomFlag[j] == 0){
                    
        //         //     roomFlag[j] = 1;
        //         // }
                
        //         roomFlag[j] = !roomFlag[j];
                
        //     }
        // }
        // printf("\n");
        // for (int i = 0; i < N; i++){ // roomNum array checker

        //     printf("%d ", roomNum[i]);
        // }
        // printf("\n");

        /*OUTPUT*/
        printf("Case #%d: ", i+1);
        // for (int i = 0; i < N; i++){

        //     if (roomFlag[i] > 0 && roomFlag[i] % 2 == 1)
        //     {
                
        //         printf("%d", roomNum[i]);

        //         if(i == N-1){
        //             printf("\n");
        //         } else {
        //             printf(" ");
        //         }   

        //     }

        // }

        printf("\n");
        for (int i = 0; i < N; i++){

            printf("%d ", roomNum[i]);
        }
        printf("\n");
        for (int i = 0; i < N; i++){

            printf("%d ", roomFlag[i]);
        }
        printf("\n");
        

    }

    return 0;
}