#include <stdio.h>

int main() {
    FILE *dataFile, *oddFile, *evenFile;
    int num;
    
    // Create data file with numbers 1-100
    dataFile = fopen("data.txt", "w");
    if (!dataFile) {
        printf("Error creating data.txt!\n");
        return 1;
    }
    
    for (int i = 1; i <= 100; i++) {
        fprintf(dataFile, "%d\n", i);
    }
    fclose(dataFile);
    
    // Sort numbers into odd and even files
    dataFile = fopen("data.txt", "r");
    oddFile = fopen("odd.txt", "w");
    evenFile = fopen("even.txt", "w");
    
    if (!dataFile || !oddFile || !evenFile) {
        printf("Error opening files!\n");
        return 1;
    }
    
    while (fscanf(dataFile, "%d", &num) == 1) {
        if (num % 2 == 0) {
            fprintf(evenFile, "%d\n", num);  // Fixed: even numbers to even.txt
        } else {
            fprintf(oddFile, "%d\n", num);   // Fixed: odd numbers to odd.txt
        }
    }
    
    fclose(dataFile);
    fclose(oddFile);
    fclose(evenFile);
    
    printf("Numbers sorted: even numbers in even.txt, odd numbers in odd.txt\n");
    return 0;
}