#include <stdio.h>
#include <string.h>

int T;
char str[1000];

char charTable[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

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
            
            for (int k = 0; k < 26; k++){

                if (str[j] == charTable[k])
                {
                    if (k <= 3)
                    {
                        out[j] = 'A';
                        decKey[j] = k;
                    } else if (k > 3 && k <= 7)
                    {
                        out[j] = 'E';
                        decKey[j] = k - 4;
                    } else if (k > 7 && k <= 13)
                    {
                        out[j] = 'I';
                        decKey[j] = k - 8;
                    }else if (k > 13 && k <= 19)
                    {
                        out[j] = 'O';
                        decKey[j] = k - 14;
                    } else if (k > 19 && k <= 25)
                    {
                        out[j] = 'U';
                        decKey[j] = k - 20;
                    }else{
                        break;
                    }
                    
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