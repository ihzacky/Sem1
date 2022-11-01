#include <stdio.h>
#include <string.h>

int T; // testcase
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
            
            // switch (str[i])
            // {
            // case 0:
            //     str[i] = 'O';
            //     break;
            // case 1:
            //     str[i] = 'I';
            //     break;
            // case 2:
            //     str[i] = 'Z';
            //     break;
            // case 3:
            //     str[i] = 'E';
            //     break;
            // case 4:
            //     str[i] = 'A';
            //     break;
            // case 5:
            //     str[i] = 'S';
            //     break;
            // case 6:
            //     str[i] = 'G';
            //     break;
            // case 7:
            //     str[i] = 'T';
            //     break;
            // case 8:
            //     str[i] = 'B';
            //     break;
            // case 9:
            //     str[i] = 'P';
            //     break; 
            // default:
            //     break;
            // }

            switch (str[i])
            {
            case '0':
                printf("O");
                break;
            case '1':
                printf("I");
                break;
            case '2':
                printf("Z");
                break;
            case '3':
                printf("E");
                break;
            case '4':
                printf("A");
                break;
            case '5':
                printf("S");
                break;
            case '6':
                printf("G");
                break;
            case '7':
                printf("T");
                break;
            case '8':
                printf("B");
                break;
            case '9':
                printf("P");
                break; 
            default:
                printf("%c", str[i]);
                break;
            }


            
        }

        printf("\n");
        
    }
    


    return 0;
}