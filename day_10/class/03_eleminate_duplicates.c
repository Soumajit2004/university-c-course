#include <stdio.h>

int main()
{

    int arr[5] = {2, 4, 2, 4, 6};

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == 2)
        {
            printf("2 found in index %d", i);
            return 0;
        }
    }

    printf("2 not found in array");
    return 0;
}