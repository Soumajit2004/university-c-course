#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    if (num1 == num2){
        printf("both numbers are equal");
    }
    else if (num1 > num2){
        printf("%d num is greater", num1);
    }
    else{
        printf("%d num is greater");
    }

    return 0;
}