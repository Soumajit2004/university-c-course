#include <stdio.h>

struct employee {
   int age;
   float percent;
   char name[10];
};

int main() {

   FILE *fp;
   struct employee e[] = {
      {25, 65.5, "Ravi"}, 
      {21, 75.5, "Roshan"}, 
      {24, 60.5, "Reena"}
   };

   char *string;

   fp = fopen("file4.dat", "wb");
   for (int i = 0; i < 3; i++) {
      fwrite(&e[i], sizeof (struct employee), 1, fp);
   }

   fclose(fp);
   
   return 0;
}