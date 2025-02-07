#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[10];
    int largest, secondLargest;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter %d no: ", i + 1);
        scanf("%d", &arr[i]);
    }

    largest = secondLargest = INT_MIN;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }

        if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    printf("\nLargest element of array: %d", largest);
    printf("\nSecond Largest element of array: %d", secondLargest);

    return 0;
}