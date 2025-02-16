#include <stdio.h>

int main()
{

    int arr[5] = {2, 4, 2, 4, 6};
    int count[5];

    for (int i = 0; i < 5; i++)
    {
        count[i] = 1;
    }

    for (int i = 0; i < 5; i++)
    {
        int ele = arr[i];

        if (count[i] != -1)
        {
            for (int j = i + 1; j < 5; j++)
            {
                if (ele == arr[j])
                {
                    count[i]++;
                    count[j] = -1;
                }
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (count[i] != -1)
        {
            printf("Element %d has %d entries\n", arr[i], count[i]);
        }
    }

    return 0;
}