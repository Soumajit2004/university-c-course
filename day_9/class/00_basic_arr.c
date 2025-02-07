#include <stdio.h>

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d no: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nPrinting: \n");

    for (int i = 0; i < 5; i++)
    {
        printf("Element at index %d : %d\n", i, arr[i]);
    }

    return 0;
}