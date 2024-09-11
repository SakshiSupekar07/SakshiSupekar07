#include<stdio.h>
int main()
{
    int *i;
    float *f;
    double* d;
    long* ul;
   printf("Size of integer pointer is%d\n",sizeof(i));
   printf("Size of float pointer is%zu\n",sizeof(f));
   printf("Size of double pointer is%zu\n",sizeof(d));
   printf("Size of unsigned long pointer is%zu\n",sizeof(ul));

   return 0;
}


