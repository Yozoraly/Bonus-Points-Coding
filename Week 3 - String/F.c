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
    	char s[1001];
		scanf ("%1000s", s);
		int N;
		scanf ("%d", &N);
        for ( i = 0; i < N; i++) {
        	char a,b;
        	scanf (" %c %c",&a ,&b);
            for (int j = 0; s[j] != '\0'; j++) {
                if (s[j] == a) {
                    s[j] = b;
                }
        }
        }
        printf("Case #%d: %s\n", t, s);
        }
}


