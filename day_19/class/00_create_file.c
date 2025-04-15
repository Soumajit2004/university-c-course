#include <stdio.h>

int main() {
    FILE *fp = fopen("hello.txt", "w");
    
    if (!fp) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fputs("hello world", fp);
    fclose(fp);
    
    printf("File created successfully.\n");
    return 0;
}