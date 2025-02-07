#include <stdio.h>

int main()
{
    int arr[20];
    int sum = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Enter %d no: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        sum += arr[i];
    }

    printf("\nAvarage of array: %.2f", (float)sum / 20);

    return 0;
}