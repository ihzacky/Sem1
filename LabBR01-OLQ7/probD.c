#include <stdio.h>
#include <string.h>

int T;
char S [1000];
char out [1000];
int len;

int main(){

    scanf("%d", &T);
    getchar();
    
    for (int i = 0; i < T; i++){

        scanf("%[^\n]", S);
        getchar();
        
        len = strlen(S);    // mencari berapa panjang dari string dan disimpan pada int length

        for (int a = 0, b; S[a] != '\0'; ++a) {
  
            while (!(S[a] >= 'a' && S[a] <= 'z') && !(S[a] == '\0') && !(S[a] == ' ')) {
   
                for (b = a; S[b] != '\0'; ++b) {
 
                    S[b] = S[b+1];
                }

                S[b] = '\0';
            }
        }

        for (int j = 0; j < len; j++){   // loop untuk membalikkan sebuah string

            /*  memasukkan huruf pada array string menuju array output dengan
                cara menaruh huruf pada array paling depan pada array 
                string ke array paling belakang stringn output dan seterusnya */
            out[(len-1)-j] = S[j];
        }

        printf("Case #%d: %s\n", i+1, out);
    }

    return 0;
}