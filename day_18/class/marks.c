#include <stdio.h>

struct Marks {
    int internal;
    int external;
};

int main() {
    
    struct Marks student1 = {.internal=85, .external=90};
    struct Marks student2 = {.internal=78, .external=88};


    printf("Student 1 - Internal: %d, External: %d\n", student1.internal, student1.external);
    printf("Student 2 - Internal: %d, External: %d\n", student2.internal, student2.external);

    return 0;
}