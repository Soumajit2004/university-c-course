#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceFileName[50], destFileName[50];
    char ch;
    
    // Get source file name and create it
    printf("Enter source file name: ");
    scanf("%s", sourceFileName);
    
    // Write content to source file
    source = fopen(sourceFileName, "w");
    if (!source) {
        printf("Error creating source file!\n");
        return 1;
    }
    
    printf("Enter content (press Enter then Ctrl+D to finish):\n");
    getchar(); // Clear input buffer
    while ((ch = getchar()) != EOF) {
        fputc(ch, source);
    }
    fclose(source);
    
    // Copy to destination file
    printf("Enter destination file name: ");
    scanf("%s", destFileName);
    
    source = fopen(sourceFileName, "r");
    destination = fopen(destFileName, "w");
    
    if (!source || !destination) {
        printf("Error opening files!\n");
        if (source) fclose(source);
        return 1;
    }
    
    // Copy content
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
    
    fclose(source);
    fclose(destination);
    printf("Content copied from %s to %s\n", sourceFileName, destFileName);
    
    return 0;
}