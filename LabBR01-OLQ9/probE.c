#include <stdio.h>
#include <string.h>

int T;
int TC;

struct read_kamus
{
    char kataPendek[50];
    char kataAsli[50];
} kamus[100];

char read_tc[100];
char read_temp[50];

int main (){

    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%d\n", &T);
    
    for (int i = 0; i < T; i++){

        fscanf(fp, "%[^#]#%[^\n]\n", kamus[i].kataPendek, kamus[i].kataAsli);
        // printf("%s %s\n", kamus[i].kataPendek, kamus[i].kataAsli);
    }
    
    fscanf(fp, "%d\n", &TC);
    for (int i = 0; i < TC; i++){

        fscanf(fp, "%[^\n]\n", read_tc);
        int len = strlen(read_tc);
        // printf("%d\n", len);

        int counter = 0;
        int space = 0;
        for (int j = 0; j < len; j++){

            if (read_tc[j] == 32){
                
                space++;
            }
            
        }
        

    }
    

    return 0;
}