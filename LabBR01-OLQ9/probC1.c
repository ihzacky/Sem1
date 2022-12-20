#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int n;
        scanf("%d", &n);

        int max_score = 0;
        int num_gifts = 0;
        for (int j = 0; j < n; j++) {
            int score;
            scanf("%d", &score);

            // Update the maximum score and the number of gifts if necessary
            if (score > max_score) {
                max_score = score;
                num_gifts = 1;
            } else if (score == max_score) {
                num_gifts++;
            }
        }

        printf("Case #%d: %d\n", i, num_gifts);
    }

    return 0;
}
