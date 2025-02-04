#include <stdio.h>

int main()
{

    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    printf("\nThe series is as follows: \n");
    for (int i = 1; i <= input; i++)
    {
        printf("%d ", i * i);
    }

    return 0;
}