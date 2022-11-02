#include <stdio.h>
#include <string.h>

int T;
char str[1000];

char A[] = {'A', 'B', 'C', 'D'};
char E[] = {'E', 'F', 'G', 'H'};
char I[] = {'I', 'J', 'K', 'L', 'M', 'N'};
char O[] = {'O', 'P', 'Q', 'R', 'S', 'T'};
char U[] = {'U', 'V', 'W', 'X', 'Y', 'Z'};

int len;

char out[1000];
int decKey[1000];

int main(){

    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        
        scanf("%s", str);
        getchar();

        strcpy(out, str);

        len = strlen(str);
        for (int j = 0; j < len; j++){
            
            for (int k = 0; k < 4; k++)
            {
                if (str[j] == A[k])
                {
                    out[j] = 'A';
                    decKey[j] = k;
                }
                
                
            }

            for (int k = 0; k < 4; k++)
            {
                if (str[j] == E[k])
                {
                    out[j] = 'E';
                    decKey[j] = k;
                }
                
            }

            for (int k = 0; k < 6; k++)
            {
                if (str[j] == I[k])
                {
                    out[j] = 'I';
                    decKey[j] = k;
                }
                
            }

            for (int k = 0; k < 6; k++)
            {
                if (str[j] == O[k])
                {
                    out[j] = 'O';
                    decKey[j] = k;
                }
                
            }

            for (int k = 0; k < 6; k++)
            {
                if (str[j] == U[k])
                {
                    out[j] = 'U';
                    decKey[j] = k;
                }
            }
        }

        printf("Case #1:\n");
        printf("%s\n", out);
        for (int x = 0; x < len; x++){

            printf("%d", decKey[x]);
        }
        
        printf("\n");
    }
    
    

    return 0;
}