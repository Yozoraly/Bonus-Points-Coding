#include <stdio.h>

struct data {
    char ID[11];
    char name[16];
    int nilai;
};

struct data info[50001];

int main() {
    int N;
    float mean; 
    float total = 0;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%s", info[i].ID);
        scanf(" %[^\n]", info[i].name);
        scanf("%d", &info[i].nilai);
        total += info[i].nilai;
    }
    
    mean = (double)total / N;  
    
    for (int i = 0; i < N; i++) {
        if (info[i].nilai >= mean) { 
            printf("%s %s\n", info[i].ID, info[i].name);
        }
    }
    
    return 0;
}
