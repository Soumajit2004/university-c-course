#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[10];
    int element;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter %d no: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter no you want to find: ");
    scanf("%d", &element);

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == element)
        {
            printf("%d found in array at position: %d", element, i);
            return 0;
        }
    }

    printf("%d not found in arr", element);

    return 0;
}