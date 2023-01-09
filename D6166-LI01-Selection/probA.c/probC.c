#include <stdio.h>

int T;
int A, B;

int main (){

    scanf("%d", &T); getchar();
    for (int i = 0; i < T; i++){
        
        scanf("%d %d", &A, &B); getchar();        
    
        printf("Case #%d: ", i+1);
        if (A > B){
            
            printf("Go-Jo\n");        
        } else if (A < B){

            printf("Bi-Pay\n");
        }
    }

    return 0;
}