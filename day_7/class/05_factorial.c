#include <stdio.h>

int main()
{

    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    int factorial = 1;

    for (int i = 1; i <= input; i++)
    {
        factorial *= i;
    }

    printf("Factorial of %d is %d", input, factorial);

    return 0;
}