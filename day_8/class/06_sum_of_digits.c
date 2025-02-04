#include <stdio.h>

int main()
{
    int number, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    int n = number;
    while (n != 0)
    {
        sum += n % 10;

        n /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}