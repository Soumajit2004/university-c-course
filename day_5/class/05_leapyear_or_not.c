#include <stdio.h>

int main()
{

    int input;
    printf("Enter a year: ");
    scanf("%d", &input);

    if (input % 4 == 0 && input % 100 == 0 && input % 400 != 0)
    {
        printf("%d is leap year", input);
    }
    else
    {
        printf("%d is not leap year", input);
    }

    return 0;
}