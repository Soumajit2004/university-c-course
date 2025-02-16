#include <stdio.h>

int main()
{

    int arr[6] = {6, 8, 2, 4, 10, 0};

    for (int i = 0; i < 6 - 1; i++)
    {
        for (int j = 0; j < 6 - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array (desending): \n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}