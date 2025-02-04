#include <stdio.h>

int main()
{

    printf("Enter your quota:\n\tr - Residential\n\tc - Commercial\n\ti - Industrial\n\n Enter: ");
    char input = getchar();

    int unit;
    printf("Enter unit of electricity: ");
    scanf("%d", &unit);

    float cost;

    switch (input)
    {
    case 'r':
        cost = 0.5;
        break;

    case 'c':
        cost = 1;
        break;

    case 'i':
        cost = 1.5;
        break;

    default:
        printf("Invalid Value");
        return 0;
        break;
    }

    printf("\n%.2f is your total bill.", (float)cost * unit);

    return 0;
}