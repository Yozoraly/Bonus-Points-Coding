#include <stdio.h>
#include <string.h>

struct Student {
    char name[11];
    int group;
};

int main() {
    int T;
    scanf("%d", &T);
    
    for (int tc = 1; tc <= T; tc++) {
        int N;
        scanf("%d", &N);
        
        struct Student students[200];
        
        for (int i = 0; i < N; i++) {
            scanf("%s %d", students[i].name, &students[i].group);
        }
        
        printf("Case #%d:\n", tc);
        

        for (int g = 1; g <= 20; g++) {
            int count = 0;
            for (int i = 0; i < N; i++) {
                if (students[i].group == g) {
                    count++;
                }
            }
            
            if (count > 0) {
                printf("Group %d(%d):\n", g, count);
                
                for (int i = 0; i < N; i++) {
                    if (students[i].group == g) {
                        printf("%s\n", students[i].name);
                    }
                }
            }
        }
    }
    
    return 0;
}
