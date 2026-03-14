//write a program to demonstrate the usage of free() with malloc ()
#include<stdio.h>
#include <stdlib.h> // Use stdlib.h instead of malloc.h

int main() {
    float *ptr;

    // Allocate memory for 5 floats
    ptr = (float *)malloc(5 * sizeof(float));
    
    // Check if memory allocation was successful
    if (ptr == NULL) {
        perror("Error allocating memory");
        return 1; // Exit if memory allocation fails
    }

    // Assign values to the allocated memory
    ptr[0] = 4.5;
    ptr[1] = 4.6;
    ptr[2] = 4.7;
    ptr[3] = 4.8;
    ptr[4] = 4.9;

    // Print a value from the allocated memory
    printf("Value at index 2: %f\n", ptr[2]);

    // Free the allocated memory
    free(ptr);
    ptr = NULL; // Optional: Set pointer to NULL after freeing

    return 0;
}