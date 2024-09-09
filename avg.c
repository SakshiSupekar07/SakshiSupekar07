#include<stdio.h>
void main()
{
    int i,n,sum=0;
    float avg, favg;
    printf("Enter the integers");
    for(i=1;i<=10;i++)
    {
        
        scanf("%d",&n);
        sum+=n;
    }
    avg=sum/10.0;
    printf("sum is%d\n",sum);
    printf("avg is %f\n",avg);
    if(avg>50)
    {
    
       avg= avg/2;
    }
    printf("final avg is%.2f\n",favg);
}