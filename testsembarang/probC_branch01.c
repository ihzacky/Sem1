#include <stdio.h>


int T; // number of testcase, each testcase contain 2 lines
int N; // length of string S, including white space

int main(){

    scanf("%d\n", &T); // number of testcase

    char str[T][100]; // string array

    for(int i = 0; i < T; i++){

        scanf("%d\n", &N); // string length
        
        scanf("%[^\n]", str[i]); // string input

    }
    
    for (int tcL1 = 0; tcL1 < T; tcL1++){ // testcase looping

        for (int i = 0, j; str[tcL1][i] != '\0'; ++i) {

            // enter the loop if the character is not an alphabet
            // and not the null character
            while (!(str[tcL1][i] >= 'a' && str[tcL1][i] <= 'z') && !(str[tcL1][i] >= 'A' && str[tcL1][i] <= 'Z') && !(str[tcL1][i] == '\0')) {
                for (j = i; str[tcL1][j] != '\0'; ++j) {

                // if jth element of str is not an alphabet,
                // assign the value of (j+1)th element to the jth element
                str[tcL1][j] = str[tcL1][j + 1];
                }
                str[tcL1][j] = '\0';
            }
        }
    }

    for(int i = 0; i < T; i++){

        printf("Case #%d: %s\n", i+1, str[i]); // output OK
    }
    return 0;
}