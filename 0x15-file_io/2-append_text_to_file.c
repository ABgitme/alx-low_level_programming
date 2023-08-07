#include "main.h"


int append_text_to_file(const char *filename, char *text_content)
{
    int fd, fr;
    struct stat st;

    if (filename == NULL)
        return (-1);
   
if (text_content == NULL) {
    /* Check if the file exists*/
    if (stat(filename, &st) == 0) {
      /* File exists, return success*/
      return 1;
    } else {
      /* File does not exist, return failure*/
      return -1;
    }
  } else {
    /* Open the file in append mode*/
    fd = open(filename, O_APPEND | O_RDWR, 0);
    if (fd == -1) {
      return -1;
    }

    /* Write the text content to the file*/
    fr = write(fd, text_content, strlen(text_content));
    if (fr < 0) {
      close(fd);
      return -1;
    }

    close(fd);
    return 0;
  }
}
