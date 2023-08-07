#include "main.h"


ssize_t read_textfile(const char *filename, size_t letters) {

  FILE *fileinput;
  ssize_t n;
  char *buffer;

   if (filename == NULL) {
    return (0);
  }
  fileinput = fopen(filename, "r");
  if (fileinput == NULL) {
    return (0);
  }
  buffer = malloc(letters);
  n = fread(buffer, 1, letters, fileinput);
  if (n == 0) {
    if (feof(fileinput)) {
      /* The file ended normally*/
      return (0);
    } else {
      /* An error occurred*/
      fclose(fileinput);
      return (0);
    }
  }

  printf("%s\n", buffer);
  fclose(fileinput);

  return n;
}
