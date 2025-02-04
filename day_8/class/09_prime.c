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

    int i = 2;
    while ((i * i) <= input)
    {
        if (input % i == 0)
        {
            printf("%d is not prime.", input);
            return 0;
        }

        i++;
    }

    printf("%d is prime.", input);

    return 0;
}