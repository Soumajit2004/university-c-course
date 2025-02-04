#include <stdio.h>
#include <math.h>

int main()
{

    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    int num = input;

    int ans = 0;
    while (num != 0)
    {
        int digit = num % 10;

        ans += pow(digit, 3);
        num /= 10;
    }

    if (input == ans)
    {
        printf("%d is a amstrong number", input);
    }
    else
    {
        printf("%d is not amstrong number", input);
    }

    return 0;
}