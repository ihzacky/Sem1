#include <stdio.h>

int T;
int A;
double B;

int main(){

    scanf("%d", &T); getchar();
    for (int i = 0; i < T; i++){
        
        scanf("%d %lf", &A, &B); getchar();
        double temp = A * B;

        printf("%.2lf\n", temp / 360);        
    }
    
    return 0;
}