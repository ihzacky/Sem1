#include <stdio.h>

int n, tpoint = 0;

int main(){

    scanf("%d", &n);

    for (int i = 0; i < n; i++){

        tpoint += 100 + 50 * i;
    }

    printf("%d\n", tpoint);

    return 0;
}