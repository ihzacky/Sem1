#include <stdio.h>

int T;
char string[1000];

void reverse();

int main(){

    scanf("%d", &T);
    getchar();
    for (int i = 0; i < T; i++){

        scanf("%[^\n]", string);
        getchar();

        printf("Case #%d: ", i+1);
        reverse(&string);
        printf("\n");
    }

    return 0;
}

void reverse(char *s){

    if (*s != '\0'){

        reverse(s + 1);
    }

    printf("%c", *s);
}