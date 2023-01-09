#include <stdio.h>
#include <string.h>

int main() {

    int T, N, IXC[26], INC[26];
    char XC[1], NC[1], X[101];

    FILE *fPtr = fopen("testdata.in", "r");

    fscanf(fPtr, "%d\n", &T);
    for (int I0 = 0; I0 < T; I0++){

        for (int I1 = 0; I1 <= 25; I1++){

            IXC[I1] = INC[I1] = 0;
        }

        fscanf(fPtr, "%s\n", X);
        fscanf(fPtr, "%d\n", &N);
        for (int I2 = 0; I2 < N; I2++){

            fscanf(fPtr, "%c %c\n", XC, NC);
            IXC[XC[0] - 65]++;
            for (int I3 = 0; I3 < strlen(X); I3++){

                if (X[I3] == XC[0] && IXC[XC[0] - 65] < 2){

                    X[I3] = NC[0];
                }
            }
        }
        for (int I4 = 0; I4 < strlen(X); I4++){

            INC[X[I4] - 65]++;
        }
        for (int I5 = 0; I5 <= 25; I5++){

            if (INC[I5] > 0){

                printf("%c %d\n", (I5 + 65), INC[I5]);
                INC[I5] = 0;
            }
        }
    } 
    
    return 0;
}