#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char N[11], M[101], C;
    int O;
    scanf("%s %[^\n]", &N, &M);
    scanf(" %c %d", &C, &O);
    printf("Id    : %s\n", N);
    printf("Name  : %s\n", M);
    printf("Class : %c\n", C);
    printf("Num   : %d\n", O);
    return 0;
}