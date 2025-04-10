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
        printf("\nStudent %d Information:\n", i + 1);
        
        printf("Enter student name: ");
        if (i > 0) getchar(); // Clear input buffer only after first iteration
        fgets(arr[i].name, sizeof(arr[i].name), stdin);
        arr[i].name[strcspn(arr[i].name, "\n")] = '\0';
        
        printf("Enter roll number: ");
        scanf("%d", &arr[i].roll);
        
        printf("Enter marks: ");
        scanf("%d", &arr[i].marks);
    }

    printf("\n---------- Student Information ----------\n");

    for (int i = 0; i < 10; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\nRoll: %d\nMarks: %d\n", 
               arr[i].name, arr[i].roll, arr[i].marks);
    }
    
    return 0;
}