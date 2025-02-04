#include <stdio.h>

int main()
{
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    if (input <= 1)
    {
        printf("%d is not prime.", input);
        return 0;
    }

    for (int i = 2; (i * i) <= input; i++)
    {
        if (input % i == 0)
        {
            printf("%d is not prime.", input);
            return 0;
        }
    }

    printf("%d is prime.", input);

    return 0;
}