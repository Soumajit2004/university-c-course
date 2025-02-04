#include <stdio.h>

int main()
{

    int input;
    printf("Enter a perfect number: ");
    scanf("%d", &input);

    int sum = 0;

    for (int i = 1; i < input; i++)
    {
        if (input % i == 0)
        {
            sum += i;
        }
    }

    if (sum == input)
    {
        printf("%d is a perfect number", input);
    }
    else
    {
        printf("%d is a not perfect number", input);
    }

    return 0;
}