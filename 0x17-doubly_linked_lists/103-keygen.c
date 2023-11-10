#include "lists.h"

int main(int argc, char *argv[]) {
    int len, i;
char codex[] = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
  char password[7];
  if (argc != 2) {
    printf("Usage: %s <password length>\n", argv[0]);
    return 1;
  }

  len = atoi(argv[1]);

  


  srand(len);

  for (i = 0; i < len; i++) {
    password[i] = codex[rand() % 64];
  }

  password[len] = '\0';

  printf("%s\n", password);

  return 0;
}
