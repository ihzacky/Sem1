#include <stdio.h>

int N; 
int Ki[100];
int sum;

int main(){

    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        scanf("%d", &Ki[i]);

    }
    
    for (int i = 0; i < N; i++){
        sum += Ki[i];
        
        switch (sum)
        {
        case 9:
            sum = 21;
            break;
        
        case 33:
            sum = 42;
            break;

        case 76:
            sum = 92;
            break;

        case 53:
            sum = 37;
            break;

        case 80:
            sum = 59;
            break;

        case 97:
            sum = 88;
            break;

        default:
            break;
        }
    }

    printf("%d\n", sum);
    
    return 0;
}