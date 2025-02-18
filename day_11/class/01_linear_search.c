#include <stdio.h>

int main()
{

    int arr[5] = {2, 4, 2, 4, 6};

    int ele;
    printf("Search Number: ");
    scanf("%d", &ele);

    for (int i = 0; i < 5; i++)
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