#include <stdio.h>

int main()
{

    int num1, num2;

    printf("Enter 1st no: ");
    scanf("%d", &num1);

    printf("Enter 2nd no: ");
    scanf("%d", &num2);

    int *ptr1, *ptr2, *temp;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Before Swapping: %d - %d \n", *ptr1, *ptr2);

    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;

    printf("After Swapping: %d - %d", *ptr1, *ptr2);

    return 0;
}