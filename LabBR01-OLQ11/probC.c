#include<stdio.h>

int binary_search(int arr[], int n, int k);

int n, m;

int main(){
    
    scanf("%d %d", &n, &m); getchar();

    int A[n], Q[m];
    for (int i = 0; i < n; i++){

        scanf("%d", &A[i]); getchar();
    }

    for (int i = 0; i < m; i++){

        scanf("%d", &Q[i]); getchar();
    }

    for (int i = 0; i < m; i++){
        
        int res = binary_search(A, n, Q[i]);
        printf("%d\n", res); 
    }
}

int binary_search(int arr[], int n, int k){
    
    int ind = -2; 
    int l = 0;
    int r = n-1;
    int m;
   
    while (l <= r){

        m = (l + r) / 2;
        
        if (arr[m] < k){
            
            l = m + 1; 
        }else{
            
            if(arr[m] == k)
                ind = m; 
            r = m - 1; 
        }
    }
    
    return ind + 1; 
}
