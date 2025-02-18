#include <stdio.h>

int main()
{

    int n = 10;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter num at index %d", i);
    }

    int cp_arr[n];

    for (int i = 0; i < n; i++)
    {
        cp_arr[i] = arr[i];
    }

    printf("Array copied successfully");

    return 0;
}