#include<stdio.h>
int main()
{
    int n;
    printf("enter value of n");
    scanf("%d",&n);
    if(n>=90)
    printf("A");
    else if(n>=80 && n<=89)
    printf("B");
    else if(n>=70 && n<=79)
    printf("C");
    else if(n>=60 && n<=69)
    printf("D");
    else
    printf("e");

    return 0;
}