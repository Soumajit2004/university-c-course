#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int *arr;
    int sum = 0, i;
    
    // Allocate memory and initialize to 0
    arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL) return 1;
    memset(arr, 0, 5 * sizeof(int));
    
    // Input elements
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    // Print sum
    printf("Sum: %d\n", sum);
    
    free(arr);
    return 0;
}