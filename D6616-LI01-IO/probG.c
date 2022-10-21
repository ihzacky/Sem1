#include <stdio.h>

char str[100];

int main(){

    scanf("%[^\n]s", &str);

    printf("Happy Birthday to %s.\n", str);

    return 0;
}