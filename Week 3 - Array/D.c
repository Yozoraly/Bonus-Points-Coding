#include <stdio.h>

int main() {
    int T;  
    // T = number of test cases
    scanf(" %d", &T);

    long long choc[505][505]; 
    // 2D array to store chocolate counts (use long long to handle large values)
    int row, col;  

    // Loop for each test case
    for (int t = 1; t <= T; t++) {
        // Input number of rows and columns for the current test case
        scanf("%d %d", &row, &col);

        // Input all chocolate counts for each cell in the matrix
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                scanf("%lld", &choc[i][j]);
            }
        }

        long long totalchoc = 0;  
        // totalchoc will store the sum of maximum chocolates from each row

        // For each row, find the maximum chocolate count
        for (int i = 0; i < row; i++) {
            long long maxchoc = choc[i][0];  
            // Assume first element in the row is the maximum initially

            for (int j = 1; j < col; j++) {
                // Update maxchoc if a larger value is found
                if (choc[i][j] > maxchoc)
                    maxchoc = choc[i][j];
            }

            totalchoc += maxchoc;  
            // Add the maximum chocolate from this row to the total
        }

        // Output the result for the current test case
        printf("Case #%d: %lld\n", t, totalchoc);
    }

    return 0;
}
