#include <stdio.h>

int printCenterBlankNumberPyramid(int n) {
    int space = 2 * (n-1);
    for (int i=1; i <= n; i++) {
        for (int j=1; j<=i; j++){
            printf("%d", j);
        }

        for (int k=1; k<=space; k++){
            printf(" ");
        }

        for (int j=i; j >=1; j--){
            printf("%d", j);
        }

        printf("\n");
        space -= 2;
    }
}


int printCenterBlankSquare(int n) {
    // Print the top half
    for (int i = n; i >= 1; i--) {
        // Print leading stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Print spaces
        for (int k = 1; k <= 2 * (n - i); k++) {
            printf(" ");
        }
        // Print trailing stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print the bottom half
    for (int i = 1; i <= n; i++) {
        // Print leading stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Print spaces
        for (int k = 1; k <= 2 * (n - i); k++) {
            printf(" ");
        }
        // Print trailing stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0; // Added return statement
}

void printButterfly(int n) {
    int spaces = 2 * n - 2;

    for (int i=1; i <= 2 * n - 1; i++) {
        int star = i <= n ? i : 2 * n - i;

        for (int j=1; j <= star; j++) {
            printf("*");
        }

        for (int k=1; k <= spaces; k++) {
            printf(" ");
        }

        for (int j=1; j <= star; j++) {
            printf("*");
        }

        printf("\n");

        if (i < n) {
            spaces -= 2;
        } else {
            spaces += 2;
        }
    }
}

int main() {

    // printCenterBlankNumberPyramid(5);
    // printCenterBlankSquare(4); // Keep n=4 for testing the fix
    printButterfly(4); // Keep n=4 for testing the fix

    return 0;
}