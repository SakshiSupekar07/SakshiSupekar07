#include<stdio.h>
int main()
    {
        int i,n;
        printf("Enter n\n");
        scanf("%d",&n);
        printf("Even number is\n");
        for(i=0;i<=n;i++)
        {
            if(i%2==0)
            {
                printf("%d\t",i);
                
            }
        }
        return 0;

    }
