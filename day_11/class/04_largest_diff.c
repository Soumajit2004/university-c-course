#include <stdio.h>
#include <limits.h>

int main()
{

    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter element at index %d", i);
        scanf("%d", &arr[i]);
    }

    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < 10; i++)
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