// Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>
int main() {
    
    int n, m, sum = 0;
    int matrix[50][50];
    printf("Enter the order of matrix (row,column) = ");
    scanf("%d %d", &n, &m);

    if (n != m) {
        printf("Matrix is not square\n");
        return 0;
    }

    printf("Enter elements of Matrix (%d x %d) in row-major order: \n",m,n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe matrix is : \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
        printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];   
    }

    printf("The sum of main diagonal elements are = %d\n", sum);

    return 0;
}