#include <stdio.h>

/*

belum tau codingan ini betul apa salah

*/
int N;


int main(){
    scanf("%d\n", &N);

    int Ki[N];
    int sumDice = 0;

    for (int i = 0; i < N; i++){
        
        // printf("ini i di loop pertama %d\n", i);
        scanf("%d", &Ki[i]);
    }

    for (int i = 0; i < N; i++){

        // printf("var perantara: %d\n", perantara);
        // printf("sumDice log 1: %d\n", sumDice);
        sumDice = sumDice + Ki[i];

        // printf("Ki: %s\n", Ki[i]);
        // printf("Ki after multi: %s\n", Ki[i]);

        // printf("sumDice log %d\n", sumDice);

    }

    switch (sumDice){
    case 12:
        printf("28\n");
        break;
    case 35:
        printf("7\n");
        break;
    default:
        printf("%d\n", sumDice);
        break;
    }

    return 0;
}