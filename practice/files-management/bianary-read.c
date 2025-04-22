#include <stdio.h>

struct employee {
   int age;
   float percent;
   char name[10];
};

int main() {

   FILE *fp;
   struct employee e;

   fp = fopen ("file4.dat", "rb");

   if (fp == NULL) {
      puts ("Cannot open file"); 
      return 0;
   }

   while (fread (&e, sizeof (struct employee), 1, fp) == 1)
   printf ("Name: %s Age: %d Percent: %f\n", e.name, e.age, e.percent);

   fclose(fp);
   
   return 0;
}