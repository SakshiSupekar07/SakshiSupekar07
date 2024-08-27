#include <stdio.h>
#define MAXROW 10
#define MAXCOL 10

int main()
{
    int A[MAXROW][MAXCOL];
    int B[MAXROW][MAXCOL];
    int r, c;
    printf("enter the rows");
    scanf("%d", &r);
    printf("enter cls");
    scanf("%d", &c);
    printf("enter matrix elements");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter element [%d%d]:", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("matrix is\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", A[i][j]);
        }

        printf("\n");
    }
    int S=5;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            B[i][j]=5+A[i][j];
        }
    }
    printf("addition is\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {

            printf("%d\t", B[i][j]);
            

        }
         printf("\n");
         
    }
    return 0;
}
     
    