#include "main.h"

/**
 * print_binary - function to convert int to binary
 * @n : int value to convert
 */
unsigned int _log2(unsigned int x) {
    int y = 0;
    while (x > 0) {
        x >>= 1;
        y++;
    }
    return y;
}
void print_binary(unsigned long int n)
{
      int len;

      len = (int)_log2(n) - 1;
      if (n == 0)
      {
      _putchar('0');
      }
      else
      {
    for ( ; len >= 0; len--) {
        _putchar('0' + ((n >> len) & 1));
    }
      }
}
