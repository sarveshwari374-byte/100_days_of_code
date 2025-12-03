
// Q80: Multiply two matrices.

#include<stdio.h>
int main(){

    int m, n, p, q;
    int A[10][10], B[10][10], result[10][10];
    printf("Enter rows and columns of Martix A (m,n) = ");
    scanf("%d %d",&m,&n);
    printf("Enter rows and columns of Martix B (p,q) = ");
    scanf("%d %d",&p,&q);

    if (n != p){
        printf("Matrix multiplication not possible. Columns of A must equal to rows of B. \n");
        return 1;
    }

    printf("Enter elements of Matrix A (%d x %d) in row-major order: \n",m,n);
    for(int i = 0; i < m; i++){
        for(int j = 0 ; j < n; j++){
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter elements of Matrix B (%d x %d) in row-major order: \n",p,q);
    for(int i = 0; i < p; i++){
        for(int j = 0 ; j < q; j++){
            scanf("%d",&B[i][j]);
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < q; j++){
            result[i][j] = 0;
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < q; j++){
            for(int k = 0; k < n; k++){
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMartix A (%d x %d): \n",m,n);
    for(int i = 0; i < m; i++){
        for(int j = 0 ; j < n; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("\nMartix B (%d x %d): \n",p,q);
    for(int i = 0; i < p; i++){
        for(int j = 0 ; j < q; j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    printf("\nResultant Matrix (A X B) (%d x %d) : \n",m,q);
    for(int i = 0; i < m; i++){
        for(int j = 0 ; j < q; j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
