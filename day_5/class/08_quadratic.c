#include <stdio.h>
#include <math.h>

int main()
{

    int a, b, c;
    double discriminant;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        printf("The equation has two distinct real roots.\n");
    }
    else if (discriminant == 0)
    {
        printf("The equation has two equal real roots.\n");
    }
    else
    {
        printf("The equation has two complex roots.\n");
    }

    return 0;
}