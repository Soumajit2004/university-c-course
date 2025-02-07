#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[10];
    int low = 0;
    int high = 9;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter %d no: ", i + 1);
        scanf("%d", &arr[i]);
    }

    while (low < high)
    {

        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;

        low++;
        high--;
    }

    printf("\nReversed arr:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Ele at index %d : %d\n", i, arr[i]);
    }

    return 0;
}