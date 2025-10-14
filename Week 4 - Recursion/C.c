#include <stdio.h>


void tree(int arr[], int index, int C, int sum) {
    if (index > C) return;  

    sum += arr[index]; 

    int left = 2 * index;
    int right = 2 * index + 1;


    if (left > C && right > C) {
        printf("%d\n", sum);
        return;
    }


    tree(arr, left, C, sum);
    tree(arr, right, C, sum);
}


void readArray(int arr[], int index, int C) {
    if (index > C) return; 
    scanf("%d", &arr[index]);
    readArray(arr, index + 1, C); 
}


void solveCase(int caseNum, int totalCases) {
    if (caseNum > totalCases) return; 

    int C;
    scanf("%d", &C);
    int arr[105]; 


    readArray(arr, 1, C);

    printf("Case #%d:\n", caseNum);
    tree(arr, 1, C, 0); 


    solveCase(caseNum + 1, totalCases);
}

int main() {
    int T;
    scanf("%d", &T);
    solveCase(1, T); 
    return 0;
}

