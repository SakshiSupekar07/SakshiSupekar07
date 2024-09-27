#include<stdio.h>
int main()
{
    void *ptr =NULL;
    printf("The value of pointer variable is %p\n",ptr);
    int num=10;
    ptr=&num;
    printf("The address stored in the void pointer (ptr): %p\n", ptr);
    printf("The value stored in the void pointer (ptr): %d\n", ptr);
    printf("The value ofptr using typecasted void pointer: %d\n", *((int*)ptr));
    double doubleVar = 3.14159;
    ptr = &doubleVar;
    printf("The value of ptr using typecasted void pointer: %f\n", *((double*)ptr));


    return 0;
}