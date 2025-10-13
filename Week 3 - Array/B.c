
#include <stdio.h>
int main() {
    int N;
    scanf ("%d", &N);
    int numNumbers;
    for (int i = 1 ; i <= N; i ++){
    scanf ("%d", &numNumbers);
    int num[numNumbers];
    for (int j = 0 ; j < numNumbers; j ++){
        scanf ("%d", &num[j]);
}
int count = 0;

 for (int z = 0; z < numNumbers; z++) {
            int found = 0; 

            for (int j = 0; j < numNumbers && !found; j++) {
                for (int k = 0; k < numNumbers; k++) {
                    if (j != k && num[j] + num[k] == num[z]) {
                        found = 1;
                        break;
                    }
                }
            }

            if (found)
                count++;
        }

printf ("Case #%d: %d\n", i, count);
}
    return 0;
}
