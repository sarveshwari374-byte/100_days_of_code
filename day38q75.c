
// Q75: Add two matrices.

#include<stdio.h>
int main(){

    int A[100][100], B[100][100], C[100][100];
    int i, j, p, q;
    printf("Enter the order of matrix to be added = ");
    scanf("%d %d",&p,&q);
    
    printf("\nEnter elements of Matrix A (%d x %d) in row-major order: \n",p,q);
    for(i = 0; i < p; i++){
        for(j = 0; j < q; j++){
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B (%d x %d) in row-major order: \n",p,q);
    for(i = 0; i < p; i++){
        for(j = 0; j < q; j++){
            scanf("%d",&B[i][j]);
        }
    }

    for(i = 0; i < p; i++){
        for(j = 0; j < q; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nMartix A = \n");
    for(i = 0; i < p; i++){
        for(j = 0; j < q; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B = \n");
    for(i = 0; i < p; i++){
        for(j = 0; j < q; j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    printf("\nResultant matrix is = \n");
    for(i = 0; i < p; i++){
        for(j = 0; j < q; j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
    
