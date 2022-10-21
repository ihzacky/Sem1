#include <stdio.h>

int seriesNumber = 0;
int sum = 0;

int main(){

    while(seriesNumber >= 0){

        scanf("%d", &seriesNumber);

        sum = sum + seriesNumber;
        
    }

    printf("sum is %d\n", sum);

    return 0;
}