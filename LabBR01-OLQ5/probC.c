#include <stdio.h>
#include <string.h>

int T;
int strLen;
char str[1000];

int main(){

    scanf("%d", &T);
    getchar();

    for (int i = 0; i < T; i++){
        
        scanf("%[^\n]", str);
        getchar();

        printf("Case #%d: ", i+1);

        strLen = strlen(str);
        for (int i = 0; i < strLen; i++){
            
            switch (str[i])
            {
            case '0':
                str[i] = 'O';
                break;
            case '1':
                str[i] = 'I';
                break;
            case '2':
                str[i] = 'Z';
                break;
            case '3':
                str[i] = 'E';
                break;
            case '4':
                str[i] = 'A';
                break;
            case '5':
                str[i] = 'S';
                break;
            case '6':
                str[i] = 'G';
                break;
            case '7':
                str[i] = 'T';
                break;
            case '8':
                str[i] = 'B';
                break;
            case '9':
                str[i] = 'P';
                break; 
            default:
                break;
            }

        }

        printf("%s\n", str);
    }

    return 0;
}