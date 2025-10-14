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
int main (){
    int N;
    int C;
    scanf ("%d", &N);
    int x[100];
    for (int i =1; i <= N; i++){
   
        scanf ("%d", &C);
        for (int j =1; j <= C; j++){
            scanf ("%d", &x[j]);
        }
        printf ("Case #%d: \n", i);
        tree(x, 1, C, 0);
    }
}
