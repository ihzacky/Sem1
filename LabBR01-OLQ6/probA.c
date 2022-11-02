#include <stdio.h>
#include <string.h>
#include <ctype.h>

int T;
int strLen;
char str[10000];

int main(){
        
    scanf("%[^\n]", str);
    getchar();

    strLen = strlen(str);
    for (int i = 0; i < strLen; i++){
        
        switch (str[i])
        {
        case '0':
            str[i] = 'o';
            break;
        case '1':
            str[i] = 'i';
            break;
        case '2':
            str[i] = 'r';
            break;
        case '3':
            str[i] = 'e';
            break;
        case '4':
            str[i] = 'a';
            break;
        case '5':
            str[i] = 's';
            break;
        case '6':
            str[i] = 'g';
            break;
        case '7':
            str[i] = 't';
            break;
        case '8':
            str[i] = 'b';
            break;
        case '9':
            str[i] = 'p';
            break; 
        default:
            break;
        }
    }

    for (int l = 0; l < strLen; l++){

        if (isupper(str[l])){

            str[l] = tolower(str[l]);
        }
    }

    printf("%s\n", str);

    return 0;
}