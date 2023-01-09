#include <stdio.h>
#include <string.h>

#define MAX_LEN 110

int main() {
    int t;
    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%d", &t);

    while (t--) {
        char x[MAX_LEN];
        int n;
        fscanf(fp, "%s", x);
        fscanf(fp, "%d", &n);

        // Initialize array for storing character counts
        int counts[26] = {0};
        for (int i = 0; i < strlen(x); i++) {
            counts[toupper(x[i]) - 'A']++;
        }

        // Initialize array for storing keys in alphabetical order
        char keys[26][2];
        for (int i = 0; i < 26; i++) {
            keys[i][0] = i + 'A';
            keys[i][1] = '\0';
        }

        // Process character changes
        for (int i = 0; i < n; i++) {
            char a, b;
            fscanf(fp, " %c %c", &a, &b);
            a = toupper(a);
            b = toupper(b);
            counts[b - 'A'] += counts[a - 'A'];
            counts[a - 'A'] = 0;
        }

        // Sort keys alphabetically
        for (int i = 0; i < 26; i++) {
            for (int j = i + 1; j < 26; j++) {
                if (strcmp(keys[i], keys[j]) > 0) {
                    char temp[2];
                    strcpy(temp, keys[i]);
                    strcpy(keys[i], keys[j]);
                    strcpy(keys[j], temp);
                }
            }
        }

        // Print results
        for (int i = 0; i < 26; i++) {
            if (counts[keys[i][0] - 'A'] > 0) {
                printf("%c %d\n", keys[i][0], counts[keys[i][0] - 'A']);
            }
        }
    }

    return 0;
}
