#include <stdio.h>
#include <string.h>

int T;
int n;

char x[16];
char y[16];
char z[16];
char temp[16];

int main (){

    scanf("%d", &T); getchar();
    for (int i = 0; i < T; i++){

        scanf("%d %c %c",&n, &x, &y); getchar();

        printf("Case #%d: ", i+1);
        for (int j = 0; j < n; j++){

            strcpy(z, x);/*copying x into z*/
		    strcpy(x, y);/*copying y into x*/
		    strcat(y, z);
            
        }

        printf("%s\n", x);
    }

    return 0;
}