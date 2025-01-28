#include <stdio.h>

int main()
{

    int input;
    printf("Enter a number");
    scanf("%d", &input);

    if (input == 0)
    {
        printf("number is 0");
    }
    else if (input > 0)
    {
        printf("%d is positive", input);
    }
    else
    {
        printf("%d is negative", input);
    }

    return 0;
}