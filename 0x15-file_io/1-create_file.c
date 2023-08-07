#include "main.h"

int create_file(const char *filename, char *text_content)
{
 int fd;
  size_t len;

  if (filename == NULL) {
    return -1;
  }

  fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
  if (fd < 0) {
    return -1;
  }

  len = strlen(text_content);
  write(fd, text_content, len);
  close(fd);

  return 1;   
}
