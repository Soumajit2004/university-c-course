#include <stdio.h>

int reverseHelper(int num, int rev)
{
    if (num == 0)
    {
        return rev;
    }
    return reverseHelper(num / 10, rev * 10 + (num % 10));
}

int main()
{

    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    printf("Reversed number: %d", reverseHelper(input, 0));

    return 0;
}