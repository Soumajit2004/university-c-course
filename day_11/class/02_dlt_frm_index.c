#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3};

    int index;
    printf("Enter index to remove: ");
    scanf("%d", &index);

    if (index < 10 || index > 0)
    {
        printf("\nIndex out of rage");
        return 0;
    }

    arr[index] = 0;

    for (int i = index; i < 9; i++)
    {
        arr[i] = arr[i + 1];
    }

    printf("\nFinal array: ");
    for (int i = 0; i < 10; i++)
    {

        printf("%d ", arr[i]);
    }

    return 0;
}