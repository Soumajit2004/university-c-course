#include <stdio.h>

int main()
{

    int num1;
    printf("Enter 1st number: ");
    scanf("%d", &num1);

    int num2;
    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("%d is greater than %d", num1, num2);
    }
    else if (num1 < num2)
    {
        printf("%d is greater than %d", num2, num1);
    }
    else
    {
        printf("Both numbers are equal");
    }

    return 0;
}