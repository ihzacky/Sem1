#include <stdio.h>

int T;
int n, m;
int i, j;

int main(){

    scanf("%d", &T);
    for (int t = 0; t < T; t++){
        
        scanf("%d %d", &n, &m);
        printf("Case #%d:\n", t+1);
        for (i = 1; i <= n; i++){

            for (j = 1; j <= m; j++){

                if (i == 1 || i == n || j == 1 || j == m){
                    printf("#");           
                } else{
                    printf(" ");
                }
            }

            printf("\n");
        }
    }
    
    return 0;
}