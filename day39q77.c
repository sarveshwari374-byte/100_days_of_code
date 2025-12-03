
// Q77: Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>
int main() {
    
    int m, n, distinct = 1; 
    int matrix[50][50];
    int diag[50], dcount = 0;

    printf("Enter the order of matrix (row,column) = ");
    scanf("%d %d", &m, &n);
    printf("Enter elements of Matrix (%d x %d) in row-major order: \n",m,n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < m && i < n; i++) {
        diag[dcount++] = matrix[i][i];   
    }

    for (int i = 0; i < dcount; i++) {
        for (int j = i + 1; j < dcount; j++) {
            if (diag[i] == diag[j]) {
                distinct = 0; 
                break;
            }
        }
    }

    printf("\nThe matrix is : \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
        printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    if (distinct == 1){
        printf("\nTrue\n");
    }else{
        printf("\nFalse\n");
    }
    return 0;
}
