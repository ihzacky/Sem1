#include <stdio.h>
#include <string.h>

int T;
long long int N;
char reversed[21];

int main() {

    scanf("%d", &T);


    for (int i = 0; i < T; i++){

        scanf("%lld", &N);

        sprintf(reversed, "%lld", N);

        int len = strlen(reversed);
        for (int j = 0; j < len / 2; j++){

            char temp = reversed[j];
            reversed[j] = reversed[len - j - 1];
            reversed[len - j - 1] = temp;
        }

        long long int reversed_n;
        sscanf(reversed, "%lld", &reversed_n);

        long long int sum = N + reversed_n;
        printf("Case #%d: %lld\n", i+1, sum);
    }

    return 0;
}
