#include <stdio.h>

int main()
{
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    int ans = 0;
    int n = input;

    while (n != 0)
    {
        int digit = n % 10;

        ans = (ans * 10) + digit;

        n /= 10;
    }

    printf("Reverse Number is: %d", ans);

    return 0;
}