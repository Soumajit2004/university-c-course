#include <stdio.h>

int main()
{

    int arr[10] = {1, 2, 3, 4, 56, 6, 7, 8, 7, 5};

    int cp_arr[10];

    for (int i = 0; i < 10; i++)
    {
        cp_arr[i] = arr[i];
    }

    printf("Array copied successfully");

    return 0;
}