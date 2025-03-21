#include <stdio.h>

int countDigits(int num)
{
    if (num <= 0)
    {
        return 0;
    }

    return 1 + countDigits(num / 10);
}

int main()
{

    int input;
    printf("Enter your number: ");
    scanf("%d", &input);

    printf("No of digits: %d", countDigits(input));

    return 0;
}