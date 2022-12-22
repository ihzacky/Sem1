#include <stdio.h>
#include <math.h>

int T;
long long int N;

long long int result;

long int digitcounter(long long n);

int main(){

    scanf("%d", &T); getchar();
    for (int i = 0; i < T; i++){
        
        scanf("%lld", &N);
        int len = digitcounter(N);

        for (int j = 0; j < len; j++){
            
            //result[j] = N[j] + N[len - j];
        }
        
        printf("Case #%d: %lld\n", i+1, result);
    }
    

    return 0;
}

long int digitcounter(long long n){

    if (n / 10 == 0){
        
        return 1;
    }
    
    return 1 + digitcounter(n / 10);
}