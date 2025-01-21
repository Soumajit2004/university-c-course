#include <stdio.h>

int main()
{

    int inputSecond;

    printf("Enter time in seconds: ");
    scanf("%d", &inputSecond);

    int hour = inputSecond / 3600;
    int min = inputSecond % 3600;
    min = min / 60;
    int sec = inputSecond - (hour * 3600) - (min * 60);

    printf("\n");

    printf("Time is %d hrs %d mins and %d seconds", hour, min, sec);

    return 0;
}