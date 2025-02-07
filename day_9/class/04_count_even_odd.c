#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[10];
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter %d no: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    printf("\nNo of even element of array: %d", evenCount);
    printf("\nNo of odd element of array: %d", oddCount);

    return 0;
}