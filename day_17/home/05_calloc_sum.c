#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n = 5, sum = 0, i;
    int* arr = (int*)calloc(n, sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    printf("Enter 5 integers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    printf("Sum: %d\n", sum);
    free(arr);
    return 0;
}