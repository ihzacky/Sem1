#include <stdio.h>

int buang;
int x, x1;
int y, y1;
int z, z1;

int main(){

    scanf("%d", &buang);
    scanf("%d %d", &x, &x1);
    scanf("%d %d", &y, &y1);
    scanf("%d %d", &z, &z1);

    printf("%d\n", ((x/x1))<<x1);
    printf("%d\n", ((y/y1))<<y1);
    printf("%d\n", ((z/z1))<<z1);

    return 0;
}