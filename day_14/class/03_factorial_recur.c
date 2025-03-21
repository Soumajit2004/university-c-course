#include <stdio.h>

int factorial(int num)
{

    if (num <= 1)
    {
        return 1;
    }

    return num * factorial(num - 1);
}

int main()
{

    int input;
    printf("Enter number: ");
    scanf("%d", &input);

    printf("\nFactorial of %d: %d", input, factorial(input));

    return 0;
}