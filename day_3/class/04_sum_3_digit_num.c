#include <stdio.h>

int main() {

    int input;

    printf("Enter a 3 digit number: ");
    scanf("%d", &input);

    int sum = 0;

    while (input > 0) {
        sum += input % 10;
        input /= 10;
    }

    printf("\nSum of digits is %d", sum);

    return 0;
}