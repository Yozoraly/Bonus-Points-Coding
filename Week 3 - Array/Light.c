#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // number of test cases

    for (int t = 1; t <= T; t++) {
        int N, M, Q;
        scanf("%d %d %d", &N, &M, &Q);

        int pattern[55][55] = {0};
        int light[55] = {0};

        // read pattern of each friend
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                scanf("%d", &pattern[i][j]);
            }
        }

        // read visiting friends
        for (int q = 0; q < Q; q++) {
            int f;
            scanf("%d", &f);
            f--; // convert to 0-index

            // toggle each room visited by this friend
            for (int r = 0; r < M; r++) {
                if (pattern[f][r] == 1) {
                    light[r] = !light[r];
                }
            }
        }

        // output
        printf("Case #%d:\n", t);
        for (int r = 0; r < M; r++) {
            if (light[r])
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
