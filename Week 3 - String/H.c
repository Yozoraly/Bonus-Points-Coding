#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int T;
    scanf("%d", &T);
int t;
int i;
    for (t = 1; t <= T; t++) {
		int N;
		scanf ("%d", &N);
		int x;
		scanf ("%d", &x);
		char s[100];
		scanf ("%s", s);
		printf("Case #%d: ", t);
 for (i = 0; i < N && s[i] != '\0'; i++) {
            if (isalpha(s[i])) { 
                int base = tolower(s[i]) - 'a';     
                int shifted = (base + x) % 26;     
                putchar('a' + shifted);             
            }
        }
       printf ("\n");
    }

    return 0;
}

