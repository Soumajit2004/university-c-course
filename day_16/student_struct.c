#include <stdio.h>

 struct Student {
        char name[20];
        int roll;
        int marks;
    };

int main() {
    struct Student soumajit = {"Soumajit Ghosh", 24052265, 100};

    printf("Name : %s\nRoll: %d\nMarks: %d\n", soumajit.name, soumajit.roll, soumajit.marks);

    return 0;
}