#include<stdio.h>
int main()
{
    int i=10;
    int *p=&i;
    printf("%d\n",*p);
    *p=100;
    printf("i=%d,add=%d",i,p);
    return 0;
}