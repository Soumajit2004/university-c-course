#include <stdio.h>

int main()
{
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    int ans = 0;

    for (int n = input; n != 0; n /= 10)
    {
        int digit = n % 10;

        ans = (ans * 10) + digit;
    }

    printf("Reverse Number is: %d", ans);

    return 0;
}