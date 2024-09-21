#include <stdio.h>

int main() {
   
    int *ptr = NULL;

   
    int intVar = 10;
    ptr = &intVar;

   
    printf("The value of ptr (address of intVar): %p\n", ptr);
    printf("The value pointed to by ptr (value of intVar): %d\n", *ptr);


    int **doublePtr;

    
    doublePtr = &ptr;

   
    printf("The address of ptr using double pointer: %p\n", doublePtr);
    printf("The value of intVar using double pointer: %d\n", **doublePtr);

    
    void **voidDoublePtr;
    void *voidPtr = ptr;  
    voidDoublePtr = &voidPtr;  

    
    printf("The value of intVar using void double pointer: %d\n", **(int **)voidDoublePtr);

    return 0;
}
