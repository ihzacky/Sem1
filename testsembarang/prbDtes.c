#include <stdio.h>

int N, Q, views[100];

int harike[100], sampaike[100];

int sumviews;
int main(){

    scanf("%d", &N); // size of array

    for(int i = 0; i < N; i++){

        scanf("%d", &views[i]);

    }
    printf("Input OK\n");

    scanf("%d\n", &Q); 

    for(int i = 0; i < Q; i++){
        scanf("%d %d", &harike[i], &sampaike[i]);
    }
    printf("array in OK\n");
    for(int i = 0; i < Q; i++){

        sumviews = 0;

        int dari = harike[i]; // keluar 1
        int sampe = sampaike[i]; // keluar 3

        // printf("#harike[%d] = %d\n",i,dari);
        // printf("#sampaike[%d] = %d\n",i,sampe);

        //           1          3    
        for(int i = dari; i <= sampe; i++){
            sumviews += views[i-1]; // mulai dari 1-1=0
            printf("#views array log: %d\n", views[i-1]);
            printf("-sumview log: %d\n", sumviews);
        }

        printf("------------case #%d: %d\n", i+1, sumviews);
    }
    

    return 0;
}