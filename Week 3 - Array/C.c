#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T); // read number of test cases

    int matrix[50][50];
    int matrixb[50][50];
    int matrixc[50][50];
    int ordo;

    for (int t = 1; t <= T; t++){
        // read matrix size (order)
        scanf("%d", &ordo);

        // input matrix A
        for (int x = 0; x < ordo; x++){
            for (int y = 0; y < ordo; y++){
                scanf("%d", &matrix[x][y]);
            }
        }
        getchar(); // consume blank line after matrix A

        // input matrix B
        for (int x = 0; x < ordo; x++){
            for (int y = 0; y < ordo; y++){
                scanf("%d", &matrixb[x][y]);
            }
        }
        getchar(); // consume blank line after matrix B

        // input matrix C
        for (int x = 0; x < ordo; x++){
            for (int y = 0; y < ordo; y++){
                scanf("%d", &matrixc[x][y]);
            }
        }

        // multiply A × B → resultab
        int resultab[50][50] = {0};
        for (int x = 0; x < ordo; x++){
            for (int y = 0; y < ordo; y++){
                for (int z = 0; z < ordo; z++){
                    resultab[x][y] += matrix[x][z] * matrixb[z][y];
                }
            }
        }

        // multiply (A×B) × C → resultabc
        int resultabc[50][50] = {0};
        for (int x = 0; x < ordo; x++){
            for (int y = 0; y < ordo; y++){
                for (int z = 0; z < ordo; z++){
                    resultabc[x][y] += resultab[x][z] * matrixc[z][y];
                }
            }
        }

        // print final result
        printf("Case #%d:\n", t);
        for (int x = 0; x < ordo; x++){
            for (int y = 0; y < ordo; y++){
                printf("%d", resultabc[x][y]); // print each element
                if (y < ordo - 1){
                    printf(" "); // space between numbers, no trailing space
                }
            }
            printf("\n"); // new line after each row
        }
    }
}
