#include <stdio.h>
#include <math.h>

int main()
{

    int input;
    printf("Enter energy units: ");
    scanf("%d", &input);

    int tariff = 0;

    if (input > 0)
    {
        int c = input > 100 ? 100 : input;
        tariff += c * 5;

        input -= 100;

        if (input > 0)
        {
            c = input > 100 ? 100 : input;
            tariff += c * 7;

            input -= 100;

            if (input > 0)
            {
                c = input;
                tariff += c * 10;
            }
        }
    }

    printf("Total cost: %d rs", tariff);

    return 0;
}