#include<stdio.h>
int main()
{
    int p;
    printf("enter p");
    scanf("%d",&p);
    int flag=0;
    for(int i=2;i<p;i++)
    {
        if(p%i==0)
        printf("not prime number");
        flag=1;
        break;
    }

if(flag==0)
{       
printf("%d is  prime",p);

    }
    return 0;
}