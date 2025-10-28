#include <stdio.h>
#include <string.h>

struct Student {
    char id[10];
    char name[105];
    int age;
};

int main() {
    int N;
    scanf("%d", &N);
    getchar();

    struct Student students[1005];

    for (int i = 0; i < N; i++) {
        fgets(students[i].id, sizeof(students[i].id), stdin);
        students[i].id[strcspn(students[i].id, "\n")] = '\0'; 

        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; 

        scanf("%d", &students[i].age);
        getchar(); 
    }

    int Q;
    scanf("%d", &Q);

    for (int i = 1; i <= Q; i++) {
        int X;
        scanf("%d", &X);
        printf("Query #%d:\n", i);
        printf("Code: %s\n", students[X - 1].id);
        printf("Name: %s\n", students[X - 1].name);
        printf("Credits: %d\n", students[X - 1].age);
    }

    return 0;
}
