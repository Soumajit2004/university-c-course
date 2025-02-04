#include <stdio.h>

int main()
{

    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    printf("\nMultiplication Table:\n");
    int i = 1;
    while (i <= 10)
    {
        printf("%d X %d = %d\n", input, i, input * i);
        i++;
    }

    return 0;
}