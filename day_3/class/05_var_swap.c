#include <stdio.h>

int main() {

    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Before swapping: \nnum 1: %d - num 2: %d\n", a, b);

    int c = a;
    a = b;
    b = c;

    printf("After swapping: \nnum 1: %d - num 2: %d\n", a, b);

    return 0;
}