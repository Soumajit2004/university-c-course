#include <stdio.h>

int main() {

    int length, breadth;

    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter breadth: ");
    scanf("%d", &breadth);

    printf("Area of rectangle: %d", length * breadth);

    return 0;
}