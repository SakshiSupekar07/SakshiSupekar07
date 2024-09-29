#include<stdio.h>
void main()
{
    int n,reverse=0,remainder;
    printf("\n enter a integer:");
    scanf("%d",&n);
    while(n!=0)
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n/=10;
    }
    printf("reverse number=%d",reverse);
}