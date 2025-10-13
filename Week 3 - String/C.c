#include <stdio.h>
#include <string.h>

int main(void) {
    int T;
    scanf("%d", &T);

    for (int caseNum = 1; caseNum <= T; caseNum++) {
        char msg[1001];
        scanf("%1000s", msg);

        char encrypted[1001];
        char key[1001];
        int len = strlen(msg);

        for (int i = 0; i < len; i++) {
            char c = msg[i];
            int distance = 0;

            // Check if vowel
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                encrypted[i] = c;
                key[i] = '0';
            } else {
                // Find nearest previous vowel
                char prevVowel;
                if (c < 'E') prevVowel = 'A';
                else if (c < 'I') prevVowel = 'E';
                else if (c < 'O') prevVowel = 'I';
                else if (c < 'U') prevVowel = 'O';
                else prevVowel = 'U';

                encrypted[i] = prevVowel;
                distance = c - prevVowel;
                key[i] = distance + '0';
            }
        }
        encrypted[len] = '\0';
        key[len] = '\0';

        printf("Case #%d:\n", caseNum);
        printf("%s\n", encrypted);
        printf("%s\n", key);
    }

    return 0;
}

