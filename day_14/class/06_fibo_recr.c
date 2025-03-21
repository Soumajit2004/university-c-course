#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int input;
    printf("Enter the number: ");
    scanf("%d", &input);

    printf("Fibonacci: ");
    for (int i = 0; i < input; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}