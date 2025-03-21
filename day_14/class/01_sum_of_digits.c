#include <stdio.h>

int sumDigits(int num)
{
    if (num <= 0)
    {
        return 0;
    }

    return (num % 10) + sumDigits(num / 10);
}

int main()
{

    int input;
    printf("Enter your number: ");
    scanf("%d", &input);

    printf("Sum of digits: %d", sumDigits(input));

    return 0;
}