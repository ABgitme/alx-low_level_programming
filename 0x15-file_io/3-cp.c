#include "main.h"

const int MODE = 0664;

int safe_close(int fd);

int main(int argc, char *argv[]) {
  int fd_from, fd_to, error;
  char buffer[1024];
  int bytes_read;

  if (argc != 3) {
    dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
    exit(97);
  }

  fd_from = open(argv[1], O_RDONLY);
  if (fd_from < 0) {
    dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
    exit(98);
  }

  fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, MODE);
  if (fd_to < 0) {
    dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
    safe_close(fd_from);
    exit(99);
  }

  error = 0;
  while ((bytes_read = read(fd_from, buffer, 1024)) > 0) {
    error = write(fd_to, buffer, bytes_read);
    if (error < 0) {
      break;
    }
  }

  safe_close(fd_to);
  safe_close(fd_from);

  if (error < 0) {
    exit(100);
  }

  return 0;
}

int safe_close(int fd) {
  int error = close(fd);
  if (error < 0) {
    dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
  }
  return error;
}

