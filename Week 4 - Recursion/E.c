// Online C compiler to run C program online
#include <stdio.h>
int formula(int N){
    int result;
    if (N==1){
        return 1;
    } else if (N%2 == 0){
       result = formula(N/2);
    } else result = formula(N-1) + formula(N+1);
    return result;
}
int main() {
    int A;
    int N;
    int result;
    scanf ("%d", &A);
    for (int i = 1; i <= A;i++){
        scanf("%d", &N);
        result = formula(N);
        printf ("Case #%d: %d\n", i,result);
    }

    return 0;
}
