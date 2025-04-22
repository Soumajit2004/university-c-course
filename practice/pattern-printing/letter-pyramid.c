#include <stdio.h>

void printPyramid(int n) {

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        char ch = 'A';

        // Loop 2*i-1 times
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%c", ch);
            // Increment char before the middle point (i), decrement after
            if (j < i) {
                ch++;
            } else {
                ch--;
            }
        }

        printf("\n");
    }
}

int main() {

    printPyramid(4);

    return 0;
}