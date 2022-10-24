#include <stdio.h>

int N;


int main(){
    scanf("%d\n", &N);

    int Ki[N];
    int sumDice = 0;

    for (int i = 0; i < N; i++){
        
        scanf("%d", &Ki[i]);
    }

    for (int i = 0; i < N; i++){

        sumDice = (sumDice + Ki[i]) % 40;

        switch (sumDice){
        case 30:
            sumDice = 10;
            break;
        case 12:
            sumDice = 28;
            break;
        case 35:
            sumDice = 7;
            break;
        default:
            break;
        }
    }

    printf("%d\n", sumDice);

    return 0;
}