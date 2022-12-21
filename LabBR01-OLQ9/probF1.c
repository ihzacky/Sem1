#include <stdio.h>
#include <string.h>

int main() {
  int T, N;

  scanf(" %d", &T);

  for (int i = 0; i < T; i++) {
    char F[22][2222];

    scanf(" %d", &N);
    scanf(" %c %c", F[0], F[1]);

    for (int j = 2; j <= N; j++) {
      F[j][0] = 0;
      strcat(F[j], F[j - 1]);
      strcat(F[j], F[j - 2]);
    }

    printf("Case #%d: %s\n", i + 1, F[N]);
  }

  return 0;
}