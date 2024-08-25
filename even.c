#include<stdio.h>
int main()
{
    int i;
    printf("enter an integer");
    scanf("%d",&i);
    if(i%2==0)
    
        printf("%d is even number",i);
        else 
    printf("%d is odd number",i);
    return 0;
}