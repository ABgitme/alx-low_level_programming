#include "main.h"

int create_file(const char *filename, char *text_content)
{
int fd, fw;
int  len;

  if (filename == NULL) {
    return -1;
  }

  fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
  if (fd < 0) {
    return -1;
  }
if (text_content == NULL) {
len = 0;
}
else 
{
len = strlen(text_content);
}
fw = write(fd, text_content, len);
close(fd);
	if (fw < 0)
		return (-1);
return 1;   
}
