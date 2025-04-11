#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char temp[100], *str;
    int len, i;
    
    // Input the string directly
    printf("Enter a string: ");
    fgets(temp, 100, stdin);
    
    // Remove newline character
    len = strlen(temp);
    if (temp[len-1] == '\n')
        temp[--len] = '\0';
    
    // Allocate memory for the string
    str = (char *)malloc((len+1) * sizeof(char));
    
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Copy string to allocated memory
    strcpy(str, temp);
    
    // Reverse the string
    for (i = 0; i < len/2; i++) {
        char c = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = c;
    }
    
    // Print the reversed string
    printf("Reversed: %s\n", str);
    
    // Free the allocated memory
    free(str);
    
    return 0;
}