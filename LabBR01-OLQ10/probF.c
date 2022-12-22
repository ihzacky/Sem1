#include <stdio.h>
#include <math.h>

#define PI 3.14

long long int T;
int R;
int H;
double result;

int main(){

    scanf("%lld", &T); getchar();
    for (int i = 0; i < T; i++){
        
        scanf("%d %d", &R, &H); getchar();

        result = (2 * PI * R * H) + (2 * PI * pow(R, 2));

        printf("Case #%d: %.2lf\n", i+1, result);

    }

    return 0;
}