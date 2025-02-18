#include <stdio.h>

int main()
{
    int n = 10;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter num at index %d", i);
    }

    int index;
    printf("Enter index to remove: ");
    scanf("%d", &index);

    if (index < n || index > 0)
    {
        printf("\nIndex out of rage");
        return 0;
    }

    arr[index] = 0;

    for (int i = index; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    printf("\nFinal array: ");
    for (int i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }

    return 0;
}