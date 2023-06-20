#include "main.h"
/**
 * print_alphabet_x10 - print alphabets
 */
void print_alphabet_x10(void)
{
int j = 0;
while (j < 10)
{
int i = 0;
char s[] = "abcdefghijklmnopqrstuvwxyz";
while (i < 26)
{
_putchar(s[i]);
++i;
}
++j;
_putchar('\n');
}
}
