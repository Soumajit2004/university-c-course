#include <stdio.h>

int main() {

    int cel;

    printf("Enter temperature in cel: ");
    scanf("%d", &cel);

    printf("Temperature in F: %.2f", (float)cel * 9/5 + 32);

    return 0;
}