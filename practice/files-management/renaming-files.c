#include <stdio.h>

int main() {
  // old and new file names
  char * file_name1 = "file1.txt";
  char * file_name2 = "file2.txt";

  // Renaming old file name to new one
  if (rename(file_name1, file_name2) == 0) {
    printf("File renamed successfully.\n");
  } else {
    perror("There is an error.");
  }

  return 0;
}