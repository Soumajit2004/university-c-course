#include <stdio.h>

int main()
{

    int input;
    scanf("%d", &input);

    for (int row = 1; row <= input; row++)
    {
        int totalColInRow = row > input ? 2 * input - row : row;

        int totalSpaces = input - totalColInRow;

        for (int space = 0; space < totalSpaces; space++)
        {
            printf("  ");
        }

        for (int column = 1; column <= row; column++)
        {
            printf("%d ", column);
        }

        for (int column = row; column > 0; column--)
        {
            printf("%d ", column);
        }

        printf("\n");
    }

    return 0;
}