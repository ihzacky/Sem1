#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);getchar();
    int mat[N][N];
    
    // taking matrix values as input
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%d", &mat[i][j]);getchar();
        }
    }
    
    // intializing an array to 0, to count number of players in each team
    int arr[N];
    for(int i = 0; i < N; i++) {
        arr[i] = 0;
    }
    
    // counting number of players in each team
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(mat[i][j] == 0 || mat[i][j] > N)
                continue;
            arr[mat[i][j]-1]++;
        }
    }
    
    // counting teams that are short of players
    int count = 0; 
    for(int i = 0; i < N; i++) {
        if(arr[i] < N)
            count++;
    }
    
    printf("%d\n", count);
    
    return 0;
}