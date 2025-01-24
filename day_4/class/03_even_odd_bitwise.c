#include <stdio.h>

int main()
{

    int input;

    printf("Enter the number: ");
    scanf("%d", &input);

    if (input & 1)
    {
        printf("%d is odd", input);
    }
    else
    {
        printf("%d is even", input);
    }

    return 0;
}