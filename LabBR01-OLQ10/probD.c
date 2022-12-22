#include <stdio.h>
#include <string.h>

int T;
char S[1000];

int main(){

    scanf("%d", &T); getchar();
    for (int i = 0; i < T; i++){
        
        scanf("%[^\n]", &S); getchar();
        int len = strlen(S);

        printf("Case #%d : ", i+1);
        for (int j = 0; j < len; j++){

            if (S[j] != 65 && S[j] != 97 && S[j] != 69 && S[j] != 101 && S[j] != 73 && S[j] != 105 && S[j] != 79 && S[j] != 111 && S[j] != 85 && S[j] != 117){
                
                printf("%c", S[j]);
            }
        }
        
        printf("\n");      
    }

    return 0;
}