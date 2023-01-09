#include <stdio.h>

long A;

int main (){

    scanf("%ld", &A); getchar();
    if (A % 2 == 0){

        printf("EVEN\n");
    } else{
        
        printf("ODD\n");        
    }
    
    return 0;
}