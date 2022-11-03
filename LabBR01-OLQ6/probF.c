#include <stdio.h>
#include <string.h>

char str[1000000];
char voc[21] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 
                'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};        
char cons[5] = {'a', 'e', 'i', 'o', 'u'};
int len;

int vocals[21];
int consonants[5];

int vocCount;
int consCount;

int main(){

    scanf("%[^\n]", str);

    len = strlen(str);
    for (int i = 0; i < len; i++){

        for (int j = 0; j < 21; j++){

            if (str[i] == voc[j])
            {
                vocals[j]++;
            }
            
        }

        for (int p = 0; p < 5; p++){

            if (str[i] == cons[p])
            {
                consonants[p]++;
            }
        }
        
    }
        
    for (int j = 0; j < 21; j++){
        
        if (vocals[j] > 0){
        vocCount++;
        }
        
    }

    for (int k = 0; k < 5; k++){
        
        if (consonants[k] > 0){
        consCount++;
        }

    }

    // idk why does it switched ???
    printf("Vocal: %d\n", consCount);
    printf("Consonant: %d\n", vocCount);
    

    return 0;
}