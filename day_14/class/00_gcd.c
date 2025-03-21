#include <stdio.h>

int gcd(int a, int b)
{
    int t;

    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }

    return a;
}

int main()
{

    int num1, num2;

    printf("Enter 1st num: ");
    scanf("%d", &num1);

    printf("Enter 2nd num: ");
    scanf("%d", &num2);

    printf("\nGCD of %d and %d: %d", num1, num2, gcd(num1, num2));

    return 0;
}