#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year");
    scanf("%d",&year);
    if(year%400||year%4==0)
    
        printf("leap year");
        else
        
          printf("not a leap year");
        }