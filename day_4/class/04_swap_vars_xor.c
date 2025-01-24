#include <stdio.h>

int main()
{

    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before swapping | a is %d | b is %d\n", a, b);

    a ^= b;
    b ^= a;
    a ^= b;

    printf("After swapping | a is %d | b is %d", a, b);

    return 0;
}