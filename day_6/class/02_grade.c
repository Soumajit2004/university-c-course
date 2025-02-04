#include <stdio.h>

int main()
{

    int input;
    printf("Enter your marks out of 100: ");
    scanf("%d", &input);

    switch (input)
    {
    case 71 ... 80:
        printf("Grade: A");
        break;

    case 81 ... 90:
        printf("Grade: E");
        break;

    case 91 ... 100:
        printf("Grade: O");
        break;

    default:
        printf("Fail");
        break;
    }

    return 0;
}