#include <stdio.h>

int main() {

    FILE *fp = fopen("hello.txt", "w+");

    if (!fp) {
        printf("Error opening file!\n");
        return 1;
    }


    fprintf(fp, "hello world %d\n", 123);
    fputs("hello world", fp);


    
    fclose(fp);


    return 0;
}