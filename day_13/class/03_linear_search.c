#include <stdio.h>

int search(int element, int arr[])
{
    for (int i = 0; i <= 10; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }

    return -1;
}

int main()
{

    int arr[10];
    int input;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter %dst no: ", i + 1);
        scanf("%d", &arr[i]);
    }

    scanf("%d", &input);

    int res = search(input, arr);

    if (res == -1)
    {
        printf("Number not found");
        return 0;
    }

    printf("Number found in index %d", res);

    return 0;
}