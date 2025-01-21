#include <stdio.h>

int main() {
    int inputMeter;

    printf("Enter distance in meters: ");
    scanf("%d", &inputMeter);

    printf("\n");

    printf("Distance is %d km and %d m", inputMeter / 1000, inputMeter % 1000);

    return 0;
}