#include <stdio.h>

int main() {

    FILE *fp = fopen("hello.txt", "r");
    char ch;
    
    if (!fp) {
        printf("Error opening file!\n");
        return 1;
    }

   while(1) {
      ch = fgetc (fp);
      if (ch == EOF)
         break;
      printf ("%c", ch);
   }


    fclose(fp);
    
    return 0;
}