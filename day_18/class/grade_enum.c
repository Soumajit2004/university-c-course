#include <stdio.h>

typedef enum {
    A,
    B,
    C,
    D,
    E,
    F
} Grade;

void display_message(Grade grade) {
    switch (grade) {
        case A:
            printf("Excellent!\n");
            break;
        case B:
            printf("Good job!\n");
            break;
        case C:
            printf("Well done!\n");
            break;
        case D:
            printf("You passed.\n");
            break;
        case E:
            printf("Better luck next time.\n");
            break;
        case F:
            printf("Failed.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }
}
int main() {
    Grade grade;

    printf("Enter your grade: ");
    char input;
    scanf(" %c", &input);

    if (input < 'A' || input > 'F') {
        printf("Invalid input. Please enter a letter between A and F.\n");
        return 1;
    }

    grade = (Grade)(input - 'A');
    display_message(grade);

    return 0;
}