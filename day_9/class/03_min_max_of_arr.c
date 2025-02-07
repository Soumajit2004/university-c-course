#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[20];
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < 20; i++)
    {
        printf("Enter %d no: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("\nMaximum element of array: %d", max);
    printf("\nMinimum element of array: %d", min);

    return 0;
}