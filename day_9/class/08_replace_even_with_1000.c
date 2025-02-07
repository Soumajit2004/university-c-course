#include <stdio.h>

int main()
{
    int arr[20];
    int sum = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Enter %dst no: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr[i] = 1000;
        }
    }

    printf("Even nos changed to 1000");

    return 0;
}