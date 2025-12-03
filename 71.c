/* Q71: Read and print a matrix.
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4
*/
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int matrix[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}