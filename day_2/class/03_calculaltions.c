#include <stdio.h>

int main()
{

    int num1, num2;

    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    printf("\n\n");
    printf("Sum of nums: %d\n", num1 + num2);
    printf("Difference of nums: %d\n", num1 - num2);
    printf("Product of nums: %d\n", num1 * num2);
    printf("Division of nums: %f", (float)num1 / num2);

    return 0;
}