#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int T;
    scanf("%d", &T);
int t;
int i;
int j;
    for (t = 1; t <= T; t++) {
		int N;
		scanf ("%d", &N);
		char s[1001];
		scanf ("%1000s", s);
        for (int i = 0; i < N; i++) {
            int y, z;
            scanf("%d %d", &y, &z);
            y--; z--; 
            while (y < z) {
                char tmp = s[y];
                s[y] = s[z];
                s[z] = tmp;
                y++; z--;
            }
        }
        printf("Case #%d: %s\n", t, s);
        }
        }


