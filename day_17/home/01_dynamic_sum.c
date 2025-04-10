#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *arr;
    int n, i, sum = 0;
    
    // Get the size of the array from the user
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    // Dynamically allocate memory using malloc
    arr = (int *)malloc(n * sizeof(int));
    
    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    // Input elements from user
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", arr + i);  // Using pointer arithmetic
    }
    
    // Modify elements using pointer arithmetic
    printf("Modified array elements: ");
    for (i = 0; i < n; i++) {
        *(arr + i) = *(arr + i) * 2;  // Doubling each element
        printf("%d ", *(arr + i));
    }
    printf("\n");
    
    // Calculate sum using pointer arithmetic
    for (i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    
    // Display the sum
    printf("Sum of all elements: %d\n", sum);
    
    // Free the allocated memory
    free(arr);
    
    return 0;
}