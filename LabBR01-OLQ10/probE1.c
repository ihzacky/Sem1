#include <stdio.h>

int main() {
    FILE *FP = fopen("testdata.in", "r");

    int T, N, A, B;
    fscanf(FP, "%d", &T);

    for (int t = 0; t < T;) {
        fscanf(FP, "%d%d%d", &N, &A, &B);

        char S[++N], *C = S;
        fscanf(FP, "%*c%[01]", S);

        int F, Y = 0;
        do {

            if (*C == '0'){
                
                continue;
            }

            for (F = 0; *C == '1' && *C++ && ++F;);

            F >= A && F <= B && ++Y;
        } while (*C++);

        printf("Case #%d: %d\n", ++t, Y);
    }

    return 0;
}