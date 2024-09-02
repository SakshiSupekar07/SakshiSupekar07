#include <stdio.h>
#define MAXROW 10
#define MAXCOL 10

int main()
{
    int mat[MAXROW][MAXCOL];
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
            scanf("%d", &mat[i][j]);
        }
    }
    printf("matrix is\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", mat[i][j]);
        }

        printf("\n");
    }
    int sum=0;
    for(int i=0;i<r;i++)
    {

     sum=sum+mat[i][i];

    }
        printf("sum=%d",sum);
    
    return 0;
}