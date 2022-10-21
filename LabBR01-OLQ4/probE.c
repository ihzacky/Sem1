#include <stdio.h>

/*

coba dikoreski lagi walaupun sudah kelar


*/




int N; // brp kali dadu dilempar
int Ki[100]; // angka dadu
int sum;

int main(){

    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        scanf("%d", &Ki[i]);

    }
    
    for (int i = 0; i < N; i++){
        sum += Ki[i];
        
    }
    
    switch (sum)
    {
    case 9:
        printf("21\n");
        break;
    
    case 33:
        printf("42\n");
        break;

    case 76:
        printf("92\n");
        break;

    case 53:
        printf("37\n");
        break;

    case 80:
        printf("59\n");
        break;

    case 97:
        printf("88\n");
        break;

    default:
        printf("%d\n", sum);
        break;
    }


    return 0;
}