#include <stdio.h>
#include <stdlib.h>

#define min(a, b) ((a) < (b) ? (a) : (b))

int main()
{

    int num1, num2;
    int ans = 1;

    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    int i = 1;
    while (i <= min(num1, num2))
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            ans = i;
        }

        i++;
    }

    printf("\nGCD of %d and %d is: %d", num1, num2, ans);

    return 0;
}