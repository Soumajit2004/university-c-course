#include <stdio.h>

void findLargest(int *arr, int size, int *largest)
{
    *largest = *arr;
    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) > *largest)
        {
            *largest = *(arr + i);
        }
    }
}

int main()
{
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest;
    findLargest(arr, n, &largest);

    printf("The largest element in the array is: %d\n", largest);

    return 0;
}