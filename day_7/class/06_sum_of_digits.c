#include <stdio.h>

int main()
{
    int number, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int n = number; n != 0; n /= 10)
    {
        sum += n % 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}