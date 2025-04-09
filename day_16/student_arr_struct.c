#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int roll;
    int marks;
};

int main() {
    struct Student arr[10];
    
    for (int i = 0; i < 10; i++) {
        struct Student s;
        char buffer[100];
        
        printf("\nStudent %d Information:\n", i + 1);
        
        printf("Enter student name: ");
        getchar();
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0';
        strcpy(s.name, buffer);
        
        printf("Enter roll number: ");
        scanf("%d", &s.roll);
        
        printf("Enter marks: ");
        scanf("%d", &s.marks);

        arr[i] = s;
    }

    printf("\n---------- Student Information ----------\n");

    for (int i = 0; i < 10; i++) {
        struct Student s = arr[i];
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\nRoll: %d\nMarks: %d\n", s.name, s.roll, s.marks);
    }
    
    return 0;
}