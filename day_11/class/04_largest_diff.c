#include <stdio.h>
#include <limits.h>

int main()
{

    int n = 10;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter num at index %d", i);
    }

    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
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

    printf("Largest difference: %d", max - min);

    return 0;
}