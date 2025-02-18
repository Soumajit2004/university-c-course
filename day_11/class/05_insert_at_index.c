#include <stdio.h>

int main()
{

    int n = 10;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter num at index %d", i);
    }

    int index, element;

    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter index to replace: ");
    scanf("%d", &index);

    if (index > n && index < 0)
    {
        printf("\nIndex out of rage");
        return 0;
    }

    arr[index] = element;

    printf("\nUpdated array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}