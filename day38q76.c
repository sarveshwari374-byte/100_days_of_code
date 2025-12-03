
// Q76: Check if a matrix is symmetric.

#include <stdio.h>
int main() {
    
    int rows, cols, symmetric = 1;
    int matrix[50][50];
    int transpose[50][50];
    printf("Enter the order of matrix (row,column) = ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of Matrix (%d x %d) in row-major order: \n",rows,cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }   
    }

    printf("\nThe matrix is : \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
        printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i]= matrix[i][j];
        }
    }

    if (rows != cols) {
        printf("False, as matrix is not a square martix\n");
        return 0;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != transpose[i][j]) {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric == 1)
        printf("True, it is symmetric.\n");
    else
        printf("False, it is not symmetric.\n");

    return 0;
}
        
