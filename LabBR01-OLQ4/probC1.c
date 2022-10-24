#include <stdio.h>
#include <string.h>

int T;
int N;


int main()
{
    scanf("%d",&T);

    for (int i = 0; i < T; i++){

        scanf("%d",&N);
        char s[N];
        N++;

        int m = 0;

        while (getchar() != '\n');
        while ((s[m] = getchar()) && m < N){
            if (s[m] == '\n') break;
            m++;
        }

        char temp[N];
        int k = 0;
        for (int j = 0; j < N; j++){
            if (s[j] >= 'a' && s[j] <= 'z'){
                
                temp[k] = s[j];
                k++;
            }
        }

        temp[k] = '\0';

        printf("Case #%d: %s\n",i+1,temp);
    }

    return 0;
}