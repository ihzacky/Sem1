#include <stdio.h>

char str[100];

int main(){

    scanf("%[^\n]s", &str);

    printf("Congrats \"%s\" for joining the CS department at BINUS.\n", str);

    return 0;
}