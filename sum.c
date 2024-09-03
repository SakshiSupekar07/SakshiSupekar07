#include <stdio.h>

#define SIZE 5 // Define the size of the array

int main() {
    double numbers[SIZE]; // Array to hold the real numbers
    double sum = 0.0;     // Variable to store the sum of elements
    double product = 1.0; // Variable to store the product of elements

    // Input 5 real numbers
    printf("Enter %d real numbers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Number %d: ", i + 1);
        scanf("%lf", &numbers[i]);
    }

    // Calculate sum and product of the elements
    for (int i = 0; i < SIZE; i++) {
        sum += numbers[i];
        product *= numbers[i];
    }

    // Output the results
    printf("Sum of all elements: %.2lf\n", sum);
    printf("Product of all elements: %.2lf\n", product);

    return 0;
}
