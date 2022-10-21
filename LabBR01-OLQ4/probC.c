#include <stdio.h>
#include <string.h>
/*

 BELOM KELAR    



*/
int T; // number of testcase, each testcase contain 2 lines
int N; // length of string S, including white space
char S [100][100]; // the string itself

int main(){

    char str[100][100];

    scanf("%d\n", &T); // number of testcase

    for(int i = 0; i < T; i++){

        scanf("%d\n", &N);
        scanf("%[^\n]s\n", str[i]); // <--

    }
    
    for(int i = 0; i < T; i++){

        printf("Case #%d: %s\n", i+1, str[i]);
    }
    getchar();


    return 0;
}