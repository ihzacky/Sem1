#include <stdio.h>

int x[10];

int main(){

    for (int i = 0; i < 10; i++){
        
        scanf("%d", &x[i]);

    }
    
    int min = x[0];
    int max = x[0];
    for (int i = 0; i < 10; i++){
        
        if(x[i] > max){
            max = x[i];
        }

        if(x[i] < min){
            min = x[i];
        }

    }
    
    int sum = 0; 
    double avg;
    for (int i = 0; i < 10; i++){
        
        sum += x[i];

    }
    
    avg = sum / 10;

    printf("Max value inside the array: %d\n", max);
    printf("Min value inside the array: %d\n", min);
    printf("Average value of the array: %.2lf\n", avg);

    return 0;
}