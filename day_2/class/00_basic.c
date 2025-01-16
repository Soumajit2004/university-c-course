#include <stdio.h>

int main() {

    char var;
    int num;

    printf("Enter a character: ");
    scanf("%c", &var);

    printf("Enter a integer: ");
    scanf("%d", &num);

    printf("Entered character is %c\n", var);

    printf("Entered character is %d", num);

    return 0;
}