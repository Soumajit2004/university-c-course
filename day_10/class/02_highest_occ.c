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

    int max_index = -1;

    for (int i = 0; i < 5; i++)
    {
        if (count[i] > max_index)
        {
            max_index = i;
        }
    }

    printf("Element %d has maximum count of %d", arr[max_index], count[max_index]);

    return 0;
}