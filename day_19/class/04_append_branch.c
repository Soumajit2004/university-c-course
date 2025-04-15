#include <stdio.h>

int main() {
    FILE *fp;
    char branch[50];
    
    // Open file for appending
    fp = fopen("personal_info.txt", "a");
    if (!fp) {
        printf("Error opening file!\n");
        return 1;
    }
    
    // Get branch name
    printf("Enter your branch name: ");
    fgets(branch, sizeof(branch), stdin);
    
    // Append to file
    fprintf(fp, "Branch: %s", branch);
    fclose(fp);
    
    // Display updated file
    printf("Branch added. Updated file content:\n");
    fp = fopen("personal_info.txt", "r");
    if (fp) {
        char ch;
        while ((ch = fgetc(fp)) != EOF) {
            putchar(ch);
        }
        fclose(fp);
    }
    
    return 0;
}