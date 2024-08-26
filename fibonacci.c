#include<stdio.h>
int main()
{
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    if(n==0)
    printf("0");
    return 0;
    if(n==1||n==2)
    printf("1");
    return 0;
    int temp1=0,temp2=0,temp3=0;
    for(int i=0;i<n-2;i++)
    {
        temp3=temp1+temp2;
        temp1=temp2;
        temp2=temp3;
        printf("temp3=%d",temp3);
    }
}
