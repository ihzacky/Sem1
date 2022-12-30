#include <stdio.h>

char matkul[10];
int H, M;
int H1, M1;

int main(){

    for (int i = 0; i < 5; i++){
        
        scanf("%s %d:%d-%d:%d", &matkul, &H, &M, &H1, &M1); getchar();
        printf("%s %02d:%d-%02d:%d\n", matkul, H+1, M, H1+1, M);
    }

    return 0;
}