#include <stdio.h>

struct data {
    char code[9];     
    char name[101];
    int credits;       
};

int main() {
    struct data info[1001];
    int N;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%s", info[i].code);
        scanf(" %[^\n]", info[i].name);
        scanf("%d", &info[i].credits);
    }
    
    int Q;
    scanf("%d", &Q);
    
    for (int i = 0; i < Q; i++) {
        int x;
        scanf("%d", &x);
        printf("Query #%d:\n", i + 1);
        printf("Code: %s\n", info[x - 1].code);
        printf("Name: %s\n", info[x - 1].name);
        printf("Credits: %d\n", info[x - 1].credits);
    }
    
    return 0;
}
