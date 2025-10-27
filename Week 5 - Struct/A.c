#include <stdio.h>

struct data {
    char ID[21];
    char name[101];
    int age;
};

int main() {
    struct data info[1001];
    int N;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%s", info[i].ID);
        scanf(" %[^\n]", info[i].name);
        scanf("%d", &info[i].age);
    }
    
    int Q;
    scanf("%d", &Q);
    
    for (int i = 0; i < Q; i++) {
        int x;
        scanf("%d", &x);
        printf("Query #%d:\n", i + 1);
        printf("ID: %s\n", info[x - 1].ID);
        printf("Name: %s\n", info[x - 1].name);
        printf("Age: %d\n", info[x - 1].age);
    }
    
    return 0;
}
