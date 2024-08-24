#include<stdio.h>
int main()
{
long n=0;
printf("enter n\n");
scanf("%u",&n);
long fact=1;
for(int i=n;i>=2;i--)
fact=fact*i;
printf("factorial is %u\n",fact);
return 0;
}
