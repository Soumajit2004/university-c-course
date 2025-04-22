#include <stdio.h>

void printPyramid(int n) {
    for (int i=1; i <= 2*n-1; i++) {
        int stars = i <= n ? i : 2*n - i;
        for(int j=1; j <=stars; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printPyramid(n);

    return 0;
}