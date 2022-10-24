#include <stdio.h>

int N, Q;
int views[100];

int x[100], y[100];

int sumview;

int main(){

    scanf("%d", &N); // number of views array

    for(int i = 0; i < N; i++){ // loop viewsnya
        scanf("%d", &views[i]);

    }

    scanf("%d\n", &Q); // input brp temen die

    // input hari dari hari sampe hari ke brp
    for(int i = 0; i < Q; i++){
        scanf("%d %d", &x[i], &y[i]);

    }

    // process sum si array views dari hari ke x sampai ke y
    for(int i = 0; i < Q; i++){
        sumview = 0;

        int dari = x[i]; 
        int sampe = y[i]; 

        for(int i = dari; i <= sampe; i++){
            sumview += views[i-1];

        }

        printf("Case #%d: %d\n", i+1, sumview);
   
    }

    return 0;
}