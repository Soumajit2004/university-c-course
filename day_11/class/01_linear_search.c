#include <stdio.h>

int main()
{

    int n = 10;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter num at index %d", i);
    }

    int ele;
    printf("Search Number: ");
    scanf("%d", &ele);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            printf("%d found in index %d", ele, i);
            return 0;
        }
    }

    printf("%d not found in array", ele);
    return 0;
}