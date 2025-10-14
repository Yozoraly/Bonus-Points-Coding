#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    
    long long rooms[5000];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &rooms[i]);
    }

    int uniqueCount = 0;
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < i; j++) {
            if (rooms[i] == rooms[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) uniqueCount++;
    }

    printf("%d\n", uniqueCount);
    return 0;
}
