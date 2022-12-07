#include <stdio.h>
#include <string.h>

char string1[19];
char string2[19];
char string3[19];

char alien[] = {"szs"};

int main(){

    for (int i = 0; i < 2; i++){

        scanf("%s %s %s", &string1, &string2, &string3);
        getchar();
        
        strcat(string1, alien);
        strcat(string2, alien);
        strcat(string3, alien);
    
        printf("%s %s %s\n", string1, string2, string3);
    }
    
    return 0;
}