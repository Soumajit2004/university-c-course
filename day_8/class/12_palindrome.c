#include <stdio.h>

int main()
{

    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    int rev = 0;
    int n = input;

    while (n != 0)
    {
        int digit = n % 10;

        rev = (rev * 10) + digit;

        n /= 10;
    }

    if (rev == input)
    {
        printf("%d is palindrome", input);
    }
    else
    {
        printf("%d is not a palindrome", input);
    }

    return 0;
}