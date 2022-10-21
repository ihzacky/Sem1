#include <stdio.h>

int x, y, z;

int main(){

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    printf("%d\n", x/10%10);
    printf("%d\n", y/10%10);
    printf("%d\n", z/10%10);

    return 0;
}