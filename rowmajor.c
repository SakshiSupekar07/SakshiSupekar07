#include<stdio.h>
int main()
{
    int A[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

int B[9]; 

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        B[i * 3 + j] = A[i][j]; 
    }
}
for(int i=0;i<3;i++)
{
    printf("%d\t",B[i]);
    
}

return 0;

}