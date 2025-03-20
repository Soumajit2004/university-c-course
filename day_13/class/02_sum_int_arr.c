#include <stdio.h>

int sum(int arr[])
{
    int sum = 0;

    for (int i = 0; i < 20; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    int arr[20];

    for (int i = 0; i < 20; i++)
    {
        printf("Enter %dst no: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Sum of array: %d", sum(arr));

    return 0;
}