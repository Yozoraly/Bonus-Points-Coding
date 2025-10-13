#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int x;
    char word[101];

    scanf("%d", &x);
    for (int i = 1; i <= x; i++) {
        scanf("%s", word);
        int seen[26] = {0};
        int count = 0;

        for (int j = 0; j < strlen(word); j++) {
            char lower = tolower(word[j]);
            if (word[j] >= 'a' && word[j] <= 'z') {
                int index = lower - 'a';
                if (seen[index] == 0) {
                    seen[index] = 1;
                    count++;
                }
            }
        }

        if (count % 2 == 0)
            printf("Case #%d: Yay\n", i);
        else
            printf("Case #%d: Ewwww\n", i);
    }

    return 0;
}
