#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char fileName[50], ch;
    int charCount = 0, wordCount = 0;
    int inWord = 0;
    
    printf("Enter filename: ");
    scanf("%s", fileName);
    
    fp = fopen(fileName, "r");
    if (!fp) {
        printf("Error opening %s!\n", fileName);
        return 1;
    }
    
    // Count characters and words
    while ((ch = fgetc(fp)) != EOF) {
        charCount++;
        
        if (isspace(ch)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            wordCount++;
        }
    }
    
    fclose(fp);
    
    printf("File: %s\n", fileName);
    printf("Characters: %d\n", charCount);
    printf("Words: %d\n", wordCount);
    
    return 0;
}