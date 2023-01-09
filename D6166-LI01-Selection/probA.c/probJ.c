#include <stdio.h>

int x, y, z;
int xloc, yloc;

int main (){

    scanf("%d %d %d", &x, &y, &z); getchar();

    xloc = z - x;
    yloc = z - y;

    if (xloc < 1 || yloc < 1){
        
        printf("-1\n");        
    }
    if (xloc == 0 && yloc == 0){
        
        printf("0\n");        
    }

    if (xloc == yloc){
        
        printf("%d\n", xloc);        
    }
    
    
    

    return 0;
}