#include <stdio.h>
#include <string.h>

int T;
char str[1000];

char A[4] = {'A', 'B', 'C', 'D'}; // 0-3
char E[4] = {'E', 'F', 'G', 'H'}; // 4-7
char I[6] = {'I', 'J', 'K', 'L', 'M', 'N'}; //8-13
char O[6] = {'O', 'P', 'Q', 'R', 'S', 'T'}; //14-19
char U[6] = {'U', 'V', 'W', 'X', 'Y', 'Z'}; //20-25

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

        printf("Case #%d:\n", i+1);
        printf("%s\n", out);
        for (int x = 0; x < len; x++){

            printf("%d", decKey[x]);
        }
        
        printf("\n");
    }
    
    

    return 0;
}