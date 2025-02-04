#include <stdio.h>

int main()
{

    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    printf("\nMultiplication Table:\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", input, i, input * i);
    }

    return 0;
}