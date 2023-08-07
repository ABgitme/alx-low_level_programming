#include "main.h"


ssize_t read_textfile(const char *filename, size_t letters) {
  if (filename == NULL) {
    return (0);
  }

  FILE *fileinput = fopen(filename, "r");
  if (fileinput == NULL) {
    return (0);
  }

  char buffer[letters];
  ssize_t n = fread(buffer, 1, letters, fileinput);
  if (n == 0) {
    if (feof(fileinput)) {
      // The file ended normally
      return (0);
    } else {
      // An error occurred
      fclose(fileinput);
      return (0);
    }
  }

  printf("%s\n", buffer);
  fclose(fileinput);

  return n;
}
