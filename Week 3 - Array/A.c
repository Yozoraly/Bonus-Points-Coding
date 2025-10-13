// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int N;
    scanf ("%d", &N);
    int sort[N];
    int num[N];
    int result[N];
    for (int i = 0 ; i < N; i ++){
        scanf ("%d", &sort[i]);
    }
    for (int i = 0 ; i < N; i ++){
        scanf ("%d", &num[i]);
    }
    for (int i = 0; i < N; i++) {
    result[sort[i]] = num[i];
    }
        for (int i = 0; i < N; i++){
        printf ("%d", result[i]);
        if (i < N - 1) printf(" ");
        }
    return 0;
}
