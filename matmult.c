#include <stdio.h>
#include <stdlib.h>

int main() {
    int r1, c1, r2, c2;
    int i, j, k;

    
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    
    int **matrix1 = (int **)malloc(r1 * sizeof(int *));
    for (i = 0; i < r1; i++) {
        matrix1[i] = (int *)malloc(c1 * sizeof(int));
    }

    int **matrix2 = (int **)malloc(r2 * sizeof(int *));
    for (i = 0; i < r2; i++) {
        matrix2[i] = (int *)malloc(c2 * sizeof(int));
    }

    int **result = (int **)malloc(r1 * sizeof(int *));
    for (i = 0; i < r1; i++) {
        result[i] = (int *)malloc(c2 * sizeof(int));
    }
    int **res = (int **)malloc(r1 * sizeof(int *));
    for (i = 0; i < r1; i++) {
        res[i] = (int *)malloc(c2 * sizeof(int));
    }
    int **res1 = (int **)malloc(r1 * sizeof(int *));
    for (i = 0; i < r1; i++) {
        res1[i] = (int *)malloc(c2 * sizeof(int));
    }


    
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            res[i][j]+=matrix1[i][j]+matrix2[j][i];
        }
    }
     printf("Resultant matrix after addition:\n");
     for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t ", res[i][j]);
        }
        printf("\n");
     }
     for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            res1[i][j]+=matrix1[i][j]-matrix2[j][i];
        }
    }
    printf("Resultant matrix after Subtraction:\n");
     for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t ", res1[i][j]);
        }
        printf("\n");
     }

     for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Resultant matrix after multiplication:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    
    for (i = 0; i < r1; i++) {
        free(matrix1[i]);
    }
    free(matrix1);

    for (i = 0; i < r2; i++) {
        free(matrix2[i]);
    }
    free(matrix2);

    for (i = 0; i < r1; i++) {
        free(result[i]);
    }
    free(result);
     for (i = 0; i < r1; i++) {
        free(res[i]);
    }
    free(res);
     for (i = 0; i < r1; i++) {
        free(res1[i]);
    }
    free(res1);
    
    


    return 0;
}
