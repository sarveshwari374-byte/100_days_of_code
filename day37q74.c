
//Q74: Find the transpose of a matrix.

#include <stdio.h>
int main() {
    
    int rows, cols;
    printf("Enter the order of matrix (row,column) = ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    int transpose[cols][rows];

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

    printf("\nThe Transpose matrix is : \n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
        printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
