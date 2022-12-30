#include <stdio.h>

int n, wins, result;

int main(){

    scanf("%d", &n);

    result = 0;
    for (int i = 0; i < (1 << n); i++){

        wins = 0;
        for (int j = 0; j < n; j++){

            if (i & (1 << j)) {

                wins++;
            }
        }

        if (wins > 0){

            result++;
        }
    }

    printf("%d\n", result);

    return 0;
}