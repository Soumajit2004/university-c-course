#include <stdio.h>

int main()
{
    int c;

    printf("Enter temperature in centigrade: ");
    scanf("%d", &c);

    float f = (c * 9.00 / 5.00) + 32;

    printf("Temperature in fahrenheit: %.1f", f);

    return 0;
}