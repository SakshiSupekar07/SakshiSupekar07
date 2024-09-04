#include<stdio.h>
int main()
{
    int i,a[15];
    int max,min;
    printf("Enter the integers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
     for(i=1;i<10;i++)
    {
      if(a[i]>max)
      {
       max=a[i];
      }
    
   
      if(a[i]<min)
      {
        min=a[i];
        
      }
    }
   
    printf("The maximum element is%d\n",max);
     printf("The minimum element is%d\n",min);
    return 0;
}