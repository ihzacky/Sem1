#include <stdio.h>
#include <string.h>

char string[100];
int length;
char output[100];

int main(){

    scanf("%s", string);

    length = strlen(string);

    for (int i = 0; i < length; i++){

        output[(length-1)-i] = string[i];        
        
    }
    
    printf("%s", output);

    return 0;
}