#include <stdio.h>

int sumOfDigits(int num)
{
    int sum = 0;

    for (int n = num; n != 0; n /= 10)
    {
        sum += n % 10;
    }

    return sum;
}

int main()
{

    int input;
    scanf("%d", &input);

    printf("Sum of digits: %d", sumOfDigits(input));

    return 0;
}