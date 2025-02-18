#include <stdio.h>

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    int index, element;

    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter index to replace: ");
    scanf("%d", &index);

    if (index > 10 && index < 0)
    {
        printf("\nIndex out of rage");
        return 0;
    }

    arr[index] = element;

    printf("\nUpdated array: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}