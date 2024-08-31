#include<stdio.h>
int main()
{
    int a=5;
    int b=10;
    int c;
    printf("a=%d,b=%d\n",a,b);
    c=b;
    b=a;
    a=c;
    printf("a=%d b=%d c=%d",a,b,c);
    return 0;
}