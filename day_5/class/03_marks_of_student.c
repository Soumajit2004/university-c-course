#include <stdio.h>

int main()
{

    int input;
    scanf("%d", &input);

    printf("Grade: ");

    if (input >= 90)
    {
        printf("O");
    }
    else if (input >= 80)
    {
        printf("E");
    }
    else if (input >= 70)
    {
        printf("A");
    }
    else
    {
        printf("F");
    }

    return 0;
}