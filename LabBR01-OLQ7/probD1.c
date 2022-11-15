#include <stdio.h>
#include <string.h>

int T;
char S [1000];
int len;

void reverse();
// void scanner(char s[1000]);

int main(){

    scanf("%d", &T);
    getchar();
    
    for (int i = 0; i < T; i++){

        scanf("%[^\n]", S);
        getchar();

        printf("Case #%d: ", i+1);
        reverse(S);
    }

    return 0;
}

void reverse(char s[1000]){
    
    char out [1000];

    len = strlen(s);    
    for (int j = 0; j < len; j++){ 

        out[(len-1)-j] = s[j];
    }
    printf("%s\n", out);
}

