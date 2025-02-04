#include <stdio.h>

int main()
{

    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    int factorial = 1;

    int i = 1;
    while (i <= input)
    {
        factorial *= i;
        i++;
    }

    printf("Factorial of %d is %d", input, factorial);

    return 0;
}