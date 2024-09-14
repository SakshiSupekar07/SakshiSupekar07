#include <stdio.h>

int main() 
{
    
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int numsSize = sizeof(nums) / sizeof(nums[0]);

   
    int i = 0;
    int j;
     

    
    while (i < numsSize)
    {
        j = i + 1; 
        
        while (j < numsSize)
         {
            if (nums[i] + nums[j] == target) 
            {
                
                printf("Indices: [%d, %d]\n", i, j);
               
                
            }
            j++; 
        }
        return 0;
        

   
    }

}

    