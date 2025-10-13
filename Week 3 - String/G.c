#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        char S[105];

        scanf("%d", &N);
        scanf(" %[^\n]", S); // read entire line with spaces

        printf("Case #%d: ", t);

        for (int i = 0; i < N && S[i] != '\0'; i++) {
            isalpha(S[i]) && putchar(tolower(S[i])); // print only letters
        }

        printf("\n");
    }

    return 0;
}

