#include <stdio.h>

int main() {
    FILE *fp;
    char name[50], section[10], address[100];
    int roll;
    
    fp = fopen("personal_info.txt", "w");
    if (!fp) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Enter your roll number: ");
    scanf("%d", &roll);
    getchar();
    
    printf("Enter your section: ");
    fgets(section, sizeof(section), stdin);
    
    printf("Enter your address: ");
    fgets(address, sizeof(address), stdin);
    
    fprintf(fp, "Name: %s", name);
    fprintf(fp, "Roll No: %d\n", roll);
    fprintf(fp, "Section: %s", section);
    fprintf(fp, "Address: %s", address);
    fclose(fp);
        
    printf("File contents:\n");
    fp = fopen("personal_info.txt", "r");
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);
    
    return 0;
}