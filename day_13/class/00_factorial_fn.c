#include <stdio.h>

int factorialFn(int num)
{
    int factorial = 1;

    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    return factorial;
}

int main()
{

    int input;
    printf("Enter your number: ");
    scanf("%d", &input);

    printf("%d is factorial", factorialFn(input));

    return 0;
}