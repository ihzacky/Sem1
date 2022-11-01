#include <stdio.h>

int T; // testcase
int N[100]; // save n input data inside array for calling later

int main(){

    scanf("%d", &T);
    getchar();

    /*----- INPUT -----*/
    for (int i = 0; i < T; i++){
        scanf("%d", &N[i]);
        getchar();
        
    }
    
    /*----- PROCESS -----*/

    for (int i = 0; i < T; i++){
        
        // printing box process below
        for (int j = 0; j < N[i]; j++){ // buat row dari si kotak
            printf("*");
            for (int k = 0; k < N[i]; k++){
                
                // if (k != N[i]){
                //     // printf("%d", k);
                //     printf("*");
                // } 

                // if (k == N[i]-1){
                //     printf("\n");
                // }

                if (k == N[i]-1){
                    printf("\n");
                } else{
                    printf("*");
                }



            }

        }
        

    }
    




    /*----- OUTPUT -----*/

    return 0;
}