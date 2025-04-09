#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    int marks;
};

int main() {
    struct Student soumajit;
    
    printf("Enter student name: ");
    scanf("%[^\n]", soumajit.name);  
    
    printf("Enter roll number: ");
    scanf("%d", &soumajit.roll);
    
    printf("Enter marks: ");
    scanf("%d", &soumajit.marks);
    
    printf("\nStudent Information:\n");
    printf("Name : %s\nRoll: %d\nMarks: %d\n", soumajit.name, soumajit.roll, soumajit.marks);

    return 0;
}