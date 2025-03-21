#include <stdio.h>

int sumNum(int num)
{

    if (num <= 0)
    {
        return 0;
    }

    return num + sumNum(num - 1);
}

int main()
{

    int input;
    printf("Enter number: ");
    scanf("%d", &input);

    printf("\nSum of integers: %d", sumNum(input));

    return 0;
}