#include <stdio.h>

int sumOfArr(int i, int arr[])
{
    if (i >= 4) 
    {
        return 0;
    }

    return arr[i] + sumOfArr(i + 1, arr);
}

int main()
{
    int arr[4] = {1, 2, 3, 4};

    printf("%d", sumOfArr(0, arr)); 

    return 0;
}