#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T); // read number of test cases
    
    for (int t = 1; t <= T; t++) {
        char A[20], B[20];
        scanf("%s %s", A, B); // read A and B as strings
        
        int lenA = strlen(A); // length of A
        int lenB = strlen(B); // length of B
        int i = lenA - 1, j = lenB - 1; // start from rightmost digits
        char result[25]; // store result digits (reversed)
        int k = 0; // result index
        
        // add digits from right to left without carry
        while (i >= 0 || j >= 0) {
            int a = (i >= 0) ? A[i] - '0' : 0; // get digit of A or 0
            int b = (j >= 0) ? B[j] - '0' : 0; // get digit of B or 0
            int sum = (a + b) % 10; // add without carry
            result[k++] = sum + '0'; // store as char
            i--; j--; // move left
        }
        
        // remove leading zeros from the result
        while (k > 1 && result[k - 1] == '0')
            k--;
        
        printf("Case #%d: ", t);
        // print result in reverse order
        for (int x = k - 1; x >= 0; x--)
            putchar(result[x]);
        printf("\n");
    }
    return 0;
}
