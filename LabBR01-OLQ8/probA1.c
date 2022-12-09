#include <stdio.h>

char string1[19];
char string2[19];
char string3[19];

int main() {

    for (int i = 0; i < 2; i++)
    {
        scanf("%s %s %s", string1, string2, string3); 
        getchar(); 

        printf("%sszs %sszs %sszs\n", string1, string2, string3); 
    }
    
    return 0; 
}