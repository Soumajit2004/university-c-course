#include <stdio.h>

int main() {

    int a, b, c;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\n\n");

    printf("Before swapping : a is %d : b is %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("After swapping : a is %d : b is %d", a, b);

    return 0;
}