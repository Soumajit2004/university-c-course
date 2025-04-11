#include <stdio.h>      

typedef enum {
    MONDAY = 0,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
} Weekday;

void print_weekday(int day) {
    switch (day) {
        case MONDAY:
            printf("Monday\n");
            break;
        case TUESDAY:
            printf("Tuesday\n");
            break;
        case WEDNESDAY:
            printf("Wednesday\n");
            break;
        case THURSDAY:
            printf("Thursday\n");
            break;
        case FRIDAY:
            printf("Friday\n");
            break;
        case SATURDAY:
            printf("Saturday\n");
            break;
        case SUNDAY:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input. Please enter a number between 0 and 6.\n");
    }
}
int main() {
    int day;

    printf("Enter a number (0-6) for the corresponding weekday: ");
    scanf("%d", &day);

    print_weekday(day);

    return 0;
}